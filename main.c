#include "gauss.h"
#include "matrix.h"
#include "podstawienie.h"


int main(){
    int n,m;

    printf("Podaj liczbę wierszy: ");
    scanf("%d", &m);

    printf("Podaj liczbę kolumn: ");
    scanf("%d", &n);

    double **matrix = create_matrix(m, n);

    gauss_elimination(matrix, m, n);

    printf("\n");
    print_matrix(matrix, m, n);
    
    double* argumenty = podstawienie(matrix, m, n);

    printf("\n");
    print_wynik(argumenty, n-1);
    free(argumenty);

}
