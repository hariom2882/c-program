#include <stdio.h>
 int main(){
    int a;
    int b;
   int sum;
   int a1=1;


   
    while (a1<5)
    {
        printf("1-Add\n");
        printf("2-SUB\n");
        printf("5-EXIT\n");

        printf("enter the no.\n");
        scanf("%d",&a1);
        switch(a1){

        case 1:
            printf("enter the no.\n");
            scanf("%d  %d",&a,&b);
            sum=a+b;
            printf("%d+%d=%d",a,b,sum);
                break;
                
        case 2:
            printf("HELLO");
            break;
        
        case 5:
            printf("GOOD BAY ;;;");
            return 0;
        default:
            printf("noo");
            break;
            
        }
    }
    return 0;
 }