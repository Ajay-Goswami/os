//Ques) Write a program in C to demonstrate working of execl() where parent process executes “ls” command and child process executes “date” command.

#include<stdio.h>
#include<unistd.h>
int main(){
char *path1="/bin/ls"; 
char *path2="/bin/date";
int pid=fork(); 
if(pid>0)
    execl(path1,path1,NULL);
else
    execl(path2,path2,NULL);
 
return 0;
}