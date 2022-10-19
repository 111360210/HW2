#include <stdio.h>

int main()
{
	int f;
	int tenuse;
	printf("%s", "(Pythagorean Triples)\nAll sides no larger than 500's right triangle:\n");
	for (int side1 = 1; side1 < 500; side1++)
		for (int side2 = 1; side2 < 500; side2++)
			for (int hypo = 1; hypo <= 500; hypo++)
			{
				f = side1 * side1 + side2 * side2;
				tenuse = hypo * hypo;
				if (f == tenuse)
				{
					printf("(%d %d %d) \n", side1, side2, hypo);
				}
			}

}