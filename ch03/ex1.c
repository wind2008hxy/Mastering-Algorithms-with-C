#include <stdio.h>
#include "facttail.h"
#include "fact.h"

int main(void){
    int a = fact(5);
    int b = facttail(5, 1);
    printf("a is %d\n", a);
    printf("b is %d\n", b);

    return 0;
}
