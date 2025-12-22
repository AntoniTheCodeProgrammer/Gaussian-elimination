#include "gauss.h"
#include "matrix.h"


int main(int argc, char **argv){

    int n = 3;
    int m = 3;

    printf("Podaj wielkosc macierza: ");
    scanf("%d", &n);

    m = n + 1;

    double **matrix = create_matrix(m, n);

    gauss_elimination(matrix, m, n);

    printf("\n");
    print_matrix(matrix, m, n);
    
}