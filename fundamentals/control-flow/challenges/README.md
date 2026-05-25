# challenges — control-flow

> problems to practice if, else, and switch — no loops, no functions, just branching logic.

---

## easy

### challenge 01 — grade classifier
Ask the user for a numeric grade (0–100). Print the corresponding letter grade.

> A: 90–100 | B: 80–89 | C: 70–79 | D: 60–69 | F: below 60

**Expected output:**
```
Grade: 85
Letter: B
```

**File:** `01-grade-classifier.c`

---

### challenge 02 — bmi calculator
Ask the user for weight (kg) and height (m). Print the BMI and its classification.

> Underweight: below 18.5 | Normal: 18.5–24.9 | Overweight: 25–29.9 | Obese: 30 or above

**Expected output:**
```
Weight (kg): 70
Height (m): 1.75
BMI: 22.86
Classification: Normal
```

**File:** `02-bmi-calculator.c`

---

### challenge 03 — simple menu
Ask the user to choose a shape (1 = circle, 2 = square, 3 = triangle). Print the name and a brief description of each.

**Expected output:**
```
1 - Circle
2 - Square
3 - Triangle
Choice: 2
Shape: Square
Sides: 4
Angles: 90 degrees each
```

**File:** `03-simple-menu.c`

---

### challenge 04 — season detector
Ask the user for a month number (1–12). Print the corresponding season.

> Dec–Feb: Summer | Mar–May: Autumn | Jun–Aug: Winter | Sep–Nov: Spring

**Expected output:**
```
Month: 7
Season: Winter
```

**File:** `04-season-detector.c`

---

## medium

### challenge 05 — ticket price
Ask the user for age and whether they are a student (1 = yes, 0 = no). Print the ticket price based on the rules below.

> Under 12 or 60+: free | Student: 50% off | Full price: R$ 40.00  
> Student discount applies only if not already free

**Expected output:**
```
Age: 25
Student (1/0): 1
Ticket price: R$ 20.00
```

**File:** `05-ticket-price.c`

---

### challenge 06 — tax calculator
Ask the user for a monthly income. Print the tax rate, tax amount, and net income.

> Up to R$ 2000: exempt | R$ 2001–4000: 10% | R$ 4001–8000: 20% | Above R$ 8000: 35%

**Expected output:**
```
Monthly income: 5000.00
Tax rate : 20%
Tax amount: R$ 1000.00
Net income: R$ 4000.00
```

**File:** `06-tax-calculator.c`

---

### challenge 07 — shipping cost
Ask the user for package weight (kg) and destination region (1 = local, 2 = state, 3 = national). Print the shipping cost.

> Local: R$ 2.00/kg | State: R$ 4.50/kg | National: R$ 8.00/kg  
> Orders above 10kg get 10% discount on shipping

**Expected output:**
```
Weight (kg): 12
Region (1-3): 2
Shipping cost: R$ 48.60
```

**File:** `07-shipping-cost.c`

---

### challenge 08 — loan eligibility
Ask the user for monthly income, credit score (0–1000), and requested loan amount. Print whether the loan is approved, and if so, the interest rate.

> Score below 500: denied | Score 500–749: approved at 8% | Score 750+: approved at 4%  
> Loan amount must be at most 10x the monthly income

**Expected output:**
```
Monthly income: 3000.00
Credit score: 720
Loan amount: 20000.00
Status  : Approved
Interest: 8%
```

**File:** `08-loan-eligibility.c`

---

## hard

### challenge 09 — rpg combat
Ask the user for a hero's attack power and a monster's defense. Ask for the attack type (1 = normal, 2 = heavy, 3 = critical). Print the damage dealt and whether the monster was defeated (defense = monster's HP).

> Normal: 100% attack | Heavy: 150% attack, 80% accuracy (use attack > 20 as accuracy check) | Critical: 200% attack, always hits  
> Damage below 0 is always 0

**Expected output:**
```
Hero attack: 30
Monster defense: 40
Attack type (1-3): 2
Damage dealt: 45
Monster defeated: Yes
```

**File:** `09-rpg-combat.c`

---

### challenge 10 — vending machine
Ask the user to choose a product (1–4) and insert an amount in coins (integer cents). Print the product price, whether the payment is enough, and the change — or prompt to insert more.

> Water: R$ 2.00 | Juice: R$ 4.50 | Soda: R$ 5.00 | Coffee: R$ 3.50

**Expected output:**
```
1 - Water   R$ 2.00
2 - Juice   R$ 4.50
3 - Soda    R$ 5.00
4 - Coffee  R$ 3.50
Choice: 3
Insert amount (cents): 600
Product : Soda
Price   : R$ 5.00
Paid    : R$ 6.00
Change  : R$ 1.00
```

**File:** `10-vending-machine.c`

---

### challenge 11 — traffic fine
Ask the user for the speed limit and the recorded speed (both in km/h). Print the infraction level and fine amount.

> Up to limit: no fine | 1–20 km/h over: light — R$ 130.16 | 21–50 km/h over: medium — R$ 195.23 | Above 50 km/h over: severe — R$ 880.41 + license suspension warning

**Expected output:**
```
Speed limit (km/h): 60
Recorded speed (km/h): 95
Excess     : 35 km/h
Infraction : Medium
Fine       : R$ 195.23
```

**File:** `11-traffic-fine.c`

---

### challenge 12 — insurance quote
Ask the user for age, vehicle year, and whether they have a clean record (1 = yes, 0 = no). Print the base rate, applied adjustments, and final monthly premium.

> Base rate: R$ 200.00  
> Age under 25: +40% | Age 60+: +20%  
> Vehicle older than 10 years: +15%  
> No clean record: +25%  
> Adjustments stack

**Expected output:**
```
Age: 23
Vehicle year: 2010
Clean record (1/0): 0
Base rate  : R$ 200.00
Adjustments: +40% +15% +25%
Premium    : R$ 360.00
```

**File:** `12-insurance-quote.c`

---
