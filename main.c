#include "gauss.h"
#include "matrix.h"
#include "podstawienie.h"


int main(int argc, char **argv){

    int n = 3;
    int m = 3;

    printf("Podaj liczbę kolumn: ");
    scanf("%d", &m);

    printf("Podaj liczbę rzędów: ");
    scanf("%d", &n);

    double **matrix = create_matrix(m, n);

    gauss_elimination(matrix, m, n);

    printf("\n");
    print_matrix(matrix, m, n);
    
    double* wynik = podstawienie_wsteczne(matrix, m, n);

    printf("\n");
    print_podstawienie(wynik);
	
}
