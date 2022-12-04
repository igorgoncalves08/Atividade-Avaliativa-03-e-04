#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10 // Especifica��o que o vetor teria 10 posi��es.
int main() {
	
 setlocale(LC_ALL, "");
 
 int numeros[TAM]; // Nesta especifica��o tera 10 posi��es.
 int i, aux, contador;
 
 // Da linha 13 a linha 16 a aplica��o ira capturar os valores digitados pelo usuario e guarda-los nas posi��es.
printf("Entre com dez n�meros para preencher o array, e pressione enter ap�s digitar cada um:\n");
 for (i = 0; i < TAM; i++) {
 scanf("%d", &numeros[i]);
 }

// Da linha 19 a 22 a aplica��o ir� mostrar as ordens atuais dos numeros digitados pelo usuario.
printf("Ordem atual dos itens no array:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}

// Algoritmo de ordena��o Bubblesort:
 for (contador = 1; contador < TAM; contador++) { // Contador que ir� percorrer do primeiro item ate o penultimo item.
   for (i = 0; i < TAM - 1; i++) { // Come�a em zero e vai ate ela ser TAM - 1.
     if (numeros[i] > numeros[i + 1]) { // Se o vetor numeros[i] tiver um valor maior que numeros[i + 1], efetua trocas.
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
 // Da linha 35 a 38 a aplica��o ir� mostrar os elemntos em ordem crescente.
printf("\nElementos do array em ordem crescente:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}

printf("\n");
return 0;
}
