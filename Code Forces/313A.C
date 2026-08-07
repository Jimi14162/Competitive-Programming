#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[50];
    scanf("%s",str);
    char str_last[50],str_seclast[50];
    int a=strlen(str)-1;
    strncpy(str_last,str,a);
    strncpy(str_seclast,str,a-1);
    str_seclast[a-1]=str[a];
    int n1=atoi(str_last);
    int n2=atoi(str_seclast);
    if(str[0]=='-')
    {
        n1>n2?printf("%d",n1):printf("%d",n2);
    }
    else
    {
        printf("%s",str);
    }
    return 0;
}