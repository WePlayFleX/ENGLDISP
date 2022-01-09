#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

void Engldisp(Distance);

int main()
{
	Distance d1, d2;

	cout << "Enter the number of feet: ";
	cin >> d1.feet;
	cout << "Enter the number of inches: ";
	cin >> d1.inches;

	cout << "Enter the number of feet: ";
	cin >> d2.feet;
	cout << "Enter the number of inches: ";
	cin >> d2.inches;

	cout << "\nd1 = ";
	Engldisp(d1);
	cout << "\nd2 = ";
	Engldisp(d2);
	cout << endl;

	system("pause");
	return 0;
}

void Engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
