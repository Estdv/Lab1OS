#include <stdio.h>
#include <unistd.h>

int main(){
	int f = fork();
	if(f==0){
	execl("HolaMundo", NULL);
	}

	else{
	printf("%d\n", (int)getpid());
	execl("HolaMundo", NULL);
	}
	
	return(0);


}
