#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int positivo(int numero) {
    if(numero <= 0) {
    	printf("\nO n�mero � negativo");
    }else if (numero >= 0) {
    	printf("\nO n�mero � positivo");
   }
       
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int N;
	
	printf("Digite um n�mero: ");
	scanf("%d", &N);
	
	positivo(N);

}
