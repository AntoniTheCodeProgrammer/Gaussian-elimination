#include "gauss.h"
#include "matrix.h"
#include "podstawienie.h"


int main(int argc, char **argv){
    int n,m;

    printf("Podaj liczbę kolumn: ");
    scanf("%d", &m);

    printf("Podaj liczbę rzędów: ");
    scanf("%d", &n);

    double **matrix = create_matrix(m, n);

    gauss_elimination(matrix, m, n);

    printf("\n");
    print_matrix(matrix, m, n);
    
    double* argumenty = podstawienie(matrix, m, n);

    printf("\n");
    printf("Rozwiązanie macierzy za pomocą podstawienia wstecznego:\n");
    print_wynik(argumenty, n-1);
    free(argumenty);

}
