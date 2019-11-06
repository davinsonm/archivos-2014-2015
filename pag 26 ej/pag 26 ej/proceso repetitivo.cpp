#include<stdio.h>
#include<stdlib.h>
void main(){
	char m[5][5];
	int f,c;
	//inicializamos el arreglo
	for(f=0;f<5;f++)
		for(c=0;c<5;c++)
			m[f][c]='*';
	//diagonal principal
	for(f=0;f<5;f++)
		m[f][f]='*';
	//diagonal secundaria
	for(c=0;c<5;c++){
		f--;
		m[f][c]='*';
	}
	//presentacion de diagonales
	for(f=0;f<5;f++){
		printf("\n");
		for(c=0;c<5;c++)
			printf("%c\n",m[f][c]);
	}
	system("pause");
}