//Zombie process
// Child becomes Zombie as parent is sleeping  when child process exits. 


#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t p;
    p=fork();
    if(p==0){
        printf("I am child having pid= %d\n", getpid());
        printf("My parent pid is %d\n", getppid());    
    }
    else{
        sleep(3);
        printf("I am parent having pid= %d\n", getpid());
        printf("My child pid is %d\n", p);
    }
}

// how to make sure child process never became zombie process we use wait inplace of sleep;