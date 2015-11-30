#include <stdio.h>

int main() {
  int shares[101], int n, profit;

  scanf("%d", &n);
  profit = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &shares[i] );
    for(int j = i-1; j>=0; j--){
      if(shares[i] - shares[j] > profit)
        profit = shares[i] - shares[j];
    }
  }
  printf("%d\n", profit);

  return 0;
}
