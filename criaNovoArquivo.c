#include "biblioteca.h"

void criaNovoArquivoModificado() {
	FILE* arquivo;
	FILE* arquivo2;
	const int TAM = 255;
	char buffer[TAM];
	int cont;

	if ((arquivo = fopen("ALUNOS.DAT", "r")) == NULL) {
		printf("Erro ao tentar abrir o arquivo.\n\n");
		exit(1);
	}

	if ((arquivo2 = fopen("ALTERADO.DAT", "w")) == NULL) {
		printf("Erro ao tentar abrir o arquivo.\n\n");
		exit(1);
	}

	while (fgets(buffer, TAM, arquivo)) {
		for (cont = 0; cont < TAM; cont++) {
			if (buffer[cont] == ',')
				buffer[cont] = '.';
		}
		fprintf(arquivo2, "%s", buffer);
	}

	fclose(arquivo);
	fclose(arquivo2);
}
