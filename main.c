#include "gauss.h"
#include "matrix.h"


int main(int argc, char **argv){

    int n = 3;
    int m = 3;

    printf("Podaj liczbę kolumn: ");
    scanf("%d", &m);

    printf("Podaj liczbę rzędów: ");
    scanf("%d", &n);

    int **matrix = create_matrix(m, n);

    gauss_elimination(matrix, m, n);
    
}