#include<stdio.h>
struct employee{char name[20];int ID;int salary;};
int main(){
  int n,i;
  printf("Enter number of employees ;");
  scanf("%d",&n);
  struct employee emp[n];
  for(i=0;i<n;i++){
  printf("Enter the name :");
  scanf("%s",emp[i].name);
  printf("Enter the ID :");
  scanf("%d",&emp[i].ID);
  printf("Enter the salary :");
  scanf("%d",&emp[i].salary);
  }
  printf("The details of emolyees are :");
  for(i=0;i<n;i++){
    printf("\nName:%s",emp[i].name);
    printf("\nID:%d",emp[i].ID);
    printf("\nsalary:%d\n",emp[i].salary);
  }
  return 0;
}
