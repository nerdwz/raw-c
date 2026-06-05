````markdown
# challenges — flow-loops

> problems to practice for, while, do while, break, and continue — no functions, just loops and logic.

---

## easy

### challenge 01 — multiplication table
Ask the user for a number and print its multiplication table from 1 to 10.

**Expected output:**
```
Enter a number: 7
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70
```

**File:** `01-multiplication-table.c`

---

### challenge 02 — sum series
Ask the user for a positive integer N. Print the sum of all integers from 1 to N.

**Expected output:**
```
Enter N: 10
Sum from 1 to 10: 55
```

**File:** `02-sum-series.c`

---

### challenge 03 — countdown
Ask the user for a positive integer and count down to 0, printing each number. Print "Go!" at the end.

**Expected output:**
```
Enter a number: 5
5
4
3
2
1
0
Go!
```

**File:** `03-countdown.c`

---

### challenge 04 — digit counter
Ask the user for a positive integer and count how many digits it has.

**Expected output:**
```
Enter a number: 3847
Digits: 4
```

**File:** `04-digit-counter.c`

---

## medium

### challenge 05 — prime checker
Ask the user for a positive integer and determine whether it is prime.

**Expected output:**
```
Enter a number: 17
17 is prime.
```

**File:** `05-prime-checker.c`

---

### challenge 06 — fibonacci
Ask the user for a positive integer N and print the first N terms of the Fibonacci sequence.

**Expected output:**
```
Enter N: 8
0 1 1 2 3 5 8 13
```

**File:** `06-fibonacci.c`

---

### challenge 07 — pattern printer
Ask the user for a number N and print a right triangle of asterisks with N rows, then print it upside down (without repeating the middle row).

**Expected output:**
```
Enter N: 4
*
**
***
****
***
**
*
```

**File:** `07-pattern-printer.c`

---

### challenge 08 — number guesser
Generate a fixed target number (e.g. 42). Ask the user to guess it. Print "Too low", "Too high", or "Correct!" after each attempt. Count the attempts.

**Expected output:**
```
Guess: 20
Too low.
Guess: 60
Too high.
Guess: 42
Correct! You got it in 3 attempts.
```

**File:** `08-number-guesser.c`

---

## hard

### challenge 09 — collatz
Ask the user for a positive integer. Apply the Collatz sequence (even: divide by 2 / odd: multiply by 3 and add 1) until reaching 1. Print each step and the total number of steps.

**Expected output:**
```
Enter a number: 6
6 3 10 5 16 8 4 2 1
Steps: 8
```

**File:** `09-collatz.c`

---

### challenge 10 — number pyramid
Ask the user for a number N and print a centered number pyramid with N rows.

**Expected output:**
```
Enter N: 4
   1
  1 2
 1 2 3
1 2 3 4
```

**File:** `10-number-pyramid.c`

---

### challenge 11 — mini cashier
Ask the user how many products they are buying. For each product, read the price. Print the subtotal, a 10% discount if the total exceeds R$ 100.00, and the final total.

**Expected output:**
```
Number of products: 3
Price of item 1: 45.00
Price of item 2: 30.00
Price of item 3: 40.00
Subtotal : R$ 115.00
Discount : R$ 11.50
Total    : R$ 103.50
```

**File:** `11-mini-cashier.c`

---

### challenge 12 — perfect numbers
Ask the user for a positive integer N. Print all perfect numbers from 1 to N. A perfect number equals the sum of its proper divisors.

**Expected output:**
```
Enter N: 1000
Perfect numbers up to 1000:
6
28
496
```

**File:** `12-perfect-numbers.c`

---
````