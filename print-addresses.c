#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	if(argc < 2) {
 		printf("Usage: %s <decimal number>\n", argv[0]);
		return 1;
	}
	
	for(int i=1; i< argc; i++){
	
		unsigned long long address = strtoull(argv[i], NULL, 10);
		
		printf("0x%01211X\n", address & 0xFFFFFFFFFFFF);
	}
	return 0;
}
