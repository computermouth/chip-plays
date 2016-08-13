#include <stdlib.h>
#include <string.h>
#include "fcgi_stdio.h"

int main(){

	int xpos = 220;

	while(FCGI_Accept() >= 0){

		printf("Content-type: text/plain\r\n\r\n");
		char *v = getenv("QUERY_STRING");

		if(*v == 'p')
			printf("%d", xpos);
		else if(*v == 'a' && xpos < 232)
			xpos++;
		else if(*v == 's'&& xpos > 0)
			xpos--;


	}

	return 0;
}
