/**************************

                            Programa desenvolvido por
                           Sávio Auguto Soares Fonseca
            	para a disciplina Algoritmos e Lógica de Programação 2
                            da faculdade Unicesumar

***************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int menu = 0, i = 0;
	
    struct vacina
    {
        int codigo;
        int numlote;
        char cpf[12];
        char nome[30];
        char vacina[15];
        char data[10];
    };
	 
    struct vacina vacina[200];
    
    int contador = 0;
    
    int buscar;
    
    char buscarcpf[12];

    printf("\n   __           _     _   _  _  ");
    printf("\n  / _|         ()   | | /_ |/ _ \\ ");
    printf("\n | |     __   __  _| |  | | () |");
    printf("\n | |    / _ \\ \\ / / |/ ` |  | |\\_, |");
    printf("\n | |_| () \\ V /| | (| |  | |  / / ");
    printf("\n  \\__\\_/ \\/ ||\\,|  || //  ");
    printf("\n");
    printf("\n        **CONTROLE DE VACINAS*"); 
    printf("\n---------------------------------------------");
    
    while(menu != 4)
    {
        printf("\n1 - Cadastrar Paciente");
        printf("\n2 - Listar Aplicações");
        printf("\n3 - Consultar por CPF");
        printf("\n4 - Sair");
        printf("\nDigite uma opção: ");
        scanf("%d", &menu);
        fflush(stdin);
    
        switch(menu)
		{
	        case 1:
		        system("cls");
				printf("\n========= CADASTRO DE VACINAS E PACIENTES =========");
				printf("\n");
				vacina[contador].codigo = contador;            
				            
				printf("\nDigite o nome do paciente: ");
				scanf("%s", &vacina[contador].nome);
				fflush(stdin);
				            
				printf("\nDigite o CPF: ");
				scanf("%s", &vacina[contador].cpf);
				fflush(stdin);
				            
				printf("\nDigite o nome da vacina: ");
				scanf("%s", &vacina[contador].vacina);
				fflush(stdin);
				        
				printf("\nDigite a data de aplicação: ");
				scanf("%s", &vacina[contador].data);
				fflush(stdin);
				            
				printf("\nDigite o número do lote: ");
				scanf("%d", &vacina[contador].numlote);
				fflush(stdin);
	
				printf("\n==================Cadastro realizado com sucesso!==================\n");
				
				contador++;
			        
	            break;
	            
	        case 2:
	            system("cls");
	            for(i=0; i < contador; i++)
	            {
		            printf("\n==================RELATÓRIO==================");
		            printf("\nCódigo: %d", vacina[i].codigo);
		            printf("\nNome: %s", vacina[i].nome);
		            printf("\nCPF: %s", vacina[i].cpf);
		            printf("\nVacina: %s", vacina[i].vacina);
		            printf("\nData: %s", vacina[i].data);
		            printf("\nLote: %d", vacina[i].numlote);
	            }
	            break;
	            
			case 3:
			{
				int resVerd;
	            system("cls");
	            printf("\n==================BUSCA POR CPF==================");
	            printf("\nDigite o número do CPF: ");
	            scanf("%s", &buscarcpf);
	            fflush(stdin);
	         
	         
	         	for (i=0; i < contador; i++)
				{
	         		buscar = strcmp(buscarcpf,vacina[i].cpf);
	         		if(buscar == 0)
					{
	         			printf("\n============ RESULTADO DA BUSCA ============");
	                    printf("\nCódigo: %d", vacina[i].codigo);
	                    printf("\nNome: %s", vacina[i].nome);
	                    printf("\nCPF: %s", vacina[i].cpf);
	                    printf("\nVacina: %s", vacina[i].vacina);
	                    printf("\nData: %s", vacina[i].data);
	                    printf("\nLote: %d", vacina[i].numlote);
					}
				}
				if(buscar == 1)
				{
					printf("\nCPF não localizado");
				} 
	        }
			break;
			
	        case 4:
			{
	            printf("Saindo da aplicação...");
	            	
				break;
			}
		}
    } 
return 0;
}