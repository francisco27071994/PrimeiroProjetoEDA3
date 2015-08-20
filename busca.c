#include "biblioteca.h"

void buscar(TNo* raiz, int id) {
	if (raiz != NULL) {
		if (raiz->id == id) {
			printf("\nNome: %s"
				   "\nMedia: %.2f\n", raiz->nome,
					(raiz->nota1 + raiz->nota2 + raiz->nota3) / 3);
		} else if (raiz->id > id) {
			buscar(raiz->esquerda, id);
		} else if (raiz->id < id) {
			buscar(raiz->direita, id);
		}
	} else {
		printf("\naluno nao encontrado\n");
	}
}
