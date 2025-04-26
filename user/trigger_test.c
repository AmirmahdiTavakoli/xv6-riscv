#include "kernel/types.h"
#include "user/user.h"

int
main()
{
    printf("Calling trigger system call...\n");
    trigger();
    printf("Done.\n");
    exit(0);
}
