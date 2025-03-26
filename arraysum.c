#include<stdio.h>
int arrsum(int array[],int len){
  int sum=0,i;
  for(i=0;i<len;i++){
    sum+=array[i];
  }
  return sum;
}
int main(){
  int len,i;
  printf("Enter no of elements :");
  scanf("%d",&len);
  int array[len];
  for(i=0;i<len;i++){
    printf("Enter element %d :",i+1);
    scanf("%d",&array[i]);
  }
  printf("Sum of elements is :%d",arrsum(array,len));
  return 0;
}
  
