#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	int a,b,c;
	char alamat1[100],alamat2[100];
	char *token1, *token2;
	int n1,n2,eq;
	
	char k1[20][20];
	char k2[20][20];
	char eqw[20][20];
	
	printf("masukan nilai alamat1 : "); scanf("%s",alamat1);
	printf("masukan nilai alamat2 : "); scanf("%s",alamat2);
	
	printf("\nalamat1 : %s",alamat1);
	printf("\nalamat2 : %s\n",alamat2);
	
	token1 = strtok(alamat1,"_");
	while(token1!=NULL){
		n1++;
		printf("\nkata ke-%d : %s",n1,token1);
		strcpy(k1[n1],token1);
		token1=strtok(NULL,"_");
	}
	printf("\n");
	token2 = strtok(alamat2,"_");
	n2=0;
	while(token2!=NULL){
		n2++;
		printf("\nkata ke-%d : %s",n2,token2);
		strcpy(k2[n2],token2);
		token2=strtok(NULL,"_");
	}
	
	for(int j=1;j<=n1;j++){
		for(int l=1;l<=n2;l++){
			if(strcmp(k1[j],k2[l])==0){
				eq++;
				strcpy(eqw[eq],k2[l]);
			}
			else eq=eq;
		}
	}
	
	printf("\n\nada %d persamaan\n\n",eq);
	for(int b=1;b<=eq;b++){
		printf("persamaan %d : %s\n",b,eqw[b]);
	}
	
}

