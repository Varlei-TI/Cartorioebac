#include <stdio.h> //Comunicao com o usuario
#include <stdlib.h>//Alocacao Espaco Memoria
#include <locale.h>//Por Regiao "Brasil"
#include <string.h>//Biblioteca respon�vel por cuidar das string

int registro()//Fun��o respons�vel por cadastrar os usu�rios no sistema
{	
	setlocale(LC_ALL, "Portuguese");//Linguagem usada
	
	//In�cio da cria��o das vari�veis/string
	char arquivo[40];//Quantidade de caracteres
	char cpf[40];//Quantidade de caracteres
	char nome[40];//Quantidade de caracteres
	char sobrenome[40];//Quantidade de caracteres
	char cargo[40];//Quantidade de caracteres
	//Final da cria��o das vari�veis/string
	
	printf("Digite o CPF a ser cadastrado:");//Coletando informa��o do usu�rio
	scanf("%s", cpf);//%s Refere-se as string

	strcpy(arquivo, cpf);//Respons�vel por copiar os valores das string
	
	FILE *file;//Abre o arquivo
	file = fopen(arquivo, "w");//Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);//Salvo o valor da vari�vel
	fclose(file);//Fecha o arquivo
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado:");//Coletando informa��es do usu�rio
	scanf("%s",nome);//Refere-se as string
		
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,nome);//Coletando informa��es do usu�rio
	fclose(file);//Fecha o arquivo	

	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado:");//Coletando informa��es do usu�rio
	scanf("%s",sobrenome);//Refere-se as string
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,sobrenome);//Coletando informa��es do usu�rio
	fclose(file);//Fecha o arquivo
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file, ",");
	fclose(file);//Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado:");//Coletando informa��es do usu�rio
	scanf("%s",cargo);//Refere-se as string
	
	file = fopen(arquivo, "a");//Abre o arquivo
	fprintf(file,cargo);//Coletando informa��es do usu�rio
	fclose(file);//Fecha o arquivo
	
	system("pause");//Respons�vel por pausar o programa
}
	
	
int consulta()//Fun�ao respons�vel por consultar os usu�rios no sistema
{	
	setlocale(LC_ALL, "Portuguese");//Linguagem usada
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF a ser consultado: ");//Coletando informa��es do usu�rio
	scanf("%s",cpf);//Refere-se as string
	
	FILE *file;//Arquivo
	file = 
	fopen(cpf, "r");//Abre o arquivo
	
	if(file == NULL)//Arquivo n�o encontrado
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n ");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
		system("pause");//Respons�vel por pausar o programa

}

int deletar()//Fun��o respons�vel por deletar os usu�rios do sistema
{
	char cpf [40];
	
	printf("Digite o cpf do usu�rio a ser deletado:");//Coletando informa��es do usu�rio
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file ==NULL)
	{
		printf("O usu�rio n�o se encontra no sistema! \n");
		system("pause");//Respons�vel por pausar o programa
	}
}





int main ()
{	
	int opcao=0;//Definir variaveis
	int laco=1;
	for(laco=1; laco=1;)

	{
		system("cls");//Respons�vel por limpar a tela
		
		setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
		printf("###Cart�rio da Ebac###\n\n");
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 Registrar nomes: \n\n");
		printf("\t2 Consultar nomes: \n\n");
		printf("\t3 Deletar nomes: \n\n");
		printf("\t4 Sair do sistema!\n\n");
		printf("Op��o: ");//Fim do menu
		
		scanf("%d", &opcao);//Armazenando a escolha do usuario
		
		system("cls");//Respons�vel por limpar a tela
		
		switch(opcao)//In�cio da sele��o do menu
		
		{
			case 1:
			registro();//Chamada das fun��es
			break;
		
			case 2:
			consulta();//Chamada das fun��es
			break;
		
			case 3:
			deletar();//Chamada das fun��es
			break;
			
			case 4:
			printf("Obrigado por usar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o esta dispon�vel!\n");//Resposta da op��o escolhida
			system("pause");//Respons�vel por pausar o programa
			break;
		}
	}
}	







