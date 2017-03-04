#include <stdio.h>
#include <stdlib.h>

#include "rational.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	rationalT r1,r2={0,1};
	printf("This program adds a list of rational numbers.\nSignal end of list with a 0.\n");
	for(;;){
		r1=GetRational(r1);
		if(r1.num==0) break;
		if(r1.den==0){
			printf("Error:0 cannot be the divisor!This data dosen't count.'\n");
			continue;
		}
		r2=AddRational(r1,r2);
	}
	PrintRational(r2);
	return 0;
}
