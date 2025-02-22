#include <stdio.h>

int main() {

    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Direcciones de memoria de la matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat[%d][%d]: %p\n", i, j, (void*)&mat[i][j]);
        }
    }

    printf("\nAnálisis:\n");
    printf("Los elementos se almacenan en orden de filas (row-major order).\n");
    printf("La dirección de mat[1][0] es contigua a la de mat[0][2].\n");

    return 0;
}
