#include "biblioteca.h"

void imprimirEmOrdem(TNo *arvore) {
	if (arvore != NULL) {
		imprimirEmOrdem(arvore->esquerda);
		printf("\n\nMatricula: %d"
				"\nNome: %s"
				"\nAvaliacao 1: %.2f"
				"\nAvaliacao 2: %.2f"
				"\nAvaliacao 3: %.2f" ,arvore->id, arvore->nome, arvore->nota1, arvore->nota2,
				arvore->nota3);
		imprimirEmOrdem(arvore->direita);
	}
}
