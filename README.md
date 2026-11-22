# RAINWATER HARVESTING SYSTEM
### A Case Study Project using C Programming

**Subjects:** Programming for Problem Solving (PPS) and Mathematics-I  
**Programming Language:** C  
**Project Type:** First-Year Engineering Case Study

---

## 1. Introduction

Rainwater harvesting is a process of collecting and storing rainwater for future use instead of allowing it to flow away as surface runoff.

With increasing water demand and decreasing groundwater levels, rainwater harvesting has become an important method of water conservation.

This project presents a **Rainwater Harvesting Calculator developed using C programming**. It calculates the amount of rainwater that can be collected from a rooftop based on roof area, rainfall and harvesting efficiency. It also estimates the required storage tank capacity and potential savings in water costs.

The project demonstrates the practical application of mathematical calculations and fundamental C programming concepts.

## 2. Problem Statement

A large amount of rainwater is wasted due to improper collection and storage. Many buildings have rooftops that can be used to collect rainwater, but people often lack an easy way to estimate how much water they can harvest.

The objective is to develop a simple C program that calculates the potential amount of harvestable rainwater, estimates suitable storage capacity and determines the possible financial savings.

## 3. Objectives

1. To understand the working principle of rooftop rainwater harvesting.
2. To calculate the amount of rainwater collected using mathematical formulas.
3. To estimate the required water storage tank capacity.
4. To calculate the potential savings from harvested water.
5. To implement mathematical concepts using C programming.
6. To understand the practical applications of programming in environmental conservation.

## 4. Features of the Project

The program provides three main operations through a menu-driven interface.

| Option | Feature | Description |
|---|---|---|
| 1 | Rainwater Harvesting Calculation | Calculates the total harvestable water. |
| 2 | Tank Capacity Calculation | Estimates the required and recommended tank capacity. |
| 3 | Water Cost Savings | Calculates the estimated monetary savings. |
| 4 | Exit | Terminates the program. |

## 5. Mathematical Concepts Used (Mathematics-I)

Mathematical concepts are used to perform the calculations required in the rainwater harvesting process.

### A. Unit Conversion

Rainfall is measured in millimetres, while roof area is measured in square metres.

An important relationship is:

**1 mm of rainfall over 1 square metre = 1 litre of water.**

This relationship allows us to calculate the volume of rainwater directly in litres.

### B. Percentage Calculation

Harvesting efficiency represents the percentage of rainwater that can actually be collected.

For example, if the harvesting efficiency is 80%, only 80% of the total rooftop rainfall is considered harvestable.

Formula:

Harvestable Water = (Total Rainwater × Efficiency) / 100

### C. Mathematical Modelling

The real-world rainwater harvesting process is represented using mathematical equations.

The program accepts user inputs and applies these equations to estimate the amount of water collected and stored.

### D. Arithmetic Operations

The program uses:
- Multiplication to calculate harvested water.
- Division to calculate percentages and savings.
- Addition and multiplication to estimate additional tank capacity.
- Comparison operations to validate input values.

### E. Ratio and Proportion

The relationship between total rainfall and harvestable water depends on harvesting efficiency.

For example, at 80% efficiency, the collected water is 80 litres for every 100 litres of gross rooftop rainfall.

## 6. Mathematical Formulas

### Formula 1: Total Rainwater

Total Rainwater (V) = Roof Area (A) × Rainfall (R)

Where:
- A = Roof area in square metres.
- R = Rainfall in millimetres.
- V = Total rainwater in litres.

### Formula 2: Harvestable Rainwater

H = (A × R × E) / 100

Where:
- H = Harvestable water in litres.
- A = Roof area in square metres.
- R = Rainfall in millimetres.
- E = Harvesting efficiency in percentage.

### Formula 3: Recommended Tank Capacity

Recommended Capacity = Harvestable Water × 1.10

An additional 10% is included as a planning allowance.

### Formula 4: Water Cost Savings

Savings = (Stored Water / 1000) × Water Cost per 1000 Litres

The result represents the estimated monetary savings in rupees.

## 7. Programming Concepts Used (PPS)

The project demonstrates several fundamental concepts of Programming for Problem Solving.

