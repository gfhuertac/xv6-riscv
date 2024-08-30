#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "proc.h"

uint64
sys_getpname(void)
{
    char *name = myproc()->name;

    char *buffer;
    int size;

    argaddr(0, (uint64 *)&buffer);
    argint(1, &size);

    int result = copyout(myproc()->pagetable, (uint64)buffer, name, size);
    if (result < 0)
    {
        return -1;
    }

    return 0;
}