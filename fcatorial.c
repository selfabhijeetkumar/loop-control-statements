#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d \n", &n);
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
       fact = fact * i;
    }
    printf("the final factorial value is %d", fact);
    return 0;
    
}