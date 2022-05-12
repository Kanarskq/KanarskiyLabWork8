#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
extern char ** environ;
int main (void)
{
        char* cat_args []={   "cat","/etc/hosts",NULL };
        pid_t pid=fork();
        if (pid == 0){
                printf("\n The child of Kanarskiy print next info:\n");
                execve ("/bin/cat", cat_args, environ);
                printf("execve failed\n");
                return EXIT_FAILURE;
		}
		
return EXIT_SUCCESS;
}