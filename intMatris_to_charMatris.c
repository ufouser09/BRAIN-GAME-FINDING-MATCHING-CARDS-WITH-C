#include <stdio.h>
#include <stdlib.h>
void display_matris(int N,int A[N][N]);
int main(){
	int N,i,j;
	
	
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N][N];
	
	
	printf("lutfen matrisi giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&A[i][j]);
		}
	}
	display_matris(N,A);

	
}
void display_matris(int N,int A[N][N]){
	int i,j;
	char B[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(A[i][j]==-1){
				B[i][j]='-';
			}
			else{
				B[i][j]=(char)(A[i][j]+'0');
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%c",B[i][j]);
		}
		printf("\n");
	}
	
}
