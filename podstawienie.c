#include "podstawienie.h"
#include "matrix.h"
//funkcja podstawienia wstecznego rozwiązująca układ równań

double *podstawienie(double** matrix, int rows, int columns){
	double *results = (double *)malloc((columns-1) * sizeof(double));
	int ile_zer;
	int indx_row_start;
	for(int i = rows-1;i >= 0; i--){
		ile_zer = 0;
		for(int j = 0; j < columns-1; j++)
			if(matrix[i][j] == 0)
				ile_zer++;
		if(ile_zer == columns-1 && matrix[i][columns-1] != 0.0){
			fprintf(stderr, "Blad: układ sprzeczny\n");
			return NULL;}
		if(ile_zer != columns-1){
			indx_row_start = i;
			break;}
		if(
	}
	int indx_col;
	for(int i = 0; i< columns-1;i++){
		if(matrix[indx_row_start][i] != 0.0)
			indx_col = i;
	}

	for(int i= indx_col + 1; i < columns-1; i++)
		results[i] = 0.0;
	
}
