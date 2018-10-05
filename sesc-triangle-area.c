#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float a;
	scanf("%f", &a);
	printf("%.3f\n", a * a * sqrt(3) / 4.0);
	return 0;
}
