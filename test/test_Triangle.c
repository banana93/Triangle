#include "unity.h"
#include "Triangle.h"

char *testing(int side1, int side2, int side3); // function call

void setUp(void)
{
}

void tearDown(void)
{
}


/*
	Test the triangle whether it is scalene.
*/

void test_triangle_scalene(void) 
{
	char *name;
	name = testing(2, 1, 3);
	TEST_ASSERT_EQUAL_STRING("Scalene", name);
}

/*
	Test the triangle whether it is equilateral.
*/

void test_triangle_equilateral(void)
{
	char *name;	
	name = testing(2, 2, 2);
	TEST_ASSERT_EQUAL_STRING("Equilateral", name);
}

/*
	Test the triangle whether it is isoceles.
*/

void test_triangle_isoceles(void)
{
	char *name;	
	name = testing(2, 2, 3);
	TEST_ASSERT_EQUAL_STRING("Isoceles", name);

}

/*
	Error checking the triangle whether any sides of the triangle have value zero.
*/

void test_triangle_invalid_zero(void)
{
	char *name;
	name = testing(3, 0, 2);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);

}

/*
	Error checking the triangle whether any sides of the triangle have negative value.
*/ 

void test_triangle_negative_value(void)
{
	char *name;
	name = testing(3, -1, 2);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);

}

/*
	Error checking whether the sides of the triangle is balanced or not.
*/

void test_triangle_sides_value(void)
{
	char *name;
	name = testing(10,2,3);
	TEST_ASSERT_EQUAL_STRING("Invalid value", name);
}