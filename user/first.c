//A Simple C program 
#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
	
//passing command line arguments 
	
int main(int argc, char *argv[]) 
{ 
    printf("My first xv6 program learnt at GFG\n"); 

    char buf[16];
    getname(buf, sizeof(buf));
    printf("Process name: %s\n", buf);
  
    exit(0); 
} 

// This code is contributed by sambhav228 
