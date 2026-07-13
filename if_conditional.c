#include <stdio.h> 
#define VALUE 65
int main() { 
#if VALUE > 50 
printf("Value is greater than 50"); 
#else 
printf("Value is 50 or less"); 
#endif 
return 0; 
}