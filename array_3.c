#include<stdio.h>
void main(){
    int t=5;
    int count=0;
    int count1=0;
    int count2=0;
    int arr[]={0,1,0,2,2};
    for (int i = 0; i <=4; i++)
    {
        // printf("%d\n",arr[i]);
    if (0==arr[i])
    {
       count++;
    }
    if (1==arr[i])
    {
       count1++;
    }
    if (2==arr[i])
    {
       count2++;
    }        
    }
    printf("no.0=%d\n",count);
    printf("no.1=%d\n",count1);
    printf("no.2=%d",count2);
}