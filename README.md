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
	- **sa** (swap a):
		. Swap the first 2 elements at the top of stack `a`
		. Do nothing if there is only one or no elements