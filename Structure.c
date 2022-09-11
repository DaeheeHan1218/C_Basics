#include <stdio.h>
#include <stdlib.h>
/*
    way of having multiple data type
    ex) int, double, float, char are data type.
*/
struct person{
    char name[20];
    int age;
};
int main(void)
{
    char name[20];
    scanf("%s", &name);
    struct person john = {name, 20};
    printf("%s", john.name);
    return 0;
}
