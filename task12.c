#include<stdio.h>
main()
{
    printf("change the unit of temp:\n1.celcius to fahrenheit,\n2.fahrenheit to celcius,\n3.exit");
    int choice=0;
    double celcius,fahrenheit;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nenter the value of celcius temperature:");
        scanf("%lf",&celcius);
        fahrenheit=(celcius*1.8)+32;
        printf("\nfahrenheit temperature:%lf",fahrenheit);
        break;
    case 2:
        printf("\nenter the value of fahrenheit temperature:");
        scanf("%lf",&fahrenheit);
        celcius=(fahrenheit-32)/1.8;
        printf("\ncelcius temperature:%lf",celcius);
        break;
    case 3:
        printf("exit.");
        break;
        default:printf("invalid choice");
    }
}
