const generateNumbers = (stack_size = 10) => {
	const getRandomNumber = () => Math.round(Math.random() * 10000) * (Math.random() <= 0.5 ? -1 : 1)
	let array = []

	for (let i = 0; i < stack_size; i++) {
		let random = getRandomNumber()

		do random = getRandomNumber()
		while (array.filter(n => n === random).length !== 0)

		array.push(random)
	}
	return array
}

console.log(generateNumbers(100).join(' '))
