#include<iostream>

using namespace std;

typedef struct point
{
	double x;
	double y;
}point;

double find_slope(point A, point B)
{
	return (A.y-B.y)/(A.x-B.x);
}

int main()
{
	point A, B, C, D;
	A.x = 1.0;
	A.y = 1.0;
	B.x = 2.0;
	B.y = 1.0;
	C.x = 2.0;
	C.y = 2.0;
	D.x = 1.0;
	D.y = 3.0;

	double slope_A_B = find_slope(A,B);
	double slope_C_D = find_slope(C,D);
	bool is_square = false;
	if(slope_A_B == slope_C_D)
	{
		double slope_A_C = find_slope(A,C);
		double slope_B_D = find_slope(B,D);
		if(slope_A_C * slope_B_D == -1)
			is_square = true;
		if(!is_square)
        	{
                      double slope_A_D = find_slope(A,D);
                      double slope_B_C = find_slope(B,C);
                      if(slope_A_D * slope_B_C == -1)
                                   is_square = true;
        	}
	}
	else if(slope_A_B * slope_C_D == -1)
	{
		double slope_A_C = find_slope(A,C);
		double slope_B_D = find_slope(B,D);
		if(slope_A_C == slope_B_D)
			is_square = true;
	}
	if(is_square)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
 
