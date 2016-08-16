#include <stdio.h>
#include <conio.h>

main()
{
   int n,cont;
   printf("Informe a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");
   for(cont=0; cont<n; cont++)
       printf("%d ", fibonacci(cont+1));
   getch();
}

int fibonacci(int num)
{
   if(num==1 || num==2)
       return 0;
   else
       return fibonacci(num-1) + fibonacci(num-2);
}
