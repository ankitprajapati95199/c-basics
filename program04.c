#include<stdio.h>
int main(){
int radius,  area, circum ;
    printf("Enter the radius of circle : ");
    scanf("%d",&radius);
    area = 3.14 * radius *radius ;
    circum = 2 * 3.14 * radius ;
    printf("The area of circle is %d .\n", area);
    printf("The circumference of circle is %d .", circum);

    return 0;
}   

