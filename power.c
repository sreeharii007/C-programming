#include<stdio.h>
int power(int base,int exp){ 
  if(exp==1){
    return base;
  }else{
    return base*power(base,exp-1);
  }
}
int main(){
  int base,exp;
  printf("Enter the base :");
  scanf("%d",&base);
  printf("Enter the power :");
  scanf("%d",&exp);
  printf("The value is :%d\n",power(base,exp));
  return 0;
}
