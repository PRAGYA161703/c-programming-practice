//Write a program to find the first occurrence of the character 'o' in the string "Hello World" using strchr(). 

#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str1[] = "Hello World";
    char *result = strchr(str1, 'o');
    if (result != NULL) {
        printf("Character found at position: %ld\n", result - str1);
    } else {
        printf("Character not found\n");
    }
    return 0;
}