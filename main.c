/*#include "shell.h"*/


/*int main(int argc, char *argv[]){*/
  /*shell_init();*/
  /*return 0;*/
/*}*/

#include "parser.h"

int main(int argc, char *argv[]){
  char *cmd, **rt;
  int Nargs, i;
  
  cmd=get_line();
  rt=Args(cmd,&Nargs);
  
  for(i=0;i<Nargs;i++)
    printf("Arg -%d- %s\n",i,rt[i]);
  for(i=0;i<Nargs;i++)
    free(rt[i]);

  free(rt);
  free(cmd);
  return 0;
}
