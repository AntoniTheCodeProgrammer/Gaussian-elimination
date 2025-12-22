#include "gauss.h"
#include "matrix.h"
// tu bedzie funkcja z gaussem

int chose_row(double **matrix, int m, int n, int column, int row){
    int actual_row = -1;
    double largest = 0;

    // szukam najlepszej jedynki
    for(int i = row; i < n; i++){
        if(fabs(matrix[i][column]) > largest){
            largest = fabs(matrix[i][column]);
            actual_row = i;
        }
    }

    if(actual_row == -1){
        return 1;
    }

    // dziele zeby byla jedynka
    // for(int i = 0; i < m; i++){
    //     if (matrix[actual_row][i] != 0){
    //         // printf("%.2f / %.2f\n", matrix[actual_row][i], real);
    //         matrix[actual_row][i] /= real;
    //     } 
    // }

    // podmieniam wersy
    if(actual_row != row){
        double *temp_pointer = matrix[row];
        matrix[row] = matrix[actual_row];
        matrix[actual_row] = temp_pointer;
    }
    
    return 0;
}

void clear_column(double **matrix, int m, int n, int column, int row){
    double *my_row = matrix[row];
    // print_matrix(&my_row, m, 0);

    for(int i = row+1; i < n; i++){
        double divider = matrix[i][column]/ my_row[column];
        // printf("%d / %d = %d\n", matrix[i][column], my_row[column], divider);
        for(int j = 0; j < m; j++){
            matrix[i][j] -= my_row[j] * divider;
        }
    }
}

void gauss_elimination(double **matrix, int m, int n){
    int row = 0;
    for(int i = 0; i < n-1; i++){
        // printf("wykonuje petle po raz %d\n", i+1);
        // wybieramy kolumne
        int ok = chose_row(matrix, m, n, i, row);

        // printf("\n");
        // print_matrix(matrix, m, n);

        // czyscimy inne wiersze w tej kolumnie 
        if (ok == 0){
            clear_column(matrix, m, n, i, row);
            row++;
        }

        // printf("\n");
        // print_matrix(matrix, m, n);
        
    }    
}