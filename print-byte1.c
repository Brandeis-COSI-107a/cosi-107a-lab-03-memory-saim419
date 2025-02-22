#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	if(argc <2) {
	
		printf("Usage: %s <numbers> \n", argv[0]);
		return 1;
	}

	for(int x=1; x< argc; x++){
	
		long num = strtol(argv[x], NULL, 0);

		long byte  = (num >> 8) & 0xFF;
		printf("%-3d 0x%021X %-3ld\n",x, byte, byte);
	}
	return 0;
}
