#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{    
	 int i;
       	pid_t pid = fork ();
      	 if (pid != 0){
              		 printf("I am parent with pid=%d. My child pid=%d\n", getpid(),pid);
                		sleep (6);
              		 _exit(0);
        	}
       else{
               for (i=0;i<11; i++){
                       printf("Parent of Kanarskiy ppid=%d\n", getppid());
                       sleep (1);
               }
        }
return 0;
}