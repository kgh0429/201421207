#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int x;
	void *p;
	
	printf("Address of x: %p\n", (void *)&x);
	p = malloc(1024);
	
	if(p == NULL) {
		fprintf(stderr,"Can't malloc\n");
		return (EXIT_FAILURE);
}
	printf("Allocated space in the heap: %p\n", p);
	return (EXIT_SUCCESS);
}

