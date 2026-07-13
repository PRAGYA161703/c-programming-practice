#include <stdio.h> 
#define DEBUG 
int main() { 
#ifdef DEBUG 
printf("Debugging is ON\n"); 
#endif 
return 0; 
}
