#include<stdio.h>
#include<stdlib.h>
void main(){
	int v[6];
	int i,n;
	n=0;
	for(i=0;i<6;i++){
		v[i]=n;
		if(n==0)
			n=1;
		else
		n=0;
		printf("\n%i\n",v[i]);
	}
	system("pause");
}