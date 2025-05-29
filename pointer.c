#include <stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    printf("%p\n",&a);//1000
    printf("%p\n",&ptr);//2000
    printf("%p\n",&*ptr);//1000
    printf("%d\n",*ptr);//10
    printf("%p\n",&ptr1);//3000
    printf("%d\n",**ptr1);//10

    return 0;
}
