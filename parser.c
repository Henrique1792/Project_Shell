#include "parser.h"



char **Args(char *command, int *nargs){
  char **rt;
  char *tmp;
  int i,flag=0;
  
  tmp=strtok(command, TOK_DELIM);
  while(!flag){
    rt=(char**)malloc(i+1 *sizeof(char *));
    rt[i++]=tmp;
    *nargs=i;
    tmp=strtok(NULL,TOK_DELIM);
    if(tmp==NULL)
      flag=1;
  }
  
  return rt;  
}
