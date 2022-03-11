#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int positivo(int numero) {
    if(numero <= 0) {
    	printf("\nO número é negativo");
    }else if (numero >= 0) {
    	printf("\nO número é positivo");
   }
       
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int N;
	
	printf("Digite um número: ");
	scanf("%d", &N);
	
	positivo(N);

}
