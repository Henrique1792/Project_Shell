#include "shell.h"
#include "parser.h"


void shell_loop(){
  char *line=NULL;
  
  while(1){
  printf(">> ");
  line=get_line();
  //Parse command here! - need 2 think how
  
    
  
  free(line);
  }
   
}

void shell_init(){
  shell_loop();
}
