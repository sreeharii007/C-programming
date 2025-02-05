#include<stdio.h>
int main(){
  int limit,num,large,small,i,lpos,spos;
  printf("\nEnter number of elements :");
  scanf("\n%d",&limit);
  int array[limit];
  for(i=0;i<limit;i++){
    printf("Enter element :");
    scanf("%d",&array[i]);
    }
  large=array[0];
  small=array[1];
  for(i=0;i<limit;i++){
    if(array[i]>large){
      large=array[i];}
    if(array[i]<small){
      small=array[i];}}
  for(i=0;i<limit;i++){
    if(large==array[i]){
      lpos=i+1;}
    if(small==array[i]){
      spos=i+1;}
  }
  printf("largest number is %d at position %d\n",large,lpos);
  printf("smallest number is %d at position %d",small,spos);
  return 0;
}

