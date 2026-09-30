#include <stdio.h>

int main() {
    float hindi , eng, maths, science, sst ,total ,avg ;
    printf("To find average of 5 subjects , enter marks accordingly :\n");
    printf("Enter marks in hindi : ");
    scanf("%f",&hindi);
    printf("Enter marks in English : ");
    scanf("%f",&eng);
    printf("Enter marks in Maths : ");
    scanf("%f",&maths);
    printf("Enter marks in science : ");
    scanf("%f",&science);
    printf("Enter marks in sst : ");
    scanf("%f",&sst);
    total = hindi + eng + maths + science + sst;
    avg = total /5;
    printf("The total marks of all 5 subjects are %f \n",total);
    printf("Average of all 5 subjecs are %.2f",avg);
    return 0;
}