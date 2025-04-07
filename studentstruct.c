#include<stdio.h>
struct student{char name[20];int roll;int sub1;int sub2;int sub3;};
int main(){
  int n,i,total;
  printf("Enter number of students;");
  scanf("%d",&n);
  struct student stu[n];
  for(i=0;i<n;i++){
    printf("Enter the name :");
    scanf("%s",stu[i].name);
    printf("Enter the roll :");
    scanf("%d",&stu[i].roll);
    printf("Enter the mark of sub1 :");
    scanf("%d",&stu[i].sub1);
    printf("Enter the mark of sub2 :");
    scanf("%d",&stu[i].sub2);
    printf("Enter the mark of sub3 :");
    scanf("%d",&stu[i].sub3);
  }
  for(i=0;i<n;i++){
    total+=stu[i].sub1+stu[i].sub2+stu[i].sub3;
  }
  printf("total mark is :%d",total);
  printf("total average mark is :%d",total/n);
  return 0;
}
  
  
