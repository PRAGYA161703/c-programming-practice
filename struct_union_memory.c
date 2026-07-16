//  Compare the size of a structure and a union having 3 different data types.
#include <stdio.h>

struct Test1 {
    int a;
    float b;
};

union Test2 {
    int a;
    float b;
};

int main() {
    struct Test1 s = {10, 20.5};

    union Test2 u;
    u.a = 10;
    printf("Union (int): %d\n", u.a);

    u.b = 20.5f;
    printf("Union (float): %.2f\n", u.b);

    printf("Structure: %d, %.2f\n", s.a, s.b);

    return 0;
}
