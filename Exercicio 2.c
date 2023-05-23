#include <stdio.h>
#include <stdlib.h>

int main(){
	int t = 1,m = 5,c = 10,calculador;
	int a,soma;
	
	do{
	soma = (1 + t) * c;
	
	if(t<m){
		t++;
		a=1;
		printf("%i\n",t);
	}else{
		a=0;
		c = soma;
		printf("aaaaa%i",c);
	}
	
	}while(a==1);
	
	return 0;
}
