#include "biblioteca.h"

int main() {
	FILE* arquivo;
	TNo* raiz = NULL;
	int id, opcao;
	char nome[255];
	float av1, av2, av3;

	criaNovoArquivoModificado();

	if ((arquivo = fopen("ALTERADO.DAT", "r")) == NULL) {
		printf("Erro ao tentar abrir o arquivo.\n\n");
		exit(1);
	}

	arquivo = fopen("ALTERADO.DAT", "r");

	while (!feof(arquivo)) {
		fscanf(arquivo, "%d;%[^;]s", &id, nome);
		fscanf(arquivo, ";%f", &av1);
		fscanf(arquivo, ";%f", &av2);
		fscanf(arquivo, ";%f;", &av3);

		if (!feof(arquivo)) {
			raiz = cadastrar(raiz, raiz, id, nome, av1, av2, av3);
		}
	}

	opcao = usaMenu();

	if(opcao == 1) {
		printf("Opção 1 Escolhida");
		imprimirEmOrdem(raiz);
	} else {
		printf("Opção 2 Escolhida\n");
		printf("Digite o id do aluno:\n");
		scanf("%d", &id);
		buscar(raiz, id);
	}

	return 0;
}
