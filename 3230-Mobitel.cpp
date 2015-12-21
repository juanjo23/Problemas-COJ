#include <stdio.h>

int n[10];
char l[120];
char msg[101];

inline void init_letters(){
/*	A cada letra (lowercase) del ascci,
	se le asigna su tecla(número corespondiente)
	Ejemplo: abc = 2, def = 3, wxyz = 9.
*/
	l[97]  = l[98]  = l[99]  = 2;
	l[100] = l[101] = l[102] = 3;
	l[103] = l[104] = l[105] = 4;
	l[106] = l[107] = l[108] = 5;
	l[109] = l[110] = l[111] = 6;
	l[112] = l[113] = l[114] = l[115] = 7;
	l[116] = l[117] = l[118] = 8;
	l[119] = l[120] = l[121] = l[122] = 9;
}

int main()
{	
	int x, t, num;
	char c;	
	bool r = false;
	init_letters();	

	for(int i = 1; i<=9; i++){
		scan3230-Mobitel
