#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#define TAM 10

using namespace std;

static void imprime_vetor(int vetor[]) {
	cout << "\n";
	for (int i = 0; i < TAM; i++) {
		cout << " |" << vetor[i] << "| ";
	}
}

static void insertion_sort(int vetor[TAM]) {
	
	int i, j, atual;

	for (i = 1; i < TAM; i++) {

		// Elemento atual em análise
		atual = vetor[i];

		// Elemento anterior ao analisado
		j = i - 1;

		// Analisando membros anteriores
		while ((j >= 0) && (atual < vetor[j])) {
			
			// Posiciona os elementos uma posição para frente
			vetor[j + 1] = vetor[j];

			// Faz o j andar para trás
			j--;
		}

		// Agora que o espaço foi aberto, colocamos o atual (Menor número) na posição correta
		vetor[j + 1] = atual;

		// Mostra a lista atualizada
		imprime_vetor(vetor);

	}
}

int main() {
	setlocale(LC_ALL, "");

	int vetor[TAM] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	insertion_sort(vetor);

	imprime_vetor(vetor);

	return 0;
}