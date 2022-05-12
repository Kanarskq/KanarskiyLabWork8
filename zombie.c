#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{      
       int i;
       pid_t pid = fork ();
       if (pid == 0){
               printf("I am child with pid=%d. My parent pid=%d\n",getpid(),getppid());
               sleep (6);
               printf("I am zombie-process of Kanarskiy. My parent pid=%d\n",getppid());
               _exit(0);
        }
       else{
               for (i=0;i<11; i++){
                       printf("I am parent with pid=%d, My child pid=%d\n",getpid(),pid);
                       sleep (1);
               }
        }
return 0;
}
