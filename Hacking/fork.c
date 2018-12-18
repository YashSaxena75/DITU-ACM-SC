#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
int main(void){
	int f,p;
	f=fork();	//This function is an inbuilt to pull another process into the picture as a child process
	p=getpid();
	fork();		//Intentionally invoked fork
	if (f<-1){
		printf("Fork failed\n with process ID %d",p);
	}
	else if(f==0){
		printf("This is the child process with process ID %d\n",p);
	}
	else{
		exit(0);
	}
}
