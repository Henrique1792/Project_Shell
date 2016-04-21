#include "shell.h"



int decode(char **cmd){
  pid_t pid;
  int status;
  
  pid=fork();
  

}


void shell_loop(){
  char *line=NULL;
  char **tgt;
  int exe; 
  while(1){
  printf(">> ");
  line=get_line();
  //Parse command here! - need 2 think how
  /*exe = decode()*/
  
    
  
  free(line);
  }
   
}

void shell_init(){
  shell_loop();
}
