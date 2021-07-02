#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int votos, sair, contador,
	vere1=0, vere2=0, vere3=0, vernulo=0, votosPref, 
	pref1=0, pref2=0, prefnulo=0, contaPref;
	char resp;
	
	//Votar *VEREADOR*
	do
	{
		printf("***CANDIDATOS � VEREADOR***\n\n");
		printf("Quantidade de votos computados para Vereador: %d\n\n",contador);
		printf("N�mero e nome dos candidatos:\n");
		printf("111- Jo�o do Frete;\n"); 
		printf("222-Maria da Pamonha;\n");
		printf("333-Z� da Farm�cia;\n");
		printf("OU\n444-Para anular seu voto.\n");
		printf("\nInsira o n�mero do seu canditado para Vereador:\n");
		scanf("%d", &votos);
		printf ("Deseja realizar um novo voto? S/N\n\n");
		scanf ("%c",  & resp);
		system("cls");
	//Registro e soma de votos. *VEREADOR*
		switch(votos){
			case 111:
				vere1 = vere1 + 1;
				break;
			case 222:
				vere2 = vere2 + 1;
				break;
			case 333:
				vere3 = vere3 + 1;
				break;
			case 444: 
				vernulo =  vernulo + 1;
				break;
			default:
				printf("VOTO N�O VALIDADO!\n");
				break;
		}	
		
		printf("Para continuar votando aperte a tecla *S*.\nPara terminar vota��o gidite a tecla *N*.\n");
        scanf("%c", &sair);
	}while(sair != 'n');

	//Resultado dos votos *VEREADOR*
	printf("*** RESULTADO DA VOTA��O PARA VEREADOR***\n\n");
	printf("Jo�o teve %d votos\n", vere1);
	printf("Maria teve %d votos\n", vere2);
	printf("Z� teve %d votos\n", vere3);
	printf("Votos nulos teve %d votos\n\n", vernulo);
	
	//Vencedor *VEREADOR*
	if((vere1>vere2) && (vere1>vere3)){
		printf(("Jo�o do frete � o novo prefeito!\n"));
	} else if((vere2>vere1) && (vere2>vere3)){
		printf(("Maria da pamonha � a nova vereadora!\n"));
	} else if ((vere3>vere1) && (vere3>vere2)){
		printf("Z� da Farm�cia � o novo vereador!\n");
	} 	else {
		printf("A elei��o para Vereador ter� um segundo turno!\n");
	}
	
	//Votar *PREFEITO*
	for(contaPref = 0; contaPref<5; contaPref++){
		printf("________________________________________________");
		printf("\n\n***CANDIDATOS � PREFEITO***\n\n");
		printf("Quantidade de votos computados para Prefeito: %d\n\n",contaPref);
		printf("N�mero e nome dos candidatos:\n");
		printf("11- Dr. Zureta;\n"); 
		printf("22-Senhor Gomes;\n");
		printf("OU\n44-Para anular seu voto;\n");
		printf("\nInsira o n�mero do seu voto para Prefeito:\n");
		scanf("%d", &votosPref);
		system("cls");
		
		//Registro e soma de votos. *PREFEITO*
		switch(votosPref){
			case 11:
				pref1++;
				break;
			case 22:
				pref2++;
				break;
			case 44:
				prefnulo++;
				break;
			default:
				printf("VOTO N�O VALIDADO!");
				break;
		}
	}
	
	//Resultado dos votos *VEREADOR*
	printf("*** RESULTADO DA VOTA��O PARA PREFEITO***\n\n");
	printf("Dr. Zureta teve %d votos\n", pref1);
	printf("Senhor Gomes teve %d votos\n", pref2);
	printf("Votos nulos teve %d votos\n\n", prefnulo);
	
	//Vencedor *PREFEITO*
	if((pref1>pref2) && (pref1>prefnulo)){
		printf("Dr. Zureta � o novo Prefeito!");
	} else if ((pref2>pref1) && (pref2>prefnulo)){
		printf("Senhor Gome � o novo Prefeito!");
	} else {
		printf("A elei��o para Prefeito ter� um segundo turno!");
	}
	
	return 0;
}



/*
do {
	printf("Digite 5 quando desejar sair.")
	sacnf("%d", &votos || "%d", &sair);
} while(sair !=5);	
*/
