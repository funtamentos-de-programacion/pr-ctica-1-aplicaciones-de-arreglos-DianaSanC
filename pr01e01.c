#include <stdio.h>

int main() {
 
    int arr[5] = {10, 20, 30, 40, 50};

 
    printf("Direcciones de memoria:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
