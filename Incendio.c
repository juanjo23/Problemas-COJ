#include <stdio.h>
int celdas[11][11];
char fire[11][11];
int N, M;

void incendia(int i, int j, int t, int d){
	if(i==N || j==M	|| i==-1 || j==-1) return;

	if(celdas[i][j] <= t){
		fire[i][j] = '.';
		t -= celdas[i][j];

		if(d!=0)
			incendia(i, j-1, t, 1);
		if(d!=1)
			incendia(i, j+1, t, 0);
		if(d!=2)
			incendia(i-1, j, t, 3);
		if(d!=3)
			incendia(i+1, j, t, 2);
	}else{
		if(fire[i][j] != '.')
			fire[i][j] = '*';
		return;
	}
}

int main(){
	int i, j, K;
	scanf("%d%d%d", &N, &M, &K);
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			scanf("%d", &celdas[i][j]);
			fire[i][j] = celdas[i][j]+'0';
		}
	}
	incendia(0, 0, K, 0);
	for(i=0; i<N; i++){
		for(j=0; j<M; j++)
			printf("%c ", fire[i][j]);
		printf("\n");
	}
	return 0;
}
