#include "utils.h"


/*
 *needs 2:
 *  set fork flow
 *  and execvp flow.
 *
 * int kid(char *cmd, char *result, char *args){}*/


char *get_line(){
  char *rt=NULL; char chk='a'; int i=0; 
  do{
    chk=getchar();
    rt=(char *)realloc(rt,(i+1)*sizeof(char));
    rt[i++]=chk;

  }while(chk!='\n');
  rt[--i]='\0';
  return rt;
}
