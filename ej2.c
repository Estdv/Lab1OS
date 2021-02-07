#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){

	printf("Archivo original: %s\n", argv[1]);
	printf("Archivo nuevo: %s\n", argv[2]);

	int fd1,fd2;
	char buffer[1024];
	int numbytes;


	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0700);


	while ((numbytes = read(fd1, &buffer, sizeof(char))) > 0){
		write(fd2, &buffer, numbytes);
	}


	close(fd1);
	close(fd2);
	printf("Archivos cerrados: \n");

}
