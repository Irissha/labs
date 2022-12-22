#include<iostream>
//для генерации случайного массива:
#include<time.h>
#include<stdlib.h>
//прототип нашей функции:
void my_swap(double*& a, double*& b);


int main(void) {

    //Создадим массив:
    double** matrix;
    int num_of_row = 8;
    int num_of_col = 6; //не меньше трёх

    matrix = new double* [num_of_row];
    for (int i = 0; i < num_of_row; i++)
        matrix[i] = new double[num_of_col];
    //заполним его случайными числами от 1 до 100
    srand(time(NULL));
    for (int i = 0; i < num_of_row; i++)
        for (int j = 0; j < num_of_col; j++)
            matrix[i][j] = rand() % 100 + 1;
    // покажем до сортировки:
    for (int i = 0; i < num_of_row; i++) {
        for (int j = 0; j < num_of_col; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // собственно сортировка(ради разнообразия "гномья") 
    // c помощью нашей функции my_swap:
    for (int i = 1; i < num_of_row;) {
        if (matrix[i - 1][2] > matrix[i][2]) {
            my_swap(matrix[i - 1], matrix[i]);
            i--;
        }
        else i++;

        if (i == 0) i++;

    }
    //покажем после сортировки:
    for (int i = 0; i < num_of_row; i++) {
        for (int j = 0; j < num_of_col; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    //Освобождаем память:
    for (int i = 0; i < num_of_row; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}

void my_swap(double*& a, double*& b) {
    double* tmp = a;
    a = b;
    b = tmp;
}