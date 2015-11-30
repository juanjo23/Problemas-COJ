#include <stdio.h>
#include <algorithm>

int main()
{
	int obj[1001], n, m, gan=0;

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
