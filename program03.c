#include<stdio.h>
int main(){
    int a , b ,sum , diff, rem, mul, divi;
    printf("Enter two numbers : ");
    scanf("%d %d",&a , &b);
    sum = a+b;
    diff= a-b;
    mul = a*b;
    divi = a/ b;
    rem = a %b;
    printf("The sum of two numbers :%d \n",sum);
    printf("The difference of two numbers : %d\n",diff);
    printf("The multiply of two numbers : %d\n",mul);
    printf("The divide of two numbers : %d\n",divi);
    printf("The remainder of two numbers when %d divided by %d:  %d" ,a,b,rem);
    return 0;
    
}