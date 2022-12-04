#include <stdio.h>
#include <stdlib.h>
#define TAM 6 // Define o valor de TAM sempre vai ser 6.

int main(){

void insertion_sort(int v[]){
	int i, j, aux;
	for(i = 1; i < TAM; i++){ // i comeca valendo 1.
		aux = v[i]; // A variavel aux comeca valendo i, ou seja ela comeca valendo 11.
		j = i - 1; // a variavel j por sua vez comeca valendo 0.
		
		while((j >= 0) && (aux < v[j])){ // Na variavel while sera testado a condicao da varialvel j, j esta valendo 0 entao j e maior ou igual a 0, aux esta valendo 11, portanto aux e menor que o numero na posicao 0 no caso 16, a condicao e verdadera.  
			v[j+1] = v[j]; // Dessa forma a posicao 1 do vetor recebera a o valor armazenado na posicao 0.
			j--; // com isso o valor de j e decrementado, j agora esta valendo -1, ele e menor que 0, portando ele nao entra no while e executa a linha de codigo da linha 18.
		}
		
		v[j+1] = aux; // o valor armazenado em aux, no caso 11 e alocado na posicao 0 do vetor ordenando as posicoes 0 e 1 do vetor, agora a implementacao roda o for novamente.
	}
}
}
