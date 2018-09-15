#include<stdio.h>
#include<iostream>
#include "vec3_class.h"

using namespace std;


int main()
{
	vec3<int> vector_1 = vec3<int>(6, 4, 7);
	vec3<int> vector_2 = vec3<int>(2, 1, 7);
	vec3<int> vector_3 = vec3<int>(6, 4, 7);

	printf("vector 1 = %i, %i, %i\n", vector_1.x, vector_1.y, vector_1.z);
	printf("vector 2 = %i, %i, %i\n", vector_2.x, vector_2.y, vector_2.z);
	printf("Normalize vector 1: %f\n", vector_1.get_module());

	vector_1.zero();

	printf("vector 1 = %i, %i, %i\n", vector_1.x, vector_1.y, vector_1.z);

	if (vector_1.is_zero())
	{
		printf("vector 1 = 0? : Yes\n");
	}
	else
	{
		printf("vector 1 = 0? : No\n");
	}

	if (vector_2.is_zero())
	{
		printf("vector 2 = 0? : Yes\n");
	}
	else
	{
		printf("vector 2 = 0? : No\n");
	}

	printf("Distance between vectors 1 and 2 = %f\n", vector_1.distance_to(vector_2));

	printf("Vector 2 - Vector 3 = 0?\n");

	vec3<int> sub = vector_2 - vector_3;

	printf("vector_sub = %i, %i, %i\n", sub.x, sub.y, sub.z);


	system("pause");
	return 0;
}