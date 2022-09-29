#include <stdio.h>  
#include <signal.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <stdbool.h> 

void int_handler(int sigNum){
    printf("Caught a signal with signal number : %d\n",sigNum);
}

int main(){
    signal(SIGINT,int_handler);
    printf("The program's pid id %d\n", getpid());
    pause();
    return 0;
}