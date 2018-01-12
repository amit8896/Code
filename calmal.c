#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int *ptr,*p,i,s,a,*q;
    printf("enter the size of array");
    scanf("%d",&s);
    ptr=(char*)malloc(s*sizeof(char));
    p=ptr;
    if(ptr==NULL)
    {
        printf("no allocation of memory");
        exit(0);
    }
    printf("enter the elements of array");
    for(i=0;i<s;i++)
    {
     scanf("%s",ptr);
     ptr++;
    }
    printf("entred\n");
    for(i=0;i<s;i++)
    {
        printf("string is %s\n",p);
        p++;
    }
    printf("enter the size of new alloc");
    scanf("%d",&a);
    ptr=(char*)realloc(ptr,a*sizeof(char));


          if(ptr==NULL)
    {
        printf("no allocation of memory");
        exit(0);
    }
    q=ptr;
    printf("enter the elements of array");
    for(i=0;i<a;i++)
    {
     scanf("%s",ptr);
     ptr++;
    }
    printf("entred\n");
    for(i=0;i<a;i++)
    {
        printf("string is %s\n",*q);
        q++;
    }

    getch();
}
