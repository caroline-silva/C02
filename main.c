#include <stdio.h>
#include <stdlib.h>

/*
 Armazene em uma matriz 10×5 o resultado de uma prova de alternativas:

a – coluna 0
b – coluna 1
c – coluna 2
d – coluna 3
e – coluna 4
Exemplo da resposta da primeira questão com a alternativa C:

prova[0][0]=0 ; prova[0][1]=0; prova[0][2]=1;prova[0][3]=0;prova[0][4]=0;

*/

int main(int argc, char *argv[]) {
	int prova[10][5], gabarito[10][5];
	int nota=0, x, a;
	
	for(x=0;x<10;x++){
		for(a=0;a<5;a++){
			gabarito[x][a]=0;
			prova[x][a]=0;
		}	
	}
	gabarito[0][0]=1;
	gabarito[1][1]=1;
	gabarito[2][2]=1;
	gabarito[3][3]=1;
	gabarito[4][4]=1;
	gabarito[5][0]=1;
	gabarito[6][1]=1;
	gabarito[7][2]=1;
	gabarito[8][3]=1;
	gabarito[9][4]=1;
	
	for(x=0;x<10;x++){
		printf("Responda questao %d (0=A, 1=B, 2=C, 3=D, 4=E):", x);
		scanf("%i", &a);
		prova[x][a] = 1;	
		if(prova[x][a]==gabarito[x][a]) nota++;
	}
	printf("vc tirou a nota %i \n", nota);
	
	return 0;
}
