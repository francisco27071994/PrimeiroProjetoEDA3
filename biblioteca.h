#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no_arvore {
	int id;
	char nome[255];
	float nota1;
	float nota2;
	float nota3;
	struct no_arvore* esquerda;
	struct no_arvore* direita;
}TNo;


TNo* alocarNo(int id, char nome[255], float nota1, float nota2, float nota3);
TNo* cadastrar(TNo* raiz, TNo* aux, int id, char nome[255], float nota1, float nota2, float nota3);
void imprimirEmOrdem(TNo *arvore);

int menu();
int usaMenu();

void criaNovoArquivoModificado();
void extraiDadosDoArquivoEJogaNaArvore();

