# BASIC MATHS
---
## COUNTING DIGITS
![alt text](Images/image.png)

>Time Complexity: O(log10 n)
---

## REVERSE A NUMBER
![alt text](Images/image-1.png)
>Time Complexity: O(log10 n)
---
## CHECK PALINDROME
![alt text](Images/image-2.png)
>Time Complexity: O(log10 n)
---
## ARMSTRONG NUMBER
>Time Complexity: O(d) where d is number of digits
---
## PRINT ALL DIVISORS
![alt text](Images/image-4.png)
>Time Complexity: O(n)

**Mathematical Optimization:**
![alt text](Images/image-5.png)
![alt text](Images/image-6.png)

>Time Complexity: O(√n)

>**why √n?**
If n = a * b, then at least one of those numbers must be ≤ √n. If both were greater than √n, their product would exceed n. Thus, to find all divisors, we only need to check up to √n.
Then, for each divisor i found, we can also include n/i as a corresponding divisor.
Then, sort the list of divisors to get them in ascending order.
---
## Prime Number
![alt text](Images/image-7.png)

**Brute Force Approach**
![alt text](Images/image-9.png)
>Time Complexity: O(n)

**Optimized Approach**
![alt text](Images/image-8.png)

>Time Complexity: O(√n)
---
## GCD & HCF
GCD - Greatest Common Divisor - The largest positive integer that divides two or more integers without leaving a remainder.
HCF - Highest Common Factor - Another term for GCD, representing the largest factor shared by two or more integers.

![alt text](Images/image-10.png)

**Brute Force Approach**
![alt text](Images/image-11.png)
>Time Complexity: O(min(a, b))

**Optimized Approach**
Works well in some cases but not all.
![alt text](Images/image-12.png)
>Time Complexity: O(min(a, b))

**Euclidean Algorithm**
>GCD(a, b) = GCD(b, a % b)
![alt text](Images/image-13.png)
![alt text](Images/image-14.png)
![alt text](Images/image-15.png)
>Time Complexity: O(log(min(a, b)))
---
