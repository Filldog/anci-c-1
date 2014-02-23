#include <stdio.h>
#include <string.h>

int main() {
	FILE *file; 
	 size_t x;
	 int i, z;
	 char chr[10];
// # @ $ ^ * + - ~
// 2000 символов
	z = 0;
	while ( z != 10 ){
		for (i=0; i<=9; i++)
	chr[i] = getchar();
	if ( i == '#' ||  i == '@' ||  i == '^' ||  i == '$' ||  i == '*' ||  i == '+' ||  i == '-' ||  i == '~' ||  i == ' ' ){
		z++;
		file = fopen("map.dat","ab");
		x = fwrite ( chr, sizeof(char[10]), 1, file); 
		fclose(file);
		printf("%d",z);
	}
	

		
	}
	return 0;

	
	
}