| C Programming Concept | Application in the Project |
|---|---|
| Header File | `stdio.h` for input and output operations. |
| Variables | Store roof area, rainfall, efficiency and water quantity. |
| Data Types | `int` and `float` are used to store values. |
| Input/Output | `printf()` and `scanf()` accept and display information. |
| Operators | Arithmetic and relational operators perform calculations and comparisons. |
| Functions | Separate functions perform individual calculations. |
| Function Declaration | Functions are declared before `main()`. |
| Switch Statement | Provides menu-based selection. |
| If-Else Statement | Checks whether the entered values are valid. |
| Do-While Loop | Repeats the menu until the user exits. |
| Return Statement | Returns control from functions and terminates execution when required. |

### Functions Used

1. `main()` – Controls the overall execution and displays the menu.
2. `calculateRainwater()` – Calculates the harvestable rainwater.
3. `calculateTankCapacity()` – Estimates the required and recommended tank capacity.
4. `calculateWaterSavings()` – Calculates the estimated financial savings.

## 8. Algorithm

**Step 1:** Start the program.

**Step 2:** Display the Rainwater Harvesting System menu.

**Step 3:** Ask the user to enter their choice.

**Step 4:** Perform the selected operation:

- If choice is 1, accept roof area, rainfall and harvesting efficiency. Calculate the harvestable water.
- If choice is 2, accept roof area, rainfall and harvesting efficiency. Calculate the required and recommended tank capacity.
- If choice is 3, accept stored water and water cost. Calculate the estimated savings.
- If choice is 4, exit the program.

**Step 5:** Validate the input values before performing calculations.

**Step 6:** Display the calculated result.

**Step 7:** Repeat the menu until the user chooses Exit.

**Step 8:** Stop the program.

## 9. Sample Input and Output

### Example 1: Rainwater Harvesting Calculation

**Input:**

- Roof Area = 100 m²
- Rainfall = 50 mm
- Harvesting Efficiency = 80%

**Calculation:**

Harvestable Water = (100 × 50 × 80) / 100

Harvestable Water = 4000 litres

**Output:**

```text
--- Rainwater Harvesting Calculation ---

Enter roof area (in square metres): 100
Enter rainfall (in mm): 50
Enter harvesting efficiency (0 to 100): 80

Total Harvestable Water: 4000.00 litres
Harvesting Efficiency: 80.00%
```

### Example 2: Tank Capacity Calculation

**Input:**

- Roof Area = 100 m²
- Rainfall = 50 mm
- Harvesting Efficiency = 80%

**Calculation:**

Required Tank Capacity = 4000 litres

Recommended Tank Capacity = 4000 × 1.10

Recommended Tank Capacity = 4400 litres

### Example 3: Water Cost Savings

**Input:**

- Stored Water = 4000 litres
- Water Cost per 1000 litres = ₹50

**Calculation:**

Savings = (4000 / 1000) × 50

Savings = ₹200

## 10. Applications

1. Residential buildings for rooftop rainwater collection.
2. Schools and colleges for water conservation.
3. Commercial buildings and office complexes.
4. Agricultural buildings and farms.
5. Estimating rainwater harvesting potential before installing a storage system.
6. Promoting awareness about water conservation.

## 11. Advantages

- Simple and user-friendly interface.
- Reduces wastage of rainwater by estimating collection potential.
- Helps in planning storage tank capacity.
- Provides an estimate of potential water cost savings.
- Demonstrates the practical use of mathematics and programming.
- Encourages sustainable water management.

## 12. Limitations

- The program uses a simplified calculation model.
- It does not consider actual monthly or annual rainfall distribution.
- It assumes a fixed harvesting efficiency.
- It does not account for water consumption during rainfall or changes in tank water levels.
- The recommended tank capacity is an estimate and should be checked against actual rainfall patterns and water demand.

## 13. Future Scope

The project can be improved by adding:
- Monthly and annual rainfall calculations.
- Multiple building calculations.
- Actual tank storage and overflow tracking.
- Water consumption estimation.
- Graphical representation of collected rainwater.
- Saving calculation reports to a file.

## 14. Conclusion

The Rainwater Harvesting System successfully demonstrates how C programming and mathematical concepts can be applied to solve a real-world environmental problem.

Through this project, we learned to use functions, conditional statements, loops, operators and input/output operations in C programming.

We also applied mathematical concepts such as unit conversion, percentages, ratios, arithmetic operations and mathematical modelling to calculate rainwater collection, tank capacity and estimated water savings.

This project highlights the importance of rainwater harvesting and shows how simple computer programs can contribute to environmental awareness and sustainable water management.

---

**Project Title:** Rainwater Harvesting System  
**Subjects:** PPS and Mathematics-I  
**Language:** C Programming