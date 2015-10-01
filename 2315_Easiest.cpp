/*
	2315 - The Easiest Problem is This One
 	http://coj.uci.cu/24h/problem.xhtml?pid=2315 
*/

#include <stdio.h>
#include <string>
using namespace std; 

int main()
{
	int n, len, sum, sum2;
	string str_n, str_o;

	while(scanf("%d", &n) && n != 0)
	{
		str_n = to_string(n);
		sum = 0;
		for(int i=0; i<str_n.size(); i++)
			sum += str_n[i]-'0';			
		
		for(int i = 11; i<= 100; i++)
		{
			str_o = to_string(i*n);
			sum2 = 0; 
			for(int i=0; i<str_o.size(); i++)
				sum2 += str_o[i] -'0';

			if(sum == sum2){
				printf("%d\n", i);
				break;
			}
		}
	}	
	return 0;
}