// fork a process and it create two branch 1 is parent and 2nd is child.
// the child and parent will execute every line of code after the fork separately.

#include <stdio.h> 
#include <unistd.h> 
int main() 
{ 
    fork(); 
    fork();
    printf("Hello world!\n"); 
    return 0; 
} 


//Output: Hello world Hello world Hello world Hello world 