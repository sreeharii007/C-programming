#include<stdio.h>
int main(){
  char str[20];
  int len;
  printf("Enter string :");
  fgets(str,sizeof(str),stdin);
  for(len=0;str[len]!='\0';len++);
  int i=len-1;
  for(int j=0;j<len/2;j++){
  int temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  i--;
  }
  printf("The reversed string :");
  puts(str);
  return 0;
}
