#include<stdio.h>
int main(){
    int i,limit,num,search,flag=0;
    printf("\nEnter number of elements :");
    scanf("%d",&limit);
    int array[limit];
    for(i=0;i<limit;i++){
        printf("Enter element :");
        scanf("%d",&array[i]);
    }
    printf("Enter number to search :");
    scanf("%d",&num);
    for(i=0;i<limit;i++){
        if(num==array[i]){
            printf("Yes the number is present at position %d",i+1);
            flag=1;
        }} 
    if(flag==0){
        printf("Number is not present in array");
    }
    return 0;
}
    
    
    
