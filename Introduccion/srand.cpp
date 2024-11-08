#include <iostream>
using namespace std;
int main() {
	srand(time(NULL)); //Seed
	int castigo, i=0;
	while (i <= 10)
	{
		castigo = rand() % 2; //%2 es el limite inferior que queremos (2=n) n+1
		cout << castigo << "\n";
		i++;
	}
}
