#include "unity.h"
#include "Triangle.h"


char *testing(int side1, int side2, int side3);



void setUp(void)

{

}



void tearDown(void)

{

}













void test_triangle_scalene(void)

{

 char *name;

 name = testing(2, 1, 3);

 UnityAssertEqualString((const char*)("Scalene"), (const char*)(name), (((void *)0)), (_U_UINT)23);

}











void test_triangle_equilateral(void)

{

 char *name;

 name = testing(2, 2, 2);

 UnityAssertEqualString((const char*)("Equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)34);

}











void test_triangle_isoceles(void)

{

 char *name;

 name = testing(2, 2, 3);

 UnityAssertEqualString((const char*)("Isoceles"), (const char*)(name), (((void *)0)), (_U_UINT)45);



}











void test_triangle_invalid_zero(void)

{

 char *name;

 name = testing(3, 0, 2);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)57);



}











void test_triangle_negative_value(void)

{

 char *name;

 name = testing(3, -1, 2);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)69);



}











void test_triangle_sides_value(void)

{

 char *name;

 name = testing(10,2,3);

 UnityAssertEqualString((const char*)("Invalid value"), (const char*)(name), (((void *)0)), (_U_UINT)81);

}
