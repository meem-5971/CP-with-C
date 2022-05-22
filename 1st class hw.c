#include<stdio.h>
int main()
{
    int num1 , num2 , result;
    printf ( "enter number: ");
    scanf("%d %d" , &num1, &num2 );
    result = (((num1 + num2)*2)/6);
    printf("result is %d", result);
    return 0;

}
