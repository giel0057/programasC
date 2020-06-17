#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ident
{
    char sigla[30];
    char local[60];
    char liga[61];
};

int main()
{
    struct ident estacao[20];
    struct ident comboio[30];
    int opcao;
    int qtdEstacao = 6, qtdComboio = 10;
    while(1){

  	puts("MENU PRINCIPAL");
	puts("    1. Informacoes predefinidas");
	puts("    2. Adicionar informacoes");
        puts("    3. Sair ");
	scanf("%i", &opcao);

	switch(opcao)
	{//INICIO SWITCH
		case 1:
    			//Declaracao das nossas estacoes escolhidas (sua localizacao e sigla que a identifica)

    			strcpy(estacao[0].local,"Pemba");
    			strcpy(estacao[0].sigla,"PMB");

    			strcpy(estacao[1].local,"Nampula");
   		        strcpy(estacao[1].sigla,"NPL");

    			strcpy(estacao[2].local,"Beira");
    			strcpy(estacao[2].sigla,"BR");

    			strcpy(estacao[3].local,"Maputo");
    			strcpy(estacao[3].sigla,"MPT");

    			strcpy(estacao[4].local,"Lichinga");
    			strcpy(estacao[4].sigla,"LCG");

    			strcpy(estacao[5].local,"Inhamabane");
    			strcpy(estacao[5].sigla,"IMN");
			
			strcpy(comboio[0].sigla, "C0");
			strcpy(comboio[1].sigla, "C1");
			strcpy(comboio[2].sigla, "C2");
			strcpy(comboio[3].sigla, "C3");
			strcpy(comboio[4].sigla, "C4");
			strcpy(comboio[5].sigla, "C5");
			strcpy(comboio[6].sigla, "C6");
			strcpy(comboio[7].sigla, "C7");
			strcpy(comboio[8].sigla, "C8");
			strcpy(comboio[9].sigla, "C9");	


		case 2:
		
			puts("Pretendes adicionar novas estacoes ou novos comboios?");
			puts("	1. Estacao");
			puts("	2. Comboio");
			scanf("%i", &opcao);

			if(opcao == 1)
			{

			}
			else if(opcao == 2)
			{

			}
			else {
				printf("Inseriu uma opcao inexistente");
				getchar();
				break;
			}


		case 3: break;
		default: puts("Opcao invalida");

   //FIM SWITCH
   }
    //Declaracao dos comboios por nos escolhidos (siglas)
    for(int i=0; i<10; i++)
    {
        strcpy(comboio[i].sigla,"C");
    }


    for( int i =0; i<10; i++)
        printf("%s\n\n",comboio[i].sigla);

    getchar();
    }

    getchar();

    return 0;
}
