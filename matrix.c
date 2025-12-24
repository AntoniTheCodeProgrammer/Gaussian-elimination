#include "matrix.h"

// tu pobieramy dane i tworzymy macierz

double **create_matrix(int m, int n){
    double **matrix = (double **)malloc(n * sizeof(double *));

    for (int i = 0; i < n; i++) {
        matrix[i] = (double *)malloc(m * sizeof(double));
    }

    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            double number = 0;
            printf("Liczba %d w wierszu %d: ", x+1, y+1);
            scanf("%lf", &number);
            matrix[y][x] = number;
        }
    }

    print_matrix(matrix, m, n);
    
    return matrix;
}

void print_matrix(double **matrix, int m, int n){
    for(int y = 0; y < n; y++){
        printf("| ");
        for(int x = 0; x < m-1; x++){
            printf("%.2f ", matrix[y][x]);
        }
        printf("| %.2f ", matrix[y][m-1]);
        printf("|\n");
    }
}
