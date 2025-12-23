#include "podstawienie.h"
#include "matrix.h"
//funkcja podstawienia wstecznego rozwiązująca układ równań

double *podstawienie(double** matrix, int rows, int columns){
	double *results = (double *)malloc((columns-1) * sizeof(double));
	int no_arg;
	for(int i = rows-1;i >= 0; i--){

   		int ile_zer = 0;
		for (int j = 0; j < columns-1; j++) {
   			if(matrix[i][j] == 0)
				ile_zer += 1;
		}
		if(ile_zer == columns-1){
			if(matrix[i][columns-1] == 0)
				results[]
		}
			
	}
