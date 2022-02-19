#include<stdio.h>
#include<math.h>
int main()
{
    float S,A,B,C,area;
    scanf("%f%f%f",&A,&B,&C);
    S=(A+B+C)/2.0;
    area=sqrt(S*(S-A)*(S-B)*(S-C));
    printf("%.2f",area);
    return 0;
}