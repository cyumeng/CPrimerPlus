#include <stdio.h>
#include <float.h>
int main(void)
{
	double dnum = 1.0 / 3.0;
	float fnum = 1.0 / 3.0;

	printf("%.4e %.4e\n", dnum, fnum);
	printf("%.12e %.12e\n", dnum, fnum);
	printf("%.16e %.16e\n", dnum, fnum);
	printf("%d %d\n", DBL_DIG, FLT_DIG);

	return 0;
}
