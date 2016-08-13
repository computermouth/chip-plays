#include <stdlib.h>
#include <string.h>
#include "fcgi_stdio.h"

int main(){

	int xpos = 220;

	FCGX_Request request;
	FCGX_Init();
	FCGX_InitRequest(&request, 0, 0);

	while(FCGX_Accept_r(&request) >=0){
		
		printf("Content-type: text/plain\r\n\r\n");
		
		const char *qs = FCGX_GetParam("QUERY_STRING", request.envp);
		
		if(qs[0] == 'p'){
			printf("%d", xpos);
		}else if(qs[0] == 'm'){
			xpos--;
		}else if(qs[0] == 'a'){
			xpos++;
		}
		
	}

	return 0;
}
