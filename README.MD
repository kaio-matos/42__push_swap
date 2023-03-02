<h1 align="center">
    <img alt="Push Swap" src="https://game.42sp.org.br/static/assets/achievements/push_swape.png" width="200px" />
</h1>

# Push Swap

This project aims to introduce 42 students into stacks and sorting algorithms. The main focus is to get optimized pre defined operations to sort stack `a`.

The allowed operations are:

```
sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.

sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
ss : sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.
```

## Execution

With Make installed just run `make` in the terminal to compile the program:
```bash
make
```

Then execute the program using the following rules:
`./push_swap LIST_OF_NUMBERS`, the program should print an list of the previous mentioned operations for the sorting.

## Testing
To test the program execute `node automatic_test.js`

### Examples

```bash
ARG="$(shuf -i 1-100000 -n 5 | tr '\n' ' ')" && make && ./push_swap $ARG
ARG="$(seq -100000 100000 | shuf -n 5 | tr '\n' ' ')" && make && ./push_swap $ARG # Includes in the list negative numbers
```
```bash
ARG="$(shuf -i 1-100000 -n 100 | tr '\n' ' ')" && make && ./push_swap $ARG
ARG="$(seq -100000 100000 | shuf -n 100 | tr '\n' ' ')" && make && ./push_swap $ARG # Includes in the list negative numbers
```
```bash
ARG="$(shuf -i 1-100000 -n 500 | tr '\n' ' ')" && make && ./push_swap $ARG
ARG="$(seq -100000 100000 | shuf -n 500 | tr '\n' ' ')" && make && ./push_swap $ARG # Includes in the list negative numbers
```


### How should behave
```bash
----------------------------------------------------------------------------------------------------------
Init a and b:
2
1
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
1
2
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
----------------------------------------------------------------------------------------------------------
```

### Note

I'm uploading too the files to debug inside vscode, because I don't want to lose the configuration.

