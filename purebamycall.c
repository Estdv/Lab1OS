#include <stdio.h>
#include <sys/syscall.h>

int main(){
	int x = syscall (345);
	printf("%d\n", x);
}
