#include <stdio.h>  
#include <signal.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <stdbool.h> 

void segv_handler(int sigNum){
    printf("Caught a signal with signal number : %d\n",sigNum);
    getchar();            
}
int main(){
    signal(SIGSEGV,segv_handler);
    char *s="Operating Systems";
    *s ="OS";
    return 0;
}