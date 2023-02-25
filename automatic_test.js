const { execFile } = require('child_process')
const stream = require('stream');


const generateNumbers = (stack_size = 10) => {
	const getRandomNumber = () => Math.round(Math.random() * 10000)
	let array = []

	for (let i = 0; i <= stack_size; i++) {
		let random = getRandomNumber()

		do random = getRandomNumber()
		while (array.filter(n => n === random).length !== 0)

		array.push(random)
	}
	return array
}

function executeAsyncFile(file, args, callback = () => { }) {
	return new Promise((resolve, reject) => {
		const childProcess = execFile(file, args, (err, data) => {
			if (err) return reject(err)
			return resolve(data)
		})
		callback(childProcess)
	})
}

async function testPushSwap(stack_size) {
	const numbers = generateNumbers(stack_size).join(' ')
	console.log('Stack Size', stack_size)

	const result = String(await executeAsyncFile('./push_swap', [numbers]))
	const checker_result =
		await executeAsyncFile(
			'./checker_linux',
			[numbers],
			(process) => {
				let stdinStream = new stream.Readable();
				stdinStream.push(result);
				stdinStream.push(null);
				stdinStream.pipe(process.stdin);
			}
		)

	console.log('CHECKER: ' + checker_result)
}

async function runTests(number) {
	console.log('test ' + number)
	await testPushSwap(1)
	await testPushSwap(3)
	await testPushSwap(5)
	await testPushSwap(10)
	await testPushSwap(50)
	await testPushSwap(100)
	await testPushSwap(150)
	await testPushSwap(200)
	await testPushSwap(500)
}

async function init() {
	for (let i = 0; i < 25; i++) {
		await runTests(i)
	}
}

init()
