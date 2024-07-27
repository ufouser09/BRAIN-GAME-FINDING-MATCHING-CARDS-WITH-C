#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void display_matris(int N,int A[N][N]);
int main(){
	int i=0;
	int kord1,kord2;
	int puan1=0,puan2=0;
	int tahminSay=0;
	
	printf("LUTFEN TAHTANIN ZORLUK DERECESINI GIRINIZ\n");
	printf("MENU\n");
	printf("EASY(1)\n");
	printf("MÝDDLE(2)\n");
	printf("HARD(3)\n");
	scanf("%d",&i);
	
	
	
	if(i==1){
		int N=4;
		int M=2;
		int i,j;
		int puan1=0,puan2=0;
		int isFind=1,index=0;
		int kord1,kord2,kord3,kord4;
		int A[N][N];
		int B[M][3];
		
		
		
		for(i=0;i<M;i++){
			for(j=0;j<3;j++){
				B[i][j]=0;
			}
		}
		
		printf("lutfen matrisi doldurunuz\n");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				scanf("%d",&A[i][j]);
			}
		}
		
		printf("\n------MATRIS----------\n");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d\t",A[i][j]);
				}
			printf("\n");
		}
		
		
		do{
		
		
		i=1;
		while(i==1){
		
		
		printf("\n---------------OYUN SIRASI:OYUNCU--------\n");
		
		printf("\nLUTFEN ILK TAHMÝNÝ KOORDÝNATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord1,&kord2);
		}while(A[kord1][kord2]==-1);
		
		printf("%d\n",A[kord1][kord2]);
		
		printf("\nLUTFEN IKINCI TAHMINI KOORDINATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord3,&kord4);
		
		}while(A[kord3][kord4]==-1);
	
		printf("%d\n",A[kord3][kord4]);
		
		tahminSay++;
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			puan1++;
			
			display_matris(N,A);

			
				
			}
			
			
		
		else{
			i=0;
		}
	
	}
	printf("\n---------------OYUN SIRASI:BILGISAYAR--------\n");
	
	while(isFind==1){
	
	do{
	
	kord1=(rand()%N)+1;
	kord2=(rand()%N)+1;
	}while(A[kord1][kord2]==-1);
	
	
	printf("ilk tahmin ettiðimiz kordinat=%d\n",A[kord1][kord2]);
	
	
	isFind=0;
	for(i=0;i<M;i++){
		if(B[i][2]==A[kord1][kord2]){
			isFind=1;
			index=i;
		}
	}
	if(isFind==1){
		A[kord1][kord2]=-1;
		A[B[index][0]][B[index][1]]=-1;
		puan2++;
		
	}
	if(isFind==0){
		do{
		
		kord3=(rand()%N)+1;
		kord4=(rand()%N)+1;
		}while(A[kord3][kord4]==-1);
		
		printf("ikinci tahmin ettiðimiz kordinat=%d\n",A[kord3][kord4]);
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			isFind=1;
			puan2++;
			
			display_matris(N,A);
			
		}else{
			B[0][0]=kord1;
			B[0][1]=kord2;
			B[0][2]=A[kord1][kord2];
			B[1][0]=kord3;
			B[1][1]=kord4;
			B[1][2]=A[kord3][kord4];
		}
	
	}
	
	
	
}
	
}while(puan1+puan2<8);
	
	
	
	
	
	
	
	}

	
	if(i==2){
		int N=6;
		int M=6;
		int i,j;
		int puan1=0,puan2=0;
		int isFind=1,index=0;
		int kord1,kord2,kord3,kord4;
		int A[N][N];
		int B[M][3];
		
		for(i=0;i<M;i++){
			for(j=0;j<3;j++){
				B[i][j]=0;
			}
		}
		
		
		printf("lutfen matrisi doldurunuz\n");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				scanf("%d",&A[i][j]);
			}
		}
		
		printf("------MATRÝS----------");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d\t",A[i][j]);
				}
			printf("\n");
		}
		
		do{
		
		
		i=1;
		while(i==1){
		
		
		printf("\n---------------OYUN SIRASI:OYUNCU--------\n");
		
		printf("\nLUTFEN ILK TAHMÝNÝ KOORDÝNATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord1,&kord2);
		}while(A[kord1][kord2]==-1);
		
		printf("%d\n",A[kord1][kord2]);
		
		printf("\nLUTFEN IKINCI TAHMINI KOORDINATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord3,&kord4);
		
		}while(A[kord3][kord4]==-1);
	
		printf("%d\n",A[kord3][kord4]);
		
		tahminSay++;
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			puan1++;
			
			display_matris(N,A);

			
				
			}
			
			
		
		else{
			i=0;
		}
	
	}
	printf("\n---------------OYUN SIRASI:BILGISAYAR--------\n");
	
	while(isFind==1){
	
	do{
	
	kord1=(rand()%N)+1;
	kord2=(rand()%N)+1;
	}while(A[kord1][kord2]==-1);
	
	
	printf("ilk tahmin ettiðimiz kordinat=%d\n",A[kord1][kord2]);
	
	
	isFind=0;
	for(i=0;i<M;i++){
		if(B[i][2]==A[kord1][kord2]){
			isFind=1;
			index=i;
		}
	}
	if(isFind==1){
		A[kord1][kord2]=-1;
		A[B[index][0]][B[index][1]]=-1;
		puan2++;
		
	}
	if(isFind==0){
		do{
		
		kord3=(rand()%N)+1;
		kord4=(rand()%N)+1;
		}while(A[kord3][kord4]==-1);
		
		printf("ikinci tahmin ettiðimiz kordinat=%d\n",A[kord3][kord4]);
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			isFind=1;
			puan2++;
			
			display_matris(N,A);
			
		}else{
			for(i=M-2;i>0;i--){
				B[i+1][0]=B[i][0];
				B[i+1][1]=B[i+1][1];
				B[i+1][2]=B[i+1][2];
			}
			
			B[0][0]=kord1;
			B[0][1]=kord2;
			B[0][2]=A[kord1][kord2];
			B[1][0]=kord3;
			B[1][1]=kord4;
			B[1][2]=A[kord3][kord4];
		}
	
	}
	
	
	
}
	
}while(puan1+puan2<18);
	
		
		
		
	}
	
	
	if(i==3){
		int N=8;
		int M=16;
		int i,j;
		int puan1=0,puan2=0;
		int isFind=1,index=0;
		int kord1,kord2,kord3,kord4;
		int A[N][N];
		int B[M][3];
		
		for(i=0;i<M;i++){
			for(j=0;j<3;j++){
				B[i][j]=0;
			}
		}
		
		printf("lutfen matrisi doldurunuz\n");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				scanf("%d",&A[i][j]);
			}
		}
		
		printf("------MATRÝS----------");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d",A[i][j]);
				}
			printf("\n");
		}
		do{
		
		
		i=1;
		while(i==1){
		
		
		printf("\n---------------OYUN SIRASI:OYUNCU--------\n");
		
		printf("\nLUTFEN ILK TAHMÝNÝ KOORDÝNATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord1,&kord2);
		}while(A[kord1][kord2]==-1);
		
		printf("%d\n",A[kord1][kord2]);
		
		printf("\nLUTFEN IKINCI TAHMINI KOORDINATINIZI GIRNIZ\n");
		
		do{
		
		scanf("%d %d",&kord3,&kord4);
		
		}while(A[kord3][kord4]==-1);
	
		printf("%d\n",A[kord3][kord4]);
		
		tahminSay++;
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			puan1++;
			
			display_matris(N,A);

			
				
			}
			
			
		
		else{
			i=0;
		}
	
	}
	printf("\n---------------OYUN SIRASI:BILGISAYAR--------\n");
	
	while(isFind==1){
	
	do{
	
	kord1=(rand()%N)+1;
	kord2=(rand()%N)+1;
	}while(A[kord1][kord2]==-1);
	
	
	printf("ilk tahmin ettiðimiz kordinat=%d\n",A[kord1][kord2]);
	
	
	isFind=0;
	for(i=0;i<M;i++){
		if(B[i][2]==A[kord1][kord2]){
			isFind=1;
			index=i;
		}
	}
	if(isFind==1){
		A[kord1][kord2]=-1;
		A[B[index][0]][B[index][1]]=-1;
		puan2++;
		
	}
	if(isFind==0){
		do{
		
		kord3=(rand()%N)+1;
		kord4=(rand()%N)+1;
		}while(A[kord3][kord4]==-1);
		
		printf("ikinci tahmin ettiðimiz kordinat=%d\n",A[kord3][kord4]);
		
		if(A[kord1][kord2]==A[kord3][kord4]){
			A[kord1][kord2]=-1;
			A[kord3][kord4]=-1;
			isFind=1;
			puan2++;
			
			display_matris(N,A);
			
		}else{
			for(i=M-2;i>0;i--){
				B[i+1][0]=B[i][0];
				B[i+1][1]=B[i+1][1];
				B[i+1][2]=B[i+1][2];
			}
			
			
			B[0][0]=kord1;
			B[0][1]=kord2;
			B[0][2]=A[kord1][kord2];
			B[1][0]=kord3;
			B[1][1]=kord4;
			B[1][2]=A[kord3][kord4];
		}
	
	}
	
}
}while(puan1+puan2<32);

}

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
			printf("%5c",B[i][j]);
		}
		printf("\n");
	}
	
}


