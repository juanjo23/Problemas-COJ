#include <stdio.h>
#include <algorithm>
#define tam 1001
int main()
{
	int n, m, gan=0; 
	int obj[tam];

	scanf("%d %d", &n, &m); 
	for(int i=0; i<n; i++){
		scanf("%d", &obj[i]); 		
	}
	std::sort(obj, obj + n); 
	for (int i=0; i<m; ++i)
	{
		if(obj[i] > 0)
			break;
		gan += obj[i];
	}

	printf("%d\n", -gan);
	return 0;
}