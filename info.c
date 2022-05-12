#include <stdio.h>
#include <unistd.h>

int main (void)
{
   fprintf(stderr,"I am process!\n");
   fprintf(stderr,"My group process id =%d\n",getpgrp());
   fprintf(stderr,"My pid=%d\n",getpid());
   fprintf(stderr,"My parent pid=%d\n",getppid());
   fprintf(stderr, "My user id=%d\n",getuid());
   fprintf(stderr,"My group id=%d\n",getgid());
  return 0;
}