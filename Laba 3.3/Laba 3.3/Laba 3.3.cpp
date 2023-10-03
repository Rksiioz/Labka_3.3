
#include <iostream>
#include <cmath>


using namespace std;


int main()
{
	double x; // вхідний аргумент
    double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6-R)
		y = 0;
	else
		if (-6 - R < x && x <= 0)
			y = -sqrt(R * R - (x + 6) * (x + 6));
		else
			if (x > -R && x <= -R)
				y = (R * R) / (R - 6);
			else
				if (-R <= x && x >= R)
					y = sqrt(R * R - x * x) ;
				else
					if (R > x && x <= 3)
						y = -(R / 3) * x + R;
					else
						y = (6 / R) * x + 3;


	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}