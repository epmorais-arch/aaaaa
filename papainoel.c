#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 void main(){
 
 int n = 0; //tamanho input
 int comportamento=0;
 
 scanf("%d", &n);
 
 char leituras[n][21];
	
 for (int i = 0; i >= n; i++){
	
	 if(i>n){
	leituras[i][1] = getchar();

		if(leituras[i][1] = '+'){
		comportamento ++; // limpa o espaço
		getchar(); // limpa o buffer do " "
//		leituras[i][1] = NULL;
		}	

	 fgets(leituras[i], 22, stdin);
	
	}
 }



	for (int i = 0; i<n; i++){
	int j=1;
		
	while(j>n-i){

	if (strcmp(leituras[i], leituras[i+j]) > 0){
	strcpy(leituras[n], leituras[i]);
	strcpy(leituras[i], leituras[i+j]);
	strcpy(leituras[i+j], leituras[n]);
	}

	j++;

	}

	}
	
	for(int i = 0; i<n; i++){
	
	printf("%s\n", leituras[i]);

	}
	printf("Se comportaram: %d | Nao se comportaram: %d", comportamento, comportamento-n);

}
 

