# EXPERIMENT 7 : Arrays and Strings in C++

## Aim
- To study the concepts of arrays and strings in C++.
- To implement basic programs involving arrays and strings such as searching, reversing, and manipulation operations.

## Apparatus
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Arrays in C++
An array is a linear data structure that holds a fixed number of elements of the same data type. Arrays are useful for storing data such as marks, lists, or sequences and allow indexed access to elements.

### Strings in C++
Strings are used to store sequences of characters. In C++, strings can be handled either using character arrays (`char[]`) or using the `string` class from the C++ Standard Library. String operations include concatenation, reversal, length checking, and palindrome detection.

---

## Program 1: Search an Element in an Array

### Algorithm
1. Start  
2. Declare an integer array and necessary variables  
3. Read size of array and array elements from user  
4. Read the element to search  
5. Use a `for` loop to compare each element with the target  
6. If found, display the position  
7. If not found, display "Element not found"  
8. End

---

## Program 2: Reverse an Array

### Algorithm
1. Start  
2. Declare and read size of array and elements  
3. Initialize two index variables: `start = 0`, `end = size - 1`  
4. Swap elements at `start` and `end` while `start < end`  
5. Increment `start`, decrement `end`  
6. Display the reversed array  
7. End

---

## Program 3: Take Input and Display Elements of an Array

### Algorithm
1. Start  
2. Declare an array and read its size  
3. Use a loop to input each element from user  
4. Use another loop to print each element  
5. End

---

## Program 4: Take a String as Input and Display It

### Algorithm
1. Start  
2. Declare a string variable  
3. Use `getline()` or `cin` to take string input  
4. Display the string using output statement  
5. End

---

## Program 5: Concatenation of Two Strings

### Algorithm
1. Start  
2. Declare two string variables  
3. Read both strings from the user  
4. Use the `+` operator or `.append()` method to join them  
5. Display the concatenated string  
6. End

---

## Program 6: Reverse a String

### Algorithm
1. Start  
2. Read the string from the user  
3. Initialize a new string for storing the reverse  
4. Use a loop to copy characters from the end to the start  
5. Display the reversed string  
6. End

---

## Program 7: Check if a String is a Palindrome

### Algorithm
1. Start  
2. Read a string from the user  
3. Reverse the string  
4. Compare the original and reversed strings  
5. If both are equal, print "Palindrome"  
6. Else, print "Not a Palindrome"  
7. End

---

## Functions

- Use arrays to store and process lists of values.
- Use indexing and loops to perform operations on arrays.
- Take string input using `cin` or `getline()`.
- Use built-in operators and functions to manipulate strings.
- Perform common string tasks like concatenation, reversal, and palindrome check.

## Conclusion
Through this lab, I learned how to work with arrays and strings in C++. I practiced taking input, displaying data, searching elements, and manipulating content through reversal and concatenation. I also explored how to identify palindromes and use loop structures with arrays and strings. These programs strengthened my understanding of basic data handling and logic building in C++.
