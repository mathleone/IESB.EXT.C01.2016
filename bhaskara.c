#include <stdlib.h> /* stdlib.h */
#include <stdio.h> /* stdio.h */
#include <math.h> /* math.h */
#include <limits.h> /* limits.h */

int main(int argc, char *argv[]){
	float a, b, c, delta, r1, r2;
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	delta = b*b - 4.0*a*c;

	if(delta > 0) /*if*/
		goto maior;
	else if (delta < 0) /* else if */
		return INT_MIN;
	else /* else */
		r1 = r2 = -b/(2.0*a);
	
	printf("%f\n", r1);
	return r1;
maior:
	r1 = (-b + sqrt(delta) )/(2.0*a);
	r2 = (-b - sqrt(delta) )/(2.0*a);
	printf("%f\n", r1);
	printf("%f\n", r2);
	return (int) r1;
}
