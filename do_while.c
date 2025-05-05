#include<stdio.h>
void main(){
   int a,n;

   printf("starting no. a:\n");
scanf("%d",&a);
printf("ending no. n:\n");
scanf("%d",&n);
do
{
    printf("%d\n",a);
    a+=2;
} while (a<=n);

}