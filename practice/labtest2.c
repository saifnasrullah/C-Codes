#include <stdio.h>
#include <string.h>
int main()
{
 int i,j;
 char ch[100];
 char revch[100];
 printf("Enter a string: ");
 fgets(ch,sizeof(ch),stdin);
 int n=strlen(ch);
 for (i = 0,j=n ; i <n,j>=0 ; i++,j--)
 {
   revch[i]=ch[j];
 }
 printf("Reverse of the string is: ");
 for (int i = 0; i <= n; i++)
 {
   printf("%c\n",revch[i]);
 }
}