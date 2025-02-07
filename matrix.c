#include<stdio.h>
int main(){
  int row,col,i,j,sum=0;
  printf("\nEnter no of rows :");
  scanf("%d",&row);
  printf("Enter no of columns :");
  scanf("%d",&col);
  printf("\n");
  int matrix[row][col];
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("Enter element M%d%d :",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if(i==j){
        sum+=matrix[i][j];
      }
    }
  }
  printf("\nSum of diagonal elements is %d\n",sum);
  return 0;
}
