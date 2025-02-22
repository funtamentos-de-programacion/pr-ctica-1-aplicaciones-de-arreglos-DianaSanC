#include <studio.h>

int main() {

    int arr[3] = {100, 200, 300};

    printf("Dirección de arr: %p\n", (void*)arr);
    printf("Dirección de &arr[0]: %p\n", (void*)&arr[0]);
    printf("Dirección de &arr: %p\n", (void*)&arr);
 
    printf("\nAnálisis:\n");
    printf("arr y &arr[0] son iguales, ya que arr es un puntero al primer elemento.\n");
    printf("&arr es la dirección del arreglo completo, pero su valor es el mismo que arr y &arr[0].\n");

    return 0;
}
