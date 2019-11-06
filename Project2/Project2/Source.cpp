#include<stdio.h>
#include<stdlib.h>
void main(){
	int v[5];
	int n,i;
	printf("\nregistro de 5 numeros impares\n");
	for(i=0;i<5;i++){
		do{
			printf("\nregistre numero par:");
			scanf("%i",&n);
		}
		while(!((n>0)&&(n%2==1)));
		v[i]=n;
	}
	for(i=0;i<5;i++)
		printf("\nindice %i contenido%i\n",i,v[i]);
	system("pause");
}