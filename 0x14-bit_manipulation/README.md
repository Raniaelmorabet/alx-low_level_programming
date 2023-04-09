# <span style="color:red"><ins>bit manipulation</ins></span>
![img.png](img.png)
 * Computers do not understand natural languages as humans do. Instead, a computer is encoded at the lowest level to a series of ones and zeroes, called binary code. This code is read by the computer as instructions, telling it what to do next.

 * A single digit of a binary sequence is called a bit (or, binary digit), and can be either a one or a zero. Bits are the smallest unit of data used by computers to write instructions.

 * The binary number system runs on bits, which are base-2 numbers representing a logical state of either 0 or 1. 
Instructions at the processor level are written in machine language using bits. Any program written in any programming language, 
such as Java or Python, must be converted into machine language before execution.
 * A binary sequence (a sequence of bits) is read from right to left. In this case, we call the rightmost bit, 
the Least Significant Bit (LSB), and the leftmost bit, the Most Significant Bit (MSB).
A binary sequence of 8 bits (byte) can store any number from 0 to 255. However, historically, 
a byte represents different lengths of binary sequences in different computer architectures. For example, 
early IBM PCs used a byte to store 8 bits, while later models used a byte to store 6 or 7 bits. 
Similarly, a binary sequence consisting of multiple bytes (sometimes referred to as a “word”) can represent different lengths as well
## AND operator (&)
The AND operator (&) takes in two binary values and produces a third value whose bits are set to 1 if both of the bits compared are equal to 1. Otherwise, it returns a 0.

 **You can see how the logic of the AND operator works in a truth table:**
 ![img_1.png](img_1.png)
 We can use the AND (&) operator on two binary sequences of an equal length. To that end, you can compare each pair of bits at the same corresponding position and accumulate their result.
 For example, take two binary sequences
 X and Y , where 
 * X = 10 = (1010)2
 * Y = 9 = (1001)2
 * 
   Let’s find X&Y
![img_2.png](img_2.png)
 * To solve this, start comparing bit pairs from right to left.
 * Rightmost pair is 0&1 = 0
 * second pair from the right is 1&0 = 0
 * third pair is 0&0 = 0
 * leftmost pair is 1&1 = 1
## **_ressources_**
   * **[google](https://www.educative.io/blog/bit-manipulation-algorithms)**
   * **[youtube](https://www.youtube.com/watch?v=jlQmeyce65Q)**
# Learning Objectives
* **_How to manipulate bits and use bitwise operators_**
   