#include<stdio.h>
int main(){

    int length , breadth , area , perimeter;
    printf("Enter the length of rectange : ");
    scanf("%d",&length);
    printf("Enter the breadth of rectange : ");
    scanf("%d",&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Enter the area of rectange : %d \n",area );
    printf("Enter the perimeter of rectange : %d",perimeter);
    return 0;
}