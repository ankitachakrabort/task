#include<stdio.h>
main()
{
    char name[6];
    int age[2];
    int phone_number[10];
    printf("enter the name\n");
    scanf("%s",&name);
    printf("enter the age\n");
    scanf("%s",&age);
    printf("enter the phone_number\n");
    scanf("%s",&phone_number);
    printf("%s %s %s",name,age,phone_number);
    return 0;
}
