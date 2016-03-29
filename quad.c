#include <stdlib.h> /* #include <stdlib.h> */
#include <stdio.h>
int main(int argc, char *argv[]){
	float a, b, c, y, x;
	/*./main.exe a b c x*/
	a = atof(argv[1]);

	b = atof(argv[2]);

	c = atof(argv[3]);

	x = atof(argv[4]);

	return a*x*x + b*x + c; /*ax^2 + bx + c */
}
