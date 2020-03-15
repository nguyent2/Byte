# [L06: Bytes](https://docs.google.com//document/d/1BvbnKcN1xBYoNIQrv0XQOFmafxjr9o1LsGloj9gAp-Q/edit#heading=h.c1x99npetnfu)

## Lab designed to learn about bits, bytes, and binary
## and to reinforce working with C++ classes and arrays

## Thy H. Nguyen
## Author of stub: Jan Pearce, Berea College

1. **WHITEBOARD DESIGN**
*Write a high level design plan for your program.
You can use screenshots of your work on an actual white board 
or you can use pseudocode.*

Use a Boolean accessor (getter) method, call it is_odd(), to check to see if the byte has odd parity, 
returning true if it has odd parity and false otherwise. 

A void mutator (setter) method, call it set_even(), to set the parity bit for even parity.
Check the first 7 bits and then set the parity bit to ensure even parity for the byte.

A void mutator (setter) method, call it set_odd(), to set the parity bit for odd parity. 
Check the first 7 bits and then set the parity bit to ensure odd parity for the byte.

An accessor (getter) method, call it array_value(), to return the byte array to an array in main.

A void mutator (setter) method that “flips” all of the bits, call it flipping(),
meaning that it turns all trues to falses and all falses to true.

A void mutator (setter) method, call it apply_mask(), that takes an 8-bit Boolean array as an input parameter 
that can be used as a mask. The mask is applied to the private member variable byte. 

An overloaded operator so cout can be used to print the byte. Call it friend ostream (this is a friend function)

A main method that fully tests all of the methods of the class.

First, I use is_odd() to check if the number of ones is odd or even. 
If is_odd() returns true, I use the set_even for the parity bit, meaning the parity bit is 0.
If is_odd() returns false, I use the set_odd for the parity bit, meaning the parity bit is 1.
Then, I use the array_value() to return the byte array into main.
Then, I use flipping() to convert trues to falses and all falses to trues.
Then I use the apply_mask() to add to that result. 

2. **CRC Card**
*Complete a CRC Card for the Byte class. Be sure to keep this up to date.
I have given you some example rows. Add as many as you need.*

| **Name**                       | **Byte**  
| :----------------------------- | :-------------------------- 
| **Class Methods**              | **Collaborations** 
| is_odd()                       |  Arrays  
| set_even()                     |	
| set_odd()                      |
| array_value()
| flipping()
| apply_mask() 
| show_byte()                    |
| **Class Data**                 |  **Collaborations**  
| bool byte[8]                   |  Arrays 
| const int bytelen = 8          |      
| int count;                     |  Integer
| friend ostream

3. **PARITY PROBLEMS**
*Can you identify any possible problems with the parity method 
of error detecting? If so, what are they, explain. 
(There ARE problems with it, so typically more robust methods 
are used when data integrity matters.)*

I think that using the parity method of error detecting will somtimes gives a problem. 
Sometimes, after flipping from 0 to 1, I think the computer actually adding the mask. 
The computer is actually working in hexadecimal (especially in how the computer actually saves it data),  
overflowing/ underflowing or any other computer arithmetic errors will be contributing to an error.

4. **PARITY SOLUTION**
*Can you think of an idea that would solve the problem(s) you identified?*

I think that in order to solve the problems, as a human, 
we try to change the error (by doing some calculations first by hand, 
come up with better algorithm in order to save both time and space, 
as well as to avoid computer arithmetic errors. We usually need to track the result in order to avoid errors.

5. **PROCESS SUMMARY**
*Briefly summarize your design and implementation process, 
including how much your initial design plan evolved, 
the final results you achieved, and the amount of time you spent 
as a programmer or programmers in accomplishing these results. 
This should be one or at most two paragraphs.*

I think that this design and implementation process went well. I achieved what I want at first.
I spent five hours coding this assignment.

6. **IMPLEMENTATIONS**
*Please briefly describe what was accomplished including 
the largest challenges overcome and any innovations that were not 
specifically required by the assignment.*

I did not overcome any challenges as I can use my knowledge about changing numbers from base 10 to base 2 (binary),
and I can use the partitions in combinatorics to solve the problems.

7. **BIG O ANALYSIS**
*Please analyze the Big O of all of the methods of the Byte class, 
including constructors. Note that even though you know that the data 
or input size is 8, you still call this “n” and base your answers on n. 
This means you imagine byte size could change. 
(This is not so far fetched. Register sizes have changed a lot. 
The first desktop computers were 8-bit machines. 
Today we typically work with 64-bit machines, 
but it wasn’t that long ago that 32-bit machines were predominant, 
so your Win10 operating system actually has a mix of 32-bit 
and 64-bit code.)

I think that O(n)=n The reason is that we are looping through every single one of the bit.
(This is linear)

8. **TESTING**
*Please briefly describe your testing process. 
Here you should be careful to select representative input cases, 
including both representative typical cases as well as extreme cases.*

Testing the rare cases and they pass.
Case where the mask is all trues, or all falses, or mixed.

9. **ERRORS**
*List in bulleted form of all known errors 
and deficiencies with a very brief explanation.*


I did not have any error.

10. **LEARNING AND REACTION**
*A paragraph or so of your own comments 
on what you learned and your reactions to this lab.*

I love this lab as I love binary and counting numbers with binary.
This lab is such a computer science lab applying the concept of combinatorics. 
Specifically, this is the concept of counting how many ways one can partition n (the number of bits we have) 
into k parts such that k is an even non-negative integer.

11. **INTEGRITY STATEMENT**
*Please briefly describe ALL help you received and 
all help you gave to others in completing this lab.
Also list all other references below.*

I did not receive help from anyone else in completing this lab.

## References:
- This repo contains a stub by Jan Pearce
- To be updated