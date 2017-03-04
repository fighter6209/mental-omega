typedef struct{
	int num;
	int den;
} rationalT;

rationalT CreatRational(int num,int den);

rationalT AddRational(rationalT r1,rationalT r2);

rationalT MultiplyRational(rationalT r1,rationalT r2);

rationalT GetRational(rationalT r);

void PrintRational(rationalT r);

int GreatestCommonDivisor(int a,int b);
