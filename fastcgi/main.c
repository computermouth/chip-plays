//#include <stdio.h>
#include <stdlib.h>

#include "fcgi_stdio.h"
//#include "fcgio.h"

int main(){

	int xpos = 220;

	char qs[10];

	while(FCGI_Accept() >=0){
		
		printf("Content-type: text/plain\r\n\r\nStatus: 200 OK\r\n\r\n");
	}

	return 0;
}
