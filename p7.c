#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int i=1,t,n;
printf("String is\n");
scanf("%s",a);
n=strlen(a);
while(i<n)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
//i++;
}
printf("after swap %s",a);
getch();
}
