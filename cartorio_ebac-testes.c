#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca de respons�vel de cuidar das strings

int main() //Fun��o principal
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	//in�cio da cria��o de vari�veis
	int simounao=3;
	int opcao=0; 
    int laco=1;
	int repit=2;	 
    char senhadigitada[10]; 
    char senha[10]; 
    char username[20];
	char name[20];
    char login[40];
    char senhalogin[10];
    //fim da cria��o de vari�veis
    
	for(laco=1;laco=1;) //comando de compara��o
    {
		system("cls"); //Comando para limpar a tela
		
    	printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usu�rio
    	printf("Digite seu nome de usu�rio: "); //Se comunica com o usu�rio
    	scanf("%s",name); //Armazena o nome digitado na vari�vel
    	
    	
    	FILE *file; //chama o arquivo
    	file = fopen(name, "r");  //Abre o arquivo  (o "r" � para escanear)
    	
    	fclose(file);
    	system("cls");//limpa a tela
    	
    	
    	if(file == NULL) //Comando caso for nullo
    	{
    		printf("Este nome de usu�rio n�o possui cadastro! Deseja criar uma nova conta?\n\n");
    		printf("\t1 - Sim\n");
    		printf("\t2 - N�o\n\n");
    		printf("\t3 - Sair\n");
    		scanf("%d", &simounao);
    		
    		system("cls");
    		
    		if(simounao == 1)
    		{
				criarnovaconta();
			}
			if(simounao == 3)
			{
				printf("Obrigado por utilizar o sistema!\n\n");
				return 0;
			}
			if(simounao ==2 )
			{
				printf("Tente digitar o nome de usu�rio novamente!\n\n");
				system("pause");
			}
			else
		    	printf("Voc� digitou uma op��o inv�lida, tente novamente!\n\n");
		    	system("pause");
		}
			
		else //Comando caso haja login
		
		for(laco=1;laco=1;) //comando de compara��o
		{
			
			system("cls");
			
			printf("Bem vindo ao cart�rio da EBAC, %s\n\n",name);
			printf("Digite sua senha: ");
			scanf("%s",senhalogin);
			
	
	    	file = fopen(senhalogin, "r");  //Abre o arquivo  (o "r" � para escanear)
	    	
			if(file ==NULL)
    		{
    			fclose(file);
    			
    			system("cls");
    			
    		    printf("A senha est� icorreta, tentar novamente?\n\n");
    		    printf("\t1 - sim\n");
    		    printf("\t2 - n�o\n\n");
    		    printf("\t3 - sair do sistema\n");
    		    
    		    scanf("%d", &simounao);
    		    
    		    switch(simounao) //comando de m�ltiplas escolhas "switchcase"
    		    {
    		    	case 1:
    		    	return 1;
					break;
					
					case 2:
					return 0;
					break;
					
					case 3:
					printf("Obrigado por utilizar o sistema!\n\n");	
					return 0;
					break;
					
					default:
					printf("Esta op��o n�o � valida!");
					system("pause");
					break;						
				}
    		    
    		}
    		else
    		
    		fclose(file);
    		menuprincipal();
		}
    }		
}

int menuprincipal()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	int opcao=0; 
    int laco=1;
    
	for(laco=1;laco=1;) //comando de compara��o		
	{
		system("cls"); //limpa a tela
				    
	    //Inicio do menu
	    printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usu�rio
  	  	printf("Selecione a op��o desejada:\n\n"); //Se comunica com o usu�rio
    	printf("\t1 - Registrar usu�rios\n"); //Se comunica com o usu�rio
   		printf("\t2 - Consultar usu�rios\n"); //Se comunica com o usu�rio
   		printf("\t3 - Deletar usu�rios\n\n"); //Se comunica com o usu�rio
   		printf("\t4 - Sair\n\n"); //Se comunica com o usu�rio
    	printf("Op��o:");  //Se comunica com o usu�rio
		//Final do menu
				
    	scanf("%d", &opcao); //Armazenando a escolha do usu�rio (O "%d" se refere �s vari�veis inteiras
				
    	system("cls"); //Comando para limpar a tela
    			    
    			    
		switch(opcao) //comando de m�ltiplas escolhas "switchcase"
		{
			//in�cio do menu de sele��es
			case 1: //caso aplicar determinada vari�vel
			registro(); //chamada de fun��o
		 	break; //fecha o caso
			case 2: //caso aplicar determinada vari�vel
			consulta(); //chamada de fun��o
		   	break; //fecha o caso
		 	   	
		   	case 3: //caso aplicar determinada vari�vel
		    deletar(); //chamada de fun��o
    		break; //fecha o caso
    					
    		case 4: //caso aplicar determinada vari�vel
    		printf("Obrigado por utilizar o sistema!\n\n"); //Se comunica com o usu�rio
    		system("pause");
    		return 0;
    		break;
    	
    		default: //Comando caso a vari�vel digitada n�o seja nenhuma das op��es acima
    		printf("###Essa op��o n�o � v�lida###\n"); //Se comunica com o usu�rio
    		system("pause"); //s� avan�a se clicar qualquer tecla
    		break; //fecha o caso
		}
	}		
}

