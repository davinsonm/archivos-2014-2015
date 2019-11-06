#include<stdio.h>
#include<stdlib.h>
void main(){
	int v[6];
	int i,n;
	n=67;
	for(i=0;i<6;i++){
	v[i]=n;
	n=n+2;
	printf("\n%i\n",v[i]);
	}
	system("pause");
}