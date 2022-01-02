//Never Give Up Keep Testing
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
int main(){
  int fd[2],rec_bytes;
  pid_t pid;
  char string[]="Suraj Das";
  char word[80];
  pipe (fd);
  pid = fork ();
  if (pid == -1) {
     perror("fork");
      exit (1);
    } if (pid == 0){
      close (fd[0]);
      write (fd[1], string, (strlen(string)+1));
      close (fd[1]);
    }else if (pid > 0){
      close (fd[1]);
      rec_bytes=read(fd[0],word,sizeof(word));
      printf ("\nReceived String : %s with size %d\n",word,rec_bytes);
      close (fd[0]);
    }
  return 0;
}