#include <stdio.h>
struct test {
    unsigned int x;
    long long y:33;
    unsigned int z;
};
int main()
{
    struct test t;
    unsigned int* ptr1 = &t.x;
    unsigned int* ptr2 = &t.z;
    printf("%d",ptr2- ptr1);
    return 0;
}