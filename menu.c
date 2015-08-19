#include"biblioteca.h"


int usaMenu() {
	int escolha;

	do {
		escolha = menu();
		printf("\n\nEscolha Incorreta\nTente Novamente!\n\n");
	}while(escolha < 1 || escolha > 2);

	return escolha;
}

int menu() {
	int escolha = 0;

	printf("|----------------------------------------|\n");
	printf("| Escolha uma das opções listadas abaixo!|\n");
	printf("| ---------------------------------------|\n");
	printf("|                                        |\n");
	printf("| 1 - Impressão em Ordem.                |\n");
	printf("| 2 - Busca por aluno.                   |\n");
	printf("|----------------------------------------|\n");

	scanf("%d", &escolha);

	return escolha;
}
