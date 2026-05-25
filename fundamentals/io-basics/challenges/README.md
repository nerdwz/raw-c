# challenges — io-basics

> problems to practice printf and scanf — no control flow, no functions, just input and output.

---

## easy

### challenge 01 — unit converter
Ask the user for a distance in kilometers. Print it converted to meters, centimeters, and millimeters.

**Expected output:**
```
Distance (km): 2.5
Meters      : 2500.00
Centimeters : 250000.00
Millimeters : 2500000.00
```

**File:** `challenge01.c`

---

### challenge 02 — speed calculator
Ask the user for a distance (km) and time (hours). Print the average speed in km/h and m/s.

**Expected output:**
```
Distance (km): 150
Time (h): 2
Speed: 75.00 km/h
Speed: 20.83 m/s
```

**File:** `challenge02.c`

---

### challenge 03 — paint calculator
Ask the user for a wall's width and height, and how many square meters one paint can covers.
Print how many cans are needed (show with two decimal places).

**Expected output:**
```
Wall width (m): 8
Wall height (m): 3
Coverage per can (m2): 6
Cans needed: 4.00
```

**File:** `challenge03.c`

---

### challenge 04 — paycheck
Ask the user for an hourly wage and number of hours worked. Print the gross pay, 10% tax, and net pay.

**Expected output:**
```
Hourly wage: 25.00
Hours worked: 40
Gross pay : R$ 1000.00
Tax (10%) : R$  100.00
Net pay   : R$  900.00
```

**File:** `challenge04.c`

---

### challenge 05 — trip fuel cost
Ask the user for distance (km), fuel efficiency (km/L), and price per liter.
Print the total liters needed and total cost.

**Expected output:**
```
Distance (km): 300
Efficiency (km/L): 12
Price per liter: 5.89
Liters needed: 25.00
Total cost: R$ 147.25
```

**File:** `challenge05.c`

---

## medium

### challenge 06 — personal card

Ask the user for name, age, height, and weight. Print a formatted card with BMI (no classification needed).

> BMI = weight / (height * height)

**Expected output:**

---

```text
================================
         Personal Card
================================
Name   : John
Age    : 22
Height : 1.75m
Weight : 70kg
BMI    : 22.86
================================
```

**File:** `challenge06.c`

---

### challenge 07 — full calculator
Ask the user for two floats. Print results of addition, subtraction, multiplication, division, and remainder.

**Expected output:**
```
Enter two numbers: 9 4
9.00 + 4.00 = 13.00
9.00 - 4.00 = 5.00
9.00 * 4.00 = 36.00
9.00 / 4.00 = 2.25
9 % 4       = 1
```

**File:** `challenge07.c`

---

### challenge 08 — semester report
Ask the user for a student name and 4 grades. Print each grade, the average, and the total points.

**Expected output:**
```
Student: John
Grade 1: 7.5
Grade 2: 8.0
Grade 3: 6.5
Grade 4: 9.0
---------------------
Total  : 31.00
Average: 7.75
```

**File:** `challenge08.c`

---

### challenge 09 — cylinder stats
Ask the user for radius and height of a cylinder. Print volume and surface area.

> Volume = 3.14159 * radius * radius * height  
> Surface = 2 * 3.14159 * radius * (radius + height)

**Expected output:**
```
Radius: 3
Height: 10
Volume      : 282.74
Surface area: 245.04
```

**File:** `challenge09.c`

---

## hard

### challenge 10 — formatted invoice
Ask the user for 3 products: name, quantity, and unit price.
Print a detailed invoice with subtotals, 8% tax, and final total.

**Expected output:**
```
======== INVOICE ========
Notebook  x2  R$ 10.00  =  R$ 20.00
Pen       x5  R$  2.50  =  R$ 12.50
Eraser    x3  R$  1.00  =  R$  3.00
-------------------------
Subtotal         R$ 35.50
Tax (8%)         R$  2.84
Total            R$ 38.34
```

**File:** `challenge10.c`

---

### challenge 11 — time breakdown
Ask the user for a duration in seconds. Print it broken down into weeks, days, hours, minutes, and seconds.

> Use integer division `/` and modulo operator `%`

**Expected output:**
```
Seconds: 1000000
Weeks  : 1
Days   : 4
Hours  : 13
Minutes: 46
Seconds: 40
```

**File:** `challenge11.c`

---

### challenge 12 — pixel art canvas
Ask the user for canvas width, height, and pixel size in mm.
Print total pixels, total area in mm², cm², and m², and memory usage in bytes (each pixel = 3 bytes for RGB).

**Expected output:**
```
Canvas width (px) : 1920
Canvas height (px): 1080
Pixel size (mm)   : 0.25

Total pixels  : 2073600
Area (mm2)    : 129600.00
Area (cm2)    : 1296.00
Area (m2)     : 0.13
Memory (bytes): 6220800
Memory (KB)   : 6075.00
Memory (MB)   : 5.93
```

**File:** `challenge12.c`

---
