# 42 Push Swap


## Introduction

The **push_swap**  project is a simple and a highlyl straightforward algorithm project: Data needs to be sorted!<br>

You have at your disposal a set of integers values, 2 stacks, and a set of instructions to manipulate both stacks.<br>

## Mandatory Part

Write a `C` program called `push_swap` which calculated and displays on the standard output the smallest program, made of ***Push Swap language*** instructuions, that sorts the integers received as arguments.

### The rules

- You have 2 stacks named `a` and `b`
- At the beginning:
	- The stack `a` contains a random amount of negative and / or positive numbers which connot be duplicated
	- The stack `b` is empty
- The goal is to sort in ascending order numbers into stack `a`. To do so you have the following list of operations at your disposal:

	- **sa** (swap a):<br>
		. Swap the first 2 elements at the top of stack `a`<br>
		. Do nothing if there is only one or no elements<br>

	- **sb** (swap b):<br>
		. Swap the first 2 elements at the top of stack `b`<br>
		. Do nothing if there is only one or no elements<br>

	- **ss** : `sa` and `sb` are run at the same time

	- **pa** (push a):<br>
		. Take the first element at the top of `b` and put it at hte top of `a`<br>
		. Do nothing if `b` is empty<br>

	- **pb** (push b):<br>
		. Take the first element at the top of `a` and put it at hte top of `b`<br>
		. Do nothing if `a` is empty<br>

	- **ra** (rotate a):<br>
		. Shift up all elements of stack `b` and put it at the top of `a`<br>
		. Do nothing if `b` is empty<br>

	- **rb** (rotate b):<br>
		. Shift up all elements of stack `a` and put it at the top of `b`<br>
		. Do nothing if `a` is empty<br>

	- **rr** : `ra` and `rb` are run at the same time

	- **rra** (reverse rotate a):<br>
		. Shift down all elements of stack `a` by 1<br>
		. The last element becomes the first one<br>

	- **rrb** (reverse rotate b):<br>
		. Shift down all elements of stack `b` by 1<br>
		. The last element becomes the first one<br>

	- **rrr** : `rra` and `rrb` are run at the same time