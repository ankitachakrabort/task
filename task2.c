#include<stdio.h>
main()
{
    double celsius,fahrenheit;
    printf("enter celsius value:\n");
    scanf("%lf",&celsius);
    fahrenheit=((9*celsius/5)+32);
    printf("\n the fahrenheit value:%lf",fahrenheit);
    return 0;
}
