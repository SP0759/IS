"""
Write a Java/C/C++/Python program that contains a string (char pointer) with a value \Hello
World. The program should AND or and XOR each character in this string with 127 and display
the result
"""

string = input("Enter String: ")
result_and = ""
result_xor = ""

for char in string:
    # Bitwise AND with 127
    and_val = ord(char) & 127
    # Bitwise XOR with 127
    xor_val = ord(char) ^ 127
    
    result_and += chr(and_val)
    result_xor += chr(xor_val)

print("Original string: ", string)
print("AND result: ", result_and)
print("XOR result: ", result_xor)

"""
Output:-

PS F:\SAOE\A_SEM6\ISL> python .\_ISL_A1.py
Enter String: Hello World
Original string:  Hello World
AND result:  Hello World
XOR result:  7→‼‼►_(►



""" 