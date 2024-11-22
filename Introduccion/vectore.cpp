#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int> V{ 1,2,3,4,5 };
	cout << V.size() << "\n"; //size devuelve el tamaño del vector
	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i] << "\n";
	}
	cout << "\n""\n";

	vector<int>u;
	int num = -1;
	while (num != 0)
	{
		cout << "dame num ";
		cin >> num;
		if (num !=0)
		{
			u.push_back(num); //push_back agrega los datos antes del vector
		}
	}
	for (int contador : u)
	{
		cout << "\n""\n";
		cout << contador << "\n";
	}
}
