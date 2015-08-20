#include"biblioteca.h"

void extraiDadosDoArquivo() {

	FILE* arquivo;
	int id;
	const int TAM = 255;
	char nome[TAM];
	float av1, av2, av3;

	if ((arquivo = fopen("ALTERADO.DAT", "r")) == NULL) {
		printf("Erro ao tentar abrir o arquivo.\n\n");
		exit(1);
	}

	arquivo = fopen("ALTERADO.DAT", "r");

	while(!feof(arquivo)) {
		fscanf(arquivo, "%d;%[^;]s", &id, nome);
		fscanf(arquivo, ";%f", &av1);
		fscanf(arquivo, ";%f", &av2);
		fscanf(arquivo, ";%f;", &av3);

		printf("%d %s %.2f %.2f %.2f\n", id, nome, av1, av2, av3);
	}
}
