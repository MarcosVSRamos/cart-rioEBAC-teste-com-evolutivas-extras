#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca de responsável de cuidar das strings

int main() //Função principal
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	//início da criação de variáveis
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
    //fim da criação de variáveis
    
	for(laco=1;laco=1;) //comando de comparação
    {
		system("cls"); //Comando para limpar a tela
		
    	printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usuário
    	printf("Digite seu nome de usuário: "); //Se comunica com o usuário
    	scanf("%s",name); //Armazena o nome digitado na variável
    	
    	
    	FILE *file; //chama o arquivo
    	file = fopen(name, "r");  //Abre o arquivo  (o "r" é para escanear)
    	
    	fclose(file);
    	system("cls");//limpa a tela
    	
    	
    	if(file == NULL) //Comando caso for nullo
    	{
    		printf("Este nome de usuário não possui cadastro! Deseja criar uma nova conta?\n\n");
    		printf("\t1 - Sim\n");
    		printf("\t2 - Não\n\n");
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
				printf("Tente digitar o nome de usuário novamente!\n\n");
				system("pause");
			}
			else
		    	printf("Você digitou uma opção inválida, tente novamente!\n\n");
		    	system("pause");
		}
			
		else //Comando caso haja login
		
		for(laco=1;laco=1;) //comando de comparação
		{
			
			system("cls");
			
			printf("Bem vindo ao cartório da EBAC, %s\n\n",name);
			printf("Digite sua senha: ");
			scanf("%s",senhalogin);
			
	
	    	file = fopen(senhalogin, "r");  //Abre o arquivo  (o "r" é para escanear)
	    	
			if(file ==NULL)
    		{
    			fclose(file);
    			
    			system("cls");
    			
    		    printf("A senha está icorreta, tentar novamente?\n\n");
    		    printf("\t1 - sim\n");
    		    printf("\t2 - não\n\n");
    		    printf("\t3 - sair do sistema\n");
    		    
    		    scanf("%d", &simounao);
    		    
    		    switch(simounao) //comando de múltiplas escolhas "switchcase"
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
					printf("Esta opção não é valida!");
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
    
	for(laco=1;laco=1;) //comando de comparação		
	{
		system("cls"); //limpa a tela
				    
	    //Inicio do menu
	    printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usuário
  	  	printf("Selecione a opção desejada:\n\n"); //Se comunica com o usuário
    	printf("\t1 - Registrar usuários\n"); //Se comunica com o usuário
   		printf("\t2 - Consultar usuários\n"); //Se comunica com o usuário
   		printf("\t3 - Deletar usuários\n\n"); //Se comunica com o usuário
   		printf("\t4 - Sair\n\n"); //Se comunica com o usuário
    	printf("Opção:");  //Se comunica com o usuário
		//Final do menu
				
    	scanf("%d", &opcao); //Armazenando a escolha do usuário (O "%d" se refere às variáveis inteiras
				
    	system("cls"); //Comando para limpar a tela
    			    
    			    
		switch(opcao) //comando de múltiplas escolhas "switchcase"
		{
			//início do menu de seleções
			case 1: //caso aplicar determinada variável
			registro(); //chamada de função
		 	break; //fecha o caso
			case 2: //caso aplicar determinada variável
			consulta(); //chamada de função
		   	break; //fecha o caso
		 	   	
		   	case 3: //caso aplicar determinada variável
		    deletar(); //chamada de função
    		break; //fecha o caso
    					
    		case 4: //caso aplicar determinada variável
    		printf("Obrigado por utilizar o sistema!\n\n"); //Se comunica com o usuário
    		system("pause");
    		return 0;
    		break;
    	
    		default: //Comando caso a variável digitada não seja nenhuma das opções acima
    		printf("###Essa opção não é válida###\n"); //Se comunica com o usuário
    		system("pause"); //só avança se clicar qualquer tecla
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
	
	printf("### Registro geral de alunos da EBAC ####\n\n"); //Se comunica com o usuário
   	printf("Faça uma conta de usuário para seu primeiro acesso ao sistema!\n\n "); //Se comunica com o usuário
   		 
  	printf("\tDigite seu nome: "); //Se comunica com o usuário
   	scanf("%s",username); //Armazena o nome digitado na variável
    			
   	strcpy(login, username);  //responsavel por copiar o valor das strings
    			
   	FILE *file; //Chama o arquivo
   	file = fopen(login, "w");  //Abre o arquivo (o "W" é o comando para escrever)
   	fprintf(file,login); //Salva o valor da variavel
   	fclose(file);  //Fecha o arquivo
    			
   	printf("\tDigite uma senha de até 8 dígitos: "); //Se comunica com o usuário
   	scanf("%s",senha); //Armazena a senha digitada na variável
    			
   	strcpy(senhadigitada, senha);  //responsavel por copiar o valor das strings
    			
   	file = fopen(senhadigitada, "w");  //Abre o arquivo (o "W" é o comando para escrever)
   	fprintf(file,senhadigitada); //Salva o valor da variavel
   	fclose(file);  //Fecha o arquivo
    			
   	system("cls"); //limpa a tela
    			
   	printf("###Bem vindo ao sistema, %s###\n\n",login);
   	system("pause");
    					
	menuprincipal();
}

int registro()  //função responsável pelos registros
{
	setlocale(LC_ALL, "Portuguese");  //Definindo lijguagens
	//início da criação de variáveis/strings (cochete se refere ao número máximo de variaveis dentro das strings)
	char arquivo[40]; 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da criação de variáveis/strings 
	
	printf("Digite o CPF a ser cadastrado:  "); //comando de comunicação com o usuário
	scanf("%s", cpf); //campo para ser preenchido pelo usuário  ("%s" refere-se às strings)
	
	strcpy(arquivo, cpf);  //responsavel por copiar o valor das strings
	
	FILE *file;  //Chama o arquivo
	file = fopen(arquivo, "w");  //Abre o arquivo (o "W" é o comando para escrever)
	fprintf(file,cpf); //Salva o valor da variavel
	fclose(file);  //Fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo (o "A" é o comando para atualizar)
	fprintf(file, ", "); //Atualiza o arquivo com o que estiver digitado entre aspas
	fclose(file); //Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado:  "); //Se comunica com o usuário
	scanf("%s",nome); //Aba para o usuário preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,nome); //Escreve a variável no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, ", "); //Escreve no arquivo
	fclose(file); //Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado:  "); //Se comunica com o usuário
	scanf("%s",sobrenome); //Aba para o usuário preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,sobrenome); //Escreve a variável no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file, ", "); //Escreve no arquivo
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado:  "); //Se comunica com o usuário
	scanf("%s",cargo); //Aba para o usuário preencher
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file,cargo); //Escreve a variável no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //Abre o arquivo
	fprintf(file, ".\n"); //Escreve no arquivo
	fclose(file); //fecha o arquivo
	
	system("pause"); //só avança se clicar qualquer tecla
}

int consulta() //função das consultas
{
	setlocale(LC_ALL, "Portuguese"); //Definindo lijguagens
	
	//início da criação de variáveis
	char cpf[40];
	char conteudo[200];
	//fim da criação de variáveis
	
	printf("Digite o cpf a ser consultado: "); //Se comunica com o usuário
	scanf("%s",cpf); //Aba para o usuário preencher
	
	FILE *file; //chama o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo (o "R" tem a função de escanear)
	
	if(file == NULL) //Comando caso o arquivo for nullo
	{
		printf("O cadastro não foi localizado!\n"); //Se comunica com o usuário
	}
	
	while(fgets(conteudo, 200,file)!=NULL) //Comando de escaneamento (se escanear e não encontrar o arquivo se torna nullo)
	{
		printf("\nEssas são as informações do usuário:\n\n "); //Se comunica com o usuário
		printf("%s", conteudo); //Se comunica com o usuário
		printf("\n\n"); //Se comunica com o usuário (nesse casso, apenas pulou duas linhas)
	}
	
	fclose(file); //fecha o arquivo
    system("pause"); //só avança se clicar qualquer tecla
}

int deletar() //função de deletar usuários
{
	char cpf[40]; //Criação de variável
	
	printf("Digite o CPF a ser deletado: "); //Se comunica com o usuário
	scanf("%s",cpf); //Aba para o usuário preencher
	
	
	FILE *file; //Chama o arquivo
	file = fopen(cpf,"r");  //Abre o arquivo  (o "r" é para escanear)
	
    
	if(file == NULL) //Comando caso o arquivo for nullo
    {
    	printf("O usário não se encontra no sistema!\n"); //Se comunica com o usuário
	}
	
	else //comando caso não seja conforme o comando "IF" exige
	    
	    printf("O usuário foi deletado com sucesso!\n"); //Se comunica com o usuário
	    fclose(file);    //fecha o arquivo
	    
	    remove(cpf); //remove a váriavél citada
	    system("pause"); //só avança se clicar qualquer tecla

   
}
