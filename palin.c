#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,rev=0;
printf("enter the palindrome");
scanf("%d",&n);
while(n!=0)
{
rev=n%10;
rev=rev*10+m;
n=n/10;
}
if(rev==n)
printf("palindrome");
else
printf("not a palindrome");
return 0;
getch();}
