#include <stdio.h>

int main() {
   
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Dirección de mat: %p\n", (void*)mat);
    printf("Dirección de mat[0]: %p\n", (void*)mat[0]);
    printf("Dirección de &mat[0][0]: %p\n", (void*)&mat[0][0]);


    printf("\nAnálisis:\n");
    printf("mat apunta a la primera fila de la matriz.\n");
    printf("mat[0] y &mat[0][0] coinciden, ya que ambos apuntan al primer elemento.\n");

    return 0;
}
