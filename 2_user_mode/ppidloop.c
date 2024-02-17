#include <sys/types.h> // for pid_t
#include <unistd.h> // for getpid()

int main(void) 
{
    for (;;) getpid();
}
