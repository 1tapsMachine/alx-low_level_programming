# alx-low_level_programming

## Description

This repository contains programs written in C that focus on various programming concepts and challenges. Each program is designed to accomplish a specific task using C programming techniques.

## Tasks

1. [Positive anything is better than negative nothing](#task-0-positive-anything-is-better-than-negative-nothing)
2. [The last digit](#task-1-the-last-digit)
3. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](#task-2-i-sometimes-suffer-from-insomnia-and-when-i-cant-fall-asleep-i-play-what-i-call-the-alphabet-game)
4. [alphABET](#task-3-alphabet)
5. [When I was having that alphabet soup, I never thought that it would pay off](#task-4-when-i-was-having-that-alphabet-soup-i-never-thought-that-it-would-pay-off)
6. [Numbers](#task-5-numbers)
7. [Numberz](#task-6-numberz)
8. [Smile in the mirror](#task-7-smile-in-the-mirror)
9. [Hexadecimal](#task-8-hexadecimal)
10. [Patience, persistence and perspiration make an unbeatable combination for success](#task-9-patience-persistence-and-perspiration-make-an-unbeatable-combination-for-success)
11. [Inventing is a combination of brains and materials. The more brains you use, the less material you need](#task-10-inventing-is-a-combination-of-brains-and-materials-the-more-brains-you-use-the-less-material-you-need)
12. [The success combination in business is: Do what you do better... and: do more of what you do...](#task-11-the-success-combination-in-business-is-do-what-you-do-better-and-do-more-of-what-you-do)

### Task 0: Positive anything is better than negative nothing

**Mandatory**

This program assigns a random number to the variable `n` each time it is executed. The source code needs to be completed to print whether the number stored in the variable `n` is positive or negative.

- The variable `n` will store a different value every time you run this program.
- Do not modify the existing code that uses `rand`, `srand`, and `RAND_MAX`.
- The output of the program should be:
  - The number, followed by
  - If the number is greater than 0: "is positive"
  - If the number is 0: "is zero"
  - If the number is less than 0: "is negative"
  - Followed by a new line.

### Task 1: The last digit

**Mandatory**

This program assigns a random number to the variable `n` each time it is executed. Complete the source code to print the last digit of the number stored in the variable `n`.

- The variable `n` will store a different value every time you run this program.
- Do not modify the existing code that uses `rand`, `srand`, and `RAND_MAX`.
- The output of the program should be:
  - The string "Last digit of", followed by
  - The value of `n`, followed by
  - The string "is", followed by
  - If the last digit of `n` is greater than 5: "and is greater than 5"
  - If the last digit of `n` is 0: "and is 0"
  - If the last digit of `n` is less than

 6 and not 0: "and is less than 6 and not 0"
  - Followed by a new line.

### Task 2: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- All your code should be in the `main` function.
- You can only use `putchar` twice in your code.

### Task 3: alphABET

**Mandatory**

Write a program that prints the alphabet in lowercase and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- All your code should be in the `main` function.
- You can only use `putchar` three times in your code.

### Task 4: When I was having that alphabet soup, I never thought that it would pay off

**Mandatory**

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except 'q' and 'e'.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- All your code should be in the `main` function.
- You can only use `putchar` twice in your code.

### Task 5: Numbers

**Mandatory**

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the `main` function.

### Task 6: Numberz

**Mandatory**

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type `char`.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You can only use `putchar` twice in your code.
- All your code should be in the `main` function.

### Task 7: Smile in the mirror

**Mandatory**

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You can only use `putchar` twice in your code.
- All your code should be in the `main` function.

### Task 8: Hexadecimal

**Mandatory**

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- All your code should be in the `main` function.
- You can only use `putchar` three times in your code.

### Task 9: Patience, persistence and perspiration make an unbeatable combination for success

**Mandatory**

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by ", " (comma and space).
- Numbers should be printed in ascending order.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- All your code should be in the `main` function.
- You can only use `putchar` four

 times maximum in your code.
- You are not allowed to use any variable of type `char`.

### Task 10: Inventing is a combination of brains and materials. The more brains you use, the less material you need

**#advanced**

Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by ", " (comma and space).
- The two digits must be different.
- "01" and "10" are considered the same combination of the two digits 0 and 1.
- Print only the smallest combination of two digits.
- Numbers should be printed in ascending order, with two digits.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You can only use `putchar` five times maximum in your code.
- You are not allowed to use any variable of type `char`.
- All your code should be in the `main` function.

### Task 11: The success combination in business is: Do what you do better... and: do more of what you do...

**#advanced**

Write a program that prints all possible different combinations of three digits.

- Numbers must be separated by ", " (comma and space).
- The three digits must be different.
- "012", "120", "102", "021", "201", "210" are considered the same combination of the three digits 0, 1, and 2.
- Print only the smallest combination of three digits.
- Numbers should be printed in ascending order, with three digits.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You can only use `putchar` six times maximum in your code.
- You are not allowed to use any variable of type `char`.
- All your code should be in the `main` function.

## Task 12: Software is eating the World

**#advanced**

Write a program that prints all possible combinations of two two-digit numbers.

- The numbers should range from 0 to 99.
- The two numbers should be separated by a space.
- All numbers should be printed with two digits. For example, 1 should be printed as 01.
- The combination of numbers must be separated by a comma and a space.
- The combinations of numbers should be printed in ascending order.
- "00 01" and "01 00" are considered the same combination of the numbers 0 and 1.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You can only use `putchar` eight times maximum in your code.
- You are not allowed to use any variable of type `char`.
- All your code should be in the `main` function.

Here is an example of the expected output:

```
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

You can find the code for this task in the following file:

- GitHub repository: alx-low_level_programming
- Directory: 0x01-variables_if_else_while
