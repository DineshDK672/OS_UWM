#include <stdio.h>  
#include <signal.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <stdbool.h> 

void abrt_handler(int sigNum){
        printf("Caught a signal with signal number : %d\n",sigNum);
}

int main(){
    signal(SIGABRT,abrt_handler);
    abort();
    return 0;
}