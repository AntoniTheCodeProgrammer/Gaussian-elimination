#include "matrix.h"

// tu pobieramy dane i tworzymy macierz

int **create_matrix(int m, int n){
    int **matrix = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            int number = 0;
            printf("Liczba %d w rzedzie %d: ", x+1, y+1);
            scanf("%d", &number);
            matrix[y][x] = number;
        }
    }

    print_matrix(matrix, m, n);
    
    return matrix;
}

void print_matrix(int **matrix, int m, int n){
    for(int y = 0; y < n; y++){
        printf("| ");
        for(int x = 0; x < m; x++){
            printf("%d ", matrix[y][x]);
        }
        printf("|\n");
    }
}