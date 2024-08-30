#include "types.h"
#include "fcntl.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "proc.h"

uint64
sys_getname(void)
{
  char *name = myproc()->name;
  uint64 buf;
  int size;

  argaddr(0, (uint64 *)&buf);
  argint(1, &size);

  if(size > 16)
    size = 16;

  if(copyout(myproc()->pagetable, buf, name, size) < 0)
    return -1;

  return 0;
}
