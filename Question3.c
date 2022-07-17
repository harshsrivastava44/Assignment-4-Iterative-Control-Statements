//3. Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for ( i=10 ; i >=1; i--)
    {
       printf("%d\n",i);

    }
    return 0;
}