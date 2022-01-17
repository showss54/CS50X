# Week 1 - C
Introduction on a very traditional syntax based program - C

## Problem 1 - Mario
Problem: is to create a pyramid and the input is only in between 1-8

![Illustration](https://user-images.githubusercontent.com/87976355/149743080-fc87186d-cea7-4605-aa97-95d8ae6c6db6.png)

## Problem 2 - Cash / Greedy Algorithm
The problem is to basically ensure we use the biggest coin to fully exhaust the change that we will need to return to the customer. The available coins are:

- $0.25 - quarters
- $0.10 - dimes
- $0.05 - nickels
- $0.01 - pennies

The logic is somewhat simple. We simply need to construct a loop where it will first take away the amount by using the quarters using **while** since there may be a change amount where we may be able to use multiple quarters, such as $1 or $0.50.
