#include "types.h"
#include "defs.h"
#include "param.h"
#include "proc.h"


int sys_getppid(void) {
    struct proc *p = myproc(); 
    if (p->parent == 0) {
        return -1; 
    }
    return p->parent->pid; 
}