int criarnovaconta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	char username[20];
	char login[20];
	char senha[10];
	char senhadigitada[10];
	
	system("cls");
	
	printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usu�rio
   	printf("Fa�a uma conta de usu�rio para seu primeiro acesso ao sistema!\n\n "); //Se comunica com o usu�rio
   		 
  	printf("\tDigite seu nome: "); //Se comunica com o usu�rio
   	scanf("%s",username); //Armazena o nome digitado na vari�vel
    			
   	strcpy(login, username);  //responsavel por copiar o valor das strings
    			
   	FILE *file; //Chama o arquivo
   	file = fopen(login, "w");  //Abre o arquivo (o "W" � o comando para escrever)
   	fprintf(file,login); //Salva o valor da variavel
   	fclose(file);  //Fecha o arquivo
    			
   	printf("\tDigite uma senha de at� 8 d�gitos: "); //Se comunica com o usu�rio
   	scanf("%s",senha); //Armazena a senha digitada na vari�vel
    			
   	strcpy(senhadigitada, senha);  //responsavel por copiar o valor das strings
    			
   	file = fopen(senhadigitada, "w");  //Abre o arquivo (o "W" � o comando para escrever)
   	fprintf(file,senhadigitada); //Salva o valor da variavel
   	fclose(file);  //Fecha o arquivo
    			
   	system("cls"); //limpa a tela
    			
   	printf("###Bem vindo ao sistema, %s###\n\n",login);
   	system("pause");
    					
	menuprincipal();
}

int registro()  //fun��o respons�vel pelos registros
{
	setlocale(LC_ALL, "Portuguese");  //Definindo lijguagens
	//in�cio da cria��o de vari�veis/strings (cochete se refere ao n�mero m�ximo de variaveis dentro das strings)
	char arquivo[40]; 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da cria��o de vari�veis/strings 
	
	printf("Digite o CPF a ser cadastrado:  "); //comando de comunica��o com o usu�rio
	scanf("%s", cpf); //campo para ser preenchido pelo usu�rio  ("%s" refere-se �s strings)
	
	strcpy(arquivo, cpf);  //responsavel por copiar o valor das strings
	
	FILE *file;  //Chama o arquivo
	file = fopen(arquivo, "w");  //Abre o arquivo (o "W" � o comando para escrever)
	fprintf(file,cpf); //Salva o valor da variavel
	fclose(file);  //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo (o "A" � o comando para atualizar)
	fprintf(file, ", "); //Atualiza o arquivo com o que estiver digitado entre aspas
	fclose(file); //Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado:  "); //Se comunica com o usu�rio
	scanf("%s",nome); //Aba para o usu�rio preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,nome); //Escreve a vari�vel no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, ", "); //Escreve no arquivo
	fclose(file); //Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado:  "); //Se comunica com o usu�rio
	scanf("%s",sobrenome); //Aba para o usu�rio preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,sobrenome); //Escreve a vari�vel no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file, ", "); //Escreve no arquivo
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado:  "); //Se comunica com o usu�rio
	scanf("%s",cargo); //Aba para o usu�rio preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,cargo); //Escreve a vari�vel no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file, ".\n"); //Escreve no arquivo
	fclose(file); //fecha o arquivo
	
	system("pause"); //s� avan�a se clicar qualquer tecla
}

int consulta() //fun��o das consultas
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	//in�cio da cria��o de vari�veis
	char cpf[40];
	char conteudo[200];
	//fim da cria��o de vari�veis
	
	printf("Digite o cpf a ser consultado: "); //Se comunica com o usu�rio
	scanf("%s",cpf); //Aba para o usu�rio preencher
	
	FILE *file; //chama o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo (o "R" tem a fun��o de escanear)
	
	if(file == NULL) //Comando caso o arquivo for nullo
	{
		printf("O cadastro n�o foi localizado!\n"); //Se comunica com o usu�rio
	}
	
	while(fgets(conteudo, 200,file)!=NULL) //Comando de escaneamento (se escanear e n�o encontrar o arquivo se torna nullo)
	{
		printf("\nEssas s�o as informa��es do usu�rio:\n\n "); //Se comunica com o usu�rio
		printf("%s", conteudo); //Se comunica com o usu�rio
		printf("\n\n"); //Se comunica com o usu�rio (nesse casso, apenas pulou duas linhas)
	}
	
	fclose(file); //fecha o arquivo
    system("pause"); //s� avan�a se clicar qualquer tecla
}

int deletar() //fun��o de deletar usu�rios
{
	char cpf[40]; //Cria��o de vari�vel
	
	printf("Digite o CPF a ser deletado: "); //Se comunica com o usu�rio
	scanf("%s",cpf); //Aba para o usu�rio preencher
	
	
	FILE *file; //Chama o arquivo
	file = fopen(cpf,"r");  //Abre o arquivo  (o "r" � para escanear)
	
    
	if(file == NULL) //Comando caso o arquivo for nullo
    {
    	printf("O us�rio n�o se encontra no sistema!\n"); //Se comunica com o usu�rio
	}
	
	else //comando caso n�o seja conforme o comando "IF" exige
	    
	    printf("O usu�rio foi deletado com sucesso!\n"); //Se comunica com o usu�rio
	    fclose(file);    //fecha o arquivo
	    
	    remove(cpf); //remove a v�riav�l citada
	    system("pause"); //s� avan�a se clicar qualquer tecla

   
}
