#include<stdio.h>
struct book{
    char title[30];
    char author[30];
    char genre[30];
};
main()
{
    struct book title,author,genre;
    printf("enter the title of the book:");
    scanf("%s",&title);
    printf("enter the name of the author of the book:");
    scanf("%s",&author);
    printf("enter the genre of the book:");
    scanf("%s",&genre);
    printf("\n the title of the book is:%s,the author of the book is:%s and the genre of the book is:%s",title,author,genre);
}

