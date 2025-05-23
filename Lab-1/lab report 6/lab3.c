//Write a C program to convert Decimal to Binary number system.//
#include<stdio.h>
int main()
{
  int i,dec,bin[64];
  printf("Enter the Decimal value: ");
  scanf("%d",&dec);
  for(i=0;dec!=0;i++)
  {
    bin[i]=dec%2;
    dec=dec/2;
  }
  printf("Binary Value:");
  for(int j =i-1;j>=0;j--)
  {
    printf("%d",bin[j]);
  }
  return 0;
}