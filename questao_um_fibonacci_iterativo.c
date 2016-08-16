#include <stdio.h>
#include <stdlib.h>

 int main(){
   int cont, n_termos, termo_ant = 0, termo_at = 1, prox;

   printf("Informe a quantidade de termos:");

   scanf("%d",&n_termos);

   for ( cont = 0 ; cont < n_termos ; cont++ )
   {
      if ( cont <= 1 )
         prox = cont;
      else
      {
         prox = termo_ant + termo_at;
         termo_ant = termo_at;
         termo_at = prox;
      }
      printf("%d\n",prox);
   }

   return 0;
}


