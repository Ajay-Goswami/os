//Ques) Write a program in C to Implement Inter process Communication using PIPE.

#include<stdio.h>
#include<unistd.h>
int main(){ 
    int arr[2], pid, n; 
    char buffer[100]; 
    pipe(arr); 
    pid=fork(); 
    if(pid>0){
        printf("Sending data to child...\n"); 
        write(arr[1], "Data\n", 5);
    } else{
        printf("Child recieved the data...\n"); 
        n=read(arr[0], buffer, 100); 
        printf("n : %d\n",n); 
        write(1, buffer, n);
    } 
    return 0;
}