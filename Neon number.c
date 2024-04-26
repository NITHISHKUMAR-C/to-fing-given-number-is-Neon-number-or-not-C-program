#include <stdio.h>

int main() {
    int num,square,m,n,k;
    scanf("%d",&num);
    square=num*num;
     m= square%10;
     n=square/10;
    k= n + m;
    if (k== num){
    printf("yes");}
    else {
    printf("No");}

}