#include "stdio.h"

/*
	This function is basically comparing the sides and see which condition is more 
	appropriate and return back the result.
*/ 

char *testing(int side1, int side2, int side3)
{
	
	if(side1 == side2 && side2 == side3 && side1 == side3) 
	
		return "Equilateral";
	
	else if(side1 == side2 || side1 == side3 || side2 == side3)
		
		return "Isoceles";

	else if(side1 == 0 || side2 == 0 || side3 == 0)
		
		return "Invalid value";

	else if(side1 < 0 || side2 < 0 || side3 < 0)
		
		return "Invalid value";

	else if((side1 + side2) < side3 || (side2 + side3) < side1 || (side1 + side3) < side2)
	
		return "Invalid value";

	else if(side1 != side2 && side2 != side3 && side1 != side3)
		
		return "Scalene";

}


