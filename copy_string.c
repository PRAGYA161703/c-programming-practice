/* Write a C program to copy the string "Hello World" into another string variable and display the 
copied string.*/
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str1[] = "Hello World"; 
    char str2[20]; 
    strcpy(str2, str1); 
    printf("Copied String: %s\n", str2);   
    return 0; 
}