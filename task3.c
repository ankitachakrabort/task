#include<stdio.h>
int main()
{
    float s1,s2,s3,sum,average;
    printf("enter the s1\n");
    scanf("%f",&s1);
    printf("enter the s2\n");
    scanf("%f",&s2);
    printf("enter the s3\n");
    scanf("%f",&s3);
    sum=s1+s2+s3;
    average=(s1+s2+s3)/3;
    printf("sum=%f",sum);
    printf("average=%f",average);
    return 0;
}
