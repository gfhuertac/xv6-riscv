#include "user.h"
#include "fcntl.h"

int main(void) {
    int pid = getppid();  // Llamada a getppid
    printf(1, "El pid del proceso padre es: %d\n", pid);

    int ancestor = getancestor(1);  // Llamada a getancestor
    printf(1, "El pid del ancestro 1 es: %d\n", ancestor);

    ancestor = getancestor(2);  // Llamada a getancestor
    printf(1, "El pid del ancestro 2 es: %d\n", ancestor);

    return 0;
}
