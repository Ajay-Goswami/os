
// Orphan Process.  
// Parent process finishes execution while the child process is running. The child process becomes orphan. 


#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t p;
    p=fork();
    if(p==0){
        sleep(2);
        printf("I am child having pid= %d\n", getpid());
        printf("My parent pid is %d\n", getppid());    
    }
    else{
        printf("I am parent having pid= %d\n", getpid());
        printf("My child pid is %d\n", p);
    }
}