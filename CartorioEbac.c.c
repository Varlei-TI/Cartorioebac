#include <stdio.h> //Comunicao com o usuario
#include <stdlib.h>//Alocacao Espaco Memoria
#include <locale.h>//Por Regiao "Brasil"
#include <string.h>//Biblioteca responável por cuidar das string

int registro()//Função responsável por cadastrar os usuários no sistema
{	
	setlocale(LC_ALL, "Portuguese");//Linguagem usada
	
	//Início da criação das variáveis/string
	char arquivo[40];//Quantidade de caracteres
	char cpf[40];//Quantidade de caracteres
	char nome[40];//Quantidade de caracteres
	char sobrenome[40];//Quantidade de caracteres
	char cargo[40];//Quantidade de caracteres
	//Final da criação das variáveis/string
	
	printf("Digite o CPF a ser cadastrado:");//Coletando informação do usuário
	scanf("%s", cpf);//%s Refere-se as string

	strcpy(arquivo, cpf);//Responsável por copiar os valores das string
	
	FILE *file;//Abre o arquivo
	file = fopen(arquivo, "w");//Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);//Salvo o valor da variável
	fclose(file);//Fecha o arquivo
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado:");//Coletando informações do usuário
	scanf("%s",nome);//Refere-se as string
		
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,nome);//Coletando informações do usuário
	fclose(file);//Fecha o arquivo	

	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado:");//Coletando informações do usuário
	scanf("%s",sobrenome);//Refere-se as string
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,sobrenome);//Coletando informações do usuário
	fclose(file);//Fecha o arquivo
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado:");//Coletando informações do usuário
	scanf("%s",cargo);//Refere-se as string
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,cargo);//Coletando informações do usuário
	fclose(file);//Fecha o arquivo
	
	system("pause");//Responsável por pausar o programa
}
	
	
int consulta()//Funçao responsável por consultar os usuários no sistema
{	
	setlocale(LC_ALL, "Portuguese");//Linguagem usada
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF a ser consultado: ");//Coletando informações do usuário
	scanf("%s",cpf);//Refere-se as string
	
	FILE *file;//Arquivo
	file = 
	fopen(cpf, "r");//Abre o arquivo
	
	if(file == NULL)//Arquivo não encontrado
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n ");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
		system("pause");//Responsável por pausar o programa

}

int deletar()//Função responsável por deletar os usuários do sistema
{
	char cpf [40];
	
	printf("Digite o cpf do usuário a ser deletado:");//Coletando informações do usuário
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file ==NULL)
	{
		printf("O usuário não se encontra no sistema! \n");
		system("pause");//Responsável por pausar o programa
	}
}





int main ()
{	
	int opcao=0;//Definir variaveis
	int laco=1;
	for(laco=1; laco=1;)

	{
		system("cls");//Responsável por limpar a tela
		
		setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
		printf("###Cartório da Ebac###\n\n");
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t1 Registrar nomes: \n\n");
		printf("\t2 Consultar nomes: \n\n");
		printf("\t3 Deletar nomes: \n\n");
		printf("\t4 Sair do sistema!\n\n");
		printf("Opção: ");//Fim do menu
		
		scanf("%d", &opcao);//Armazenando a escolha do usuario
		
		system("cls");//Responsável por limpar a tela
		
		switch(opcao)//Início da seleção do menu
		
		{
			case 1:
			registro();//Chamada das funções
			break;
		
			case 2:
			consulta();//Chamada das funções
			break;
		
			case 3:
			deletar();//Chamada das funções
			break;
			
			case 4:
			printf("Obrigado por usar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa opção não esta disponível!\n");//Resposta da opção escolhida
			system("pause");//Responsável por pausar o programa
			break;
		}
	}
}	







