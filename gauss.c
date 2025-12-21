#include "gauss.h"
#include "matrix.h"
// tu bedzie funkcja z gaussem

int make_one(double **matrix, int m, int n, int column){
    int row = -1;
    double smallest = 9999999;
    double real = smallest;

    // szukam najlepszej jedynki
    for(int i = column; i < n; i++){
        if(fabs(matrix[i][column]) < smallest && matrix[i][column] != 0){
            smallest = fabs(matrix[i][column]);
            row = i;
            real = matrix[i][column];
        }
    }

    if(row == -1){
        return 1;
    }

    // dziele zeby byla jedynka
    for(int i = 0; i < m; i++){
        if (matrix[row][i] != 0){
            printf("%.2f / %.2f\n", matrix[row][i], real);
            matrix[row][i] /= real;
        } 
    }

    // podmieniam wersy
    double *temp_pointer = matrix[column];
    matrix[column] = matrix[row];
    matrix[row] = temp_pointer;
    return 0;
}

void clear_column(double **matrix, int m, int n, int column){
    double *my_row = matrix[column];
    print_matrix(&my_row, m, 0);

    for(int i = column+1; i < n; i++){
        double divider = matrix[i][column]/ my_row[column];
        // printf("%d / %d = %d\n", matrix[i][column], my_row[column], divider);
        for(int j = 0; j < m; j++){
            matrix[i][j] -= my_row[j] * divider;
        }
    }
}

void gauss_elimination(double **matrix, int m, int n){
    for(int i = 0; i < m; i++){
        // wybieramy kolumne
        int ok = make_one(matrix, m, n, i);

        printf("\n");
        print_matrix(matrix, m, n);

        // czyscimy inne wiersze w tej kolumnie 
        if (!ok){
            clear_column(matrix,m,n, i);
        }
        

        printf("\n");
        print_matrix(matrix, m, n);
        printf("nastepny wers\n");
    }    
}