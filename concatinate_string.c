// Create a program that concatenates the strings "Good" and " Morning" and prints the result.
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str1[20] = "Good "; 
    char str2[] = "Morning"; 
    strcat(str1, str2); 
    printf("Combined: %s\n", str1);   
    return 0; 
}