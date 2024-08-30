#include "kernel/types.h"
#include "user/user.h" 

int main(void)
{  
    char *name = (char*)malloc(16*sizeof(char));
    int r = getpname(name, 16);

    if (r == -1) {
        printf("No pude leer el nombre!");
        exit(1);
    }

    printf("Hello World from program %s (%d)\n", name, getpid());  
    exit(0);
}