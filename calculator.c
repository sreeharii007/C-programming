#include<stdio.h>
int main(){
    int num1,num2;
    char oper;
    printf("\nEnter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    printf("Enter operator :");
    scanf(" %c",&oper);
    switch(oper){
        case '+':
            int sum;
            sum=num1+num2;
            printf("sum=%d\n",sum);
            break;
        case '-':
            int diff;
            diff=num1-num2;
            printf("diff=%d\n",diff);
            break;
        case '/':
            int quo;
            quo=num1/num2;
            printf("quo=%d\n",quo);
            break;
        case '*':
            int prod;
            prod=num1*num2;
            printf("prod=%d\n",prod);
            break;
        case '%':
            int rem;
            rem=num1%num2;
            printf("rem=%d\n",rem);
            break;
        }
    return 0;
}
