#include <stdio.h>
#define MAX 1001

int mat[MAX][MAX],N,i,j,col=0,row=0;
int findInFirstRow(int start, int r){
	for(i=start; i<N; i++){
		if(mat[0][i]==r)
			return i;
	}
	return -1;
}
int findInFirstCol(int start, int r){
	for(i=start; i<N; i++){
		if(mat[i][0]==r)
			return i;
	}
	return -1;
}
void swapCol(int old, int nueva){
	int tmp;
	for(i=0; i<N; i++){
		tmp = mat[i][old];
		mat[i][old] = mat[i][nueva];
		mat[i][nueva] = tmp;
	}
}
void swapRow(int old, int nueva){
	int tmp;
	for(i=0; i<N; i++){
		tmp = mat[old][i];
		mat[old][i] = mat[nueva][i];
		mat[nueva][i] = tmp;
	}
}

int isSorted(){
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(mat[i][j] != i*N+j+1)
				return 0;
		}		
	}	
	return 1;
}

int main()
{
	int cont = 0, resu=0, i, j;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j] == 1){
				col = j; row = i;
			}
		}
	}		
	if(col != 0){
		swapCol(0, col);
		++cont;
	}	
	if(row != 0){
		swapRow(0, row);
		++cont;
	}
	
	for(i=1; i<N; i++){
		if(mat[0][i] != i+1){
			resu = findInFirstRow(i+1, i+1);
			if(resu==-1){
				puts("-1");
				return 0;
			}else{
				swapCol(i, resu);
				cont++;
			}
		} 
	}
	
	for(i=1, j=N+1; i<N; i++, j+=N){
		if(mat[i][0] != j){
			resu = findInFirstCol(i+1, j);
			if(resu==-1){
				puts("-1");
				return 0;				
			}else{
				swapRow(i, resu);
				cont++;
			}
		} 
	}		
	printf("%d\n", isSorted()?cont:-1);
	return 0;
}
