/* Write a program to print the sum of cubes of even digits in a given number.
   (For example if the number is 4521.
   The output should be 43 + 23= 72) */
   
#include<stdio.h>
void main()
{   
    long long int num;
    int n1=0,n2=0;
    printf("Enter a number: \n");  
    scanf("%lld",&num);
    while(num!=0)
     {
        n1=num%10;
        if((n1%2)==0)     //checking whether the number is even or not 
          {
            n2+=n1*n1*n1;
          }
        num/=10;
      }
     printf("Sum is: %d",n2);
}
