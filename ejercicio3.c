int main()
{
    int op, num1, num2, res;
    
    do
    {
        printf("menu: \n");
        printf("Escoge una opción: \n");
        printf("1.- Suma \n");
        printf("2.-Resta \n");
        printf("3.-Multiplicación \n");
        printf("4.-División \n");
        printf("5.-Raiz cuadrada \n");
        printf("6.-Potencia \n");
        printf("0.-Salida \n");
        scanf("%i", &op);
    }
    while(op < 0 || op > 6);
    
    do
    {
        switch(op)
        {
            
          case 1:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          printf("Dame otro numero: ");
          scanf("%i", &num2);
          res = num1 + num2;
          break;
        
          case 2:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          printf("Dame otro numero: ");
          scanf("%i", &num2);
          res = num1 - num2;
          break;
        
          case 3:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          printf("Dame otro numero: ");
          scanf("%i", &num2);
          res = num1 * num2;
          break;
        
          case 4:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          printf("Dame otro numero: ");
          scanf("%i", &num2);
          res = num1 / num2;
          break;
        
          case 5:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          res = sqrt(num1);
          break;
        
          case 6:
        
          printf("Dame un numero: ");
          scanf("%i", &num1);
          printf("Dame un exponente: ");
          scanf("%i", &num2);
          res = pot(num1, num2);
          break; 
        }
        
        
    

       printf("El resultado de la operación es: %i\n", res);
       printf("\n\n");
    
       printf("menu: \n");
       printf("Escoge una opción: \n");
       printf("1.- Suma \n");
       printf("2.-Resta \n");
       printf("3.-Multiplicación \n");
       printf("4.-División \n");
       printf("5.-Raiz cuadrada \n");
       printf("6.-Potencia \n");
       printf("0.-Salida \n");
       scanf("%i", &op);
        
    }
    while (op !=0);
    
}
