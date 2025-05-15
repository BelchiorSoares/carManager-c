#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	short int escolher;

	escolher = 0;
	do
	{
		/* Menu do sistema */
		printf("==== SISTEMA DE GESTÃO DE CARROS ====\n");
		printf("1. Cadastrar novo carro\n");
		printf("2. Listar todos os carros\n");
		printf("3. Buscar carro por placa\n");
		printf("4. Editar dados de um carro\n");
		printf("5. Remover um carro\n");
		printf("6. Gerar relatório\n");
		printf("7. Salvar e sair\n");
		printf("Escolha uma opção:");
		scanf("%hd", &escolher);
		system("clear");

		/* Funcao de cada escolha */
		switch (escolher)
		{
		case 0:
			printf("Saindo do programa....\n");
			break;
		case 1:
			printf("==== Cadastrar novo carro ====\n");
			system("clear");
			break;
		case 2:
			printf("==== Listar todos os carros ====\n");
			break;
		case 3:
			printf("==== Buscar carro por placa ====\n");
			break;
		case 4:
			printf("==== Editar dados de um carro ====\n");
			break;

		case 5:
			printf("==== Remover um carro ====\n");
			break;
		case 6:
			printf("==== Gerar relatório ====\n");
			break;
		case 7:
			printf("==== Salvar e sair ====\n");
			break;
		default:
			printf("Escolha indisponivel, por favor informe uma opcao valida!\n");
			break;
		}

	} while (escolher != 0);

	return 0;
}
