#include <stdio.h>
#include <stdlib.h>

#include "rational.h"

/*
 *Function:GreatestCommomDivisor
 *This function calculates the greatest common divisor of two numbers
 */
int GreatestCommonDivisor(int a,int b){
	int i=a>b?b:a;
	for(;i>0;i--){
		if(a%i==0&&b%i==0) break;
	}
	return i;
}

/* 
 * Function:CreatRational
 * This function returns the rational num/den.
 */
rationalT CreatRational(int num,int den){
	rationalT r;
	r.num=num;
	r.den=den;
	return r;
}

/*
 *Function:AddRational
 *This function returns the sum of two rational numbers
 */
rationalT AddRational(rationalT r1,rationalT r2){
	int num,den,gcd;
	rationalT r;
	num=r1.num*r2.den+r2.num*r1.den;
	den=r1.den*r2.den;
	gcd=GreatestCommonDivisor(num,den);
	if(gcd!=1){
		num/=gcd;
		den/=gcd;
	}
	r.num=num;
	r.den=den;
	return r;
}

/*
 *Function:MultiplyRational
 *This function returns the product of two rational numbers
 */
rationalT MultiplyRational(rationalT r1,rationalT r2){
	int num,den,gcd;
	rationalT r;
	num=r1.num*r2.num;
	den=r1.den*r2.den;
	gcd=GreatestCommonDivisor(num,den);
	if(gcd!=1){
		num/=gcd;
		den/=gcd;
	}
	r.num=num;
	r.den=den;
	return r;
}

/*
 *Function:GetRational
 *This function reads a rational number from the user in the form num/den.
 */
rationalT GetRational(rationalT r){
	
	scanf("%d/%d",&r.num,&r.den);
	
	return r;
}

/*
 *Function:PrintRational 
 *This function displays the number as a fraction on the screen.
 */
void PrintRational(rationalT r){
	printf("The total is %d/%d",r.num,r.den);
}

