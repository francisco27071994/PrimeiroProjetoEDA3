#include "biblioteca.h"

TNo* alocar(int id, char nome[255], float nota1, float nota2, float nota3) {
	TNo* novo = (TNo *)malloc(sizeof(TNo));

	novo->id = id;
	strcpy(novo->nome, nome);
	novo->nota1 = nota1;
	novo->nota2 = nota2;
	novo->nota3 = nota3;

	return novo;
}

TNo* cadastrar(TNo* raiz, TNo* aux, int id, char nome[255], float nota1, float nota2, float nota3) {
	if (raiz == NULL) {
		TNo* novo = alocar(id, nome, nota1, nota2, nota3);
		return novo;
	} else {
		if (id < aux->id) {
			if (aux->esquerda != NULL) {
				return cadastrar(raiz, aux->esquerda, id, nome, nota1, nota2, nota3);
			} else {
				TNo* novo = alocar(id, nome, nota1, nota2, nota3);
				aux->esquerda = novo;
				return raiz;
			}
		} else if (id > aux->id) {
			if (aux->direita != NULL) {
				return cadastrar(raiz, aux->direita, id, nome, nota1, nota2, nota3);
			} else {
				TNo* novo = alocar(id, nome, nota1, nota2, nota3);
				aux->direita = novo;
				return raiz;
			}
		}
	}
}
