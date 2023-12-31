#include <stdio.h>

int main(void)
{
    int num = 0, pal =0; 
    printf("Enter the number : \n");
    scanf("%d", &num);
    
    //make a copy of the value entered
    int temp = num;
    while (num != 0)
    {
        pal = pal*10 + num%10;
        num = num/10;
    }
    
    //comparing the original value and the value of pal calculated
    if (temp == pal)
    {
        printf("%i is a palindrome\n", temp);
    }
    else 
    {
        printf("%i is not a palindrome\n", temp);
    }
}