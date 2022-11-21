#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f = fopen("port_config.txt", "w");

	for(int i = 0; i < 20; i++) {
		char str[40] = "PORTID ";
		char a = (i+1) + '0';
		char *retstr;
		char b = '\n';
		retstr = strcat(str, &a);

		fwrite(retstr, sizeof(char), 9, f);
		fwrite(&b, sizeof(char), 1, f);
	}
}
