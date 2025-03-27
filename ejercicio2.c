#include <stdio.h>

void main()
{
    int num; 
    
    printf("Dame un numero:");
    scanf("%int", &num);
    
    if(num % 2 <= 0)
    {
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }
}
