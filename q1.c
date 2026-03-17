#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d\n",&n);
    int sum = 0;
    for (int i = 1 , j = n ; i <= n && j >= 1;i++,j--)
    {
       sum = sum + i;
       printf("%d \n",j);
    }
    printf("the sum is :%d \n",sum);
    // for (int i =n;i>=1;i--)
    // {
    //     printf("%d \n", i);
    // }
    
    return 0;
    
}