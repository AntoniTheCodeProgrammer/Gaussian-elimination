// tu bedzie funkcja z gaussem

void make_one(int **matrix, int m, int n, int column){
    int row = -1;
    int smallest = 9999999;
    int real = smallest;
    // szukam najlepszej jedynki
    for(int i = 0; i < m; i++){
        if(abs(matrix[i][column]) < smallest && matrix[i][column] != 0){
            smallest = abs(matrix[i][column]);
            row = i;
            real = matrix[i][column];
        }
    }
    // dziele zeby byla jedynka
    for(int i = 0; i < n; i++){
        matrix[row][i] /= real;
    }
    // podmieniam wersy
    int *temp_pointer = matrix[column];
    matrix[column] = matrix[row];
    matrix[row] = temp_pointer;
    free(temp_pointer);
}

void gauss_elimination(int **matrix, int m, int n){
    for(int i = 0; i < n; i++){
        // zerujemy kolumne i



    }
    make_one(matrix, m, n, 0);

}


