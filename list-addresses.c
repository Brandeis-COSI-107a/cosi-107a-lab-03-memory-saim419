#include <stdio.h>

int var;

void other_function(void);

int main(){
	int stack_var = 10;

	const char* str = "Hello Sir!";

	printf("Stack variable: %p\n", (void*)&stack_var);

	printf("Intialized data: %p\n", (void*)str);

	printf("Uninitialized data: %p\n", (void*)&var);
	
	printf("Main function: %p\n", (void*)main);

	printf("Another function: %p\n", (void*)&other_function);
	
	return 0;
}
void other_function(void){
}
