#include<stdio.h>
int main(){
    int x ;
    printf("Enter Number");
    scanf("%d", &x);
    (x%2==0)? printf("Number is Even") : printf("Number is odd");
    return 0;
}