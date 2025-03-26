#include<stdio.h>
#define Pi 3.14159
int main(){
  int cirad,cyrad,height;
  float cyarea,ciarea;
  printf("Enter radius of circle :");
  scanf("%d",&cirad);
  printf("Enter radius of cylinder:");
  scanf("%d",&cyrad);
  printf("Enter height of cylinder:");
  scanf("%d",&height);
  ciarea=Pi*cirad*cirad;
  cyarea=2*Pi*cyrad*(cyrad+height);
  printf("The area of circle : %f\n",ciarea);
  printf("The area of cylinder is: %f",cyarea);
  return 0;
}
