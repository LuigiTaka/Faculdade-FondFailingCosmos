#include <stdio.h>


int fibonacci(int i) {
  
   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}


int main(void) {
  
    int posicao = 0, resultado;
    char ordenacao;

    printf("Digite quantos números da sequência de fibonacci você gostaria hoje: ");
    scanf("%i", &posicao);

    if(posicao > 42){ 
      printf("Remova essa condição e compile o código de novo por sua conta e risco."); 
      return 0;
    }
  
    do{
      resultado = fibonacci(posicao);
      printf("%iª.  %i\n",posicao,resultado);
      
      posicao -= 1;
    }while( resultado != 0 );
  
    return 0;
  
}

