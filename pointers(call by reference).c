#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("\nYour Number : %d\n",a);
    increment(&a);
    printf("\nNew Number : %d\n",a);
}

void increment(int* p){
    *p = (*p)+7;
}
