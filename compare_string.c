// Write a C program to compare two strings: "apple" and "apple" using the strcmp() function. Display whether they are equal or not. 
#include <stdio.h> 
#include <string.h> 

int main() { 
    char a[] = "apple"; 
    char b[] = "apple"; 
    int result = strcmp(a, b); 
    
    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    
    return 0; 
}