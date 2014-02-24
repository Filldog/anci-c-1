#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
	int mass[30][40];
	int i,j,k,t, l;
	int r = rand();
	k = 0;
	t = 4;
	l = 3;
	srand(time(NULL));

	for (i=0; i<=29;i++)
		for (j=0; j<=39;j++)
			mass[i][j]=0;

	for (i=2; i<=21;i++){
		for (j=2; j<=31;j++){
			
			mass[i][j] =rand() %2;
			//mass[i][j]=0;
			 //if (mass[i][j] != 1)
				 //mass[i][j] = 0;
			 //else 
				 //mass[i][j] = 1;
			
		}
	}
	//mass[10][10]=1;
	//mass[10][11]=1;
	//mass[11][10]=1;
	
	while (1){     // основной цикл:

		for (i=2; i<=21;i++){
		for (j=2; j<=31;j++){
		if (mass[i][j] == l)
			mass[i][j] = 1;
		if (mass[i][j] == t)
			mass[i][j] = 0;
		}
		}

		for (i=2; i<=21;i++){
		printf("\n");
		for (j=2; j<=31;j++){

		
			
	
		 if (mass[i][j] == 0) {    // если ij = 0:
			 if (( mass[i-1][j-1] == 1) || (mass[i-1][j-1] == t))
				k++;
			if ((mass[i-1][j] == 1) || (mass[i-1][j] ==t))
				k++;
			if ((mass[i-1][j+1] ==1) || (mass[i-1][j+1] == t))
				k++;
			if ((mass[i][j+1] ==1)|| (mass[i][j+1] ==t))
				k++;
			if ((mass[i+1][j+1]== 1) || (mass[i+1][j+1]==t ))
				k++;
			if ((mass[i+1][j] == 1) || (mass[i+1][j] ==t))
				k++;
			if ((mass[i+1][j-1] == 1) || (mass[i+1][j-1] ==t))
				k++;
			if ((mass[i][j-1] == 1)|| (mass[i][j-1] ==t ))
				k++;
			if (k == 3)
				 mass[i][j] = l;
			else 
				 mass[i][j] = 0;

		 }
		 else {                      // если ij =1:
			 if (( mass[i-1][j-1] == 1) || (mass[i-1][j-1] == t))
				k++;
			if ((mass[i-1][j] == 1) || (mass[i-1][j] ==t))
				k++;
			if ((mass[i-1][j+1] ==1) || (mass[i-1][j+1] == t))
				k++;
			if ((mass[i][j+1] ==1)|| (mass[i][j+1] ==t))
				k++;
			if ((mass[i+1][j+1]== 1) || (mass[i+1][j+1]==t ))
				k++;
			if ((mass[i+1][j] == 1) || (mass[i+1][j] ==t))
				k++;
			if ((mass[i+1][j-1] == 1) || (mass[i+1][j-1] ==t))
				k++;
			if ((mass[i][j-1] == 1)|| (mass[i][j-1] ==t ))
				k++;
			if ((k == 2) || (k == 3))
				mass[i][j] = 1;
			else 
				mass[i][j] = t;
		 }
			k = 0;
		if ((mass[i][j]==1) || (mass[i][j]== t ))
				printf("#");
			else 
				printf(" ");
		}
	}
	
	Sleep(1000);
	system("cls");
	}
	
	scanf("%d",&i);
	return 0;
}