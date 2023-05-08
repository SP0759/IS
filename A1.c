// COTB38 Pawar Sumit Vikas
#include <stdio.h> 
#include <string.h> 
int main() { 
    char str[] = "Hello World"; 
    int len = strlen(str); 
    int i; 
    printf("Enter String: %s\n",str); 
    printf("Original String: %s\n",str); 
    for (i = 0; i < len; i++) { 
        str[i] = str[i] & 127; 
    } 
    printf("String after bitwise AND operation with 127 : %s\n", str); 
    int j; 
    for (j = 0; j < len; j++) { 
        str[j] = str[j] ^ 127; 
    } 
    printf("String after bitwise XOR operation with 127 : %s\n", str); 
    return 0; 
} 