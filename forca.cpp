#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<iostream>
#include<vector>
#include<locale.h>


char palavra[' '], aDescobrir[' '], chute[1];
int tam=0,i=0,j=0,tentativas=6,auxErros=0, acerto=0, acertos=0;

void erro0(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|       |\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("| ");
}
void erro1(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("| ");
}
void erro2(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|       |\n");
	printf("|\n");
	printf("|\n");
	printf("| ");
}
void erro3(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|      /|\n");
	printf("|\n");
	printf("|\n");
	printf("| ");
}
void erro4(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|      /|\\\n");
	printf("|\n");
	printf("|\n");
	printf("| ");
}
void erro5(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|      /|\\\n");
	printf("|      / \\\n");
	printf("|\n");
	printf("| ");
}
void erro6(){
	system("cls");
	printf("________\n");
	printf("|       |\n");
	printf("|      ( )\n");
	printf("|      /|\\ \n");
	printf("|      / \\ \n");
	printf("|\n");
	printf("| ");
}
void erro(){
	switch(auxErros){
		case 0:erro0();
		break;
		case 1:erro1();
		break;
		case 2:erro3();
		break;
		case 3:erro4();
		break;
		case 4:erro5();
		break;
		case 5:erro6();
		break;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Qual palavra você escolheu a ser descoberta? \n");
	gets(palavra);
	tam=strlen(palavra);
	for (i = 0; i < tam; i++){
		aDescobrir[i]='_';
	}
	for (i = 0; i < tam; i++){
	while ((tentativas > 0) && (acertos < tam))
	{
		system("cls");
		erro();
		fflush(stdin);
		for(int i=0; i<tam; i++)
			printf(" %c ", aDescobrir[i]);
		printf("\n Tentativas: %i ", tentativas);
		printf("\n Chute uma letra: ");
		fflush(stdin);
		scanf("%c", & chute[0]);
		acerto=0;
		for(int i=0; i<tam; i++){
			if(palavra[i]==chute[0])
			{
				if(aDescobrir[i]==chute[0] ){
					acerto=2;
				}
				else{
				acertos++;
				acerto=1;
				aDescobrir[i]=chute[0];
				erro();
				}
			}
		}
		if (acerto==0) {
			auxErros=auxErros+1;
			erro();
			tentativas--;
			}
		else if (acerto==2){
			printf("Você já chutou essa letra\n\n");
			acerto=1;
			system("pause");
		}
		}
		system("cls");
		erro();
		for(int i=0; i<tam; i++)
			printf(" %c ", aDescobrir[i]);
	}
	if (acertos==tam)
		printf("Você ganhou!!!");
	if (tentativas==0)
		printf("\n\n\n\n\n\n\nSinto muito... você perdeu :( \n\n\n");
		system("pause");
}

