#include "podstawienie.h"
#include "matrix.h"
//funkcja podstawienia wstecznego rozwiązująca układ równań

double eps = 1e-9;

double *podstawienie(double** matrix, int rows, int columns){
	double *results = (double *)malloc((columns-1) * sizeof(double));
	for(int i = 0; i <columns-1; i++)
		results[i] = 0.0;
	int ile_zer;
	for(int i = rows-1;i >= 0; i--){
		ile_zer = 0;
		for(int j = 0; j < columns-1; j++)
			if (fabs(matrix[i][j]) < eps)
				ile_zer++;
		if(ile_zer == columns-1 && fabs(matrix[i][columns-1]) >= eps){
			fprintf(stderr, "Blad: układ sprzeczny\n");
			free(results);
			return NULL;}
		else if(ile_zer == columns-1 && fabs(matrix[i][columns-1]) < eps){
			fprintf(stderr, "Blad: układ nieoznaczony lub sprzeczny\n");
			free(results);
			return NULL;}
		if(ile_zer != columns-1)
			break;
	}
	for(int i = rows-1; i >= 0; i--){
		double value = 0.0;
		for(int j = i+1; j < columns-1; j++)
			value -= matrix[i][j]*results[j];
		results[i] = (value + matrix[i][columns-1])/matrix[i][i];
	}
	return results;	
}

void print_wynik(double* wynik, int n){
	if(wynik != NULL){
		for(int i = 0;i < n; i++){
			printf("x%d = %g\n",i+1, wynik[i]);
		}
		free(results);
	}
		
}
