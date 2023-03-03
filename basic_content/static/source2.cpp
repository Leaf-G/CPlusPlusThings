// source2.cpp
#include <cstdio>
extern const char *msg;
extern const int i;
void sayHello()
{
    printf("%s", msg);
    printf("%d\n", i);
}


int main()
{
    sayHello();
    return 0;
}