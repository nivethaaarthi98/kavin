# include<stdio.h>
void main()
{
char a;
int i,l,flag=0;
printf("enter a string");
gets(a)
l=strlen(a)
for(i=0;i<l;i++){
if(a(i)=a(l-i-1))
flag=flag+1;
}
if(flag==1)
printf("number is a palindrome");
else
printf( "number is not a palindrome");
}
}
