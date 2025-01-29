#include<stdio.h>
int  main(){
    int num,fact;
    fact=1;
    printf("\nEnter number :");
    scanf("%d",&num);
    while(num>0){
        fact=fact*num;
        num-=1;
      }
    printf("Factorial is %d\n",fact);
    return 0;
}
    
