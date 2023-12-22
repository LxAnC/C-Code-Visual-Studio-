#include<iostream>
using namespace std;
int main()
{
	int a;
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 9; j++)
			for (int z = 1; z <= 9; z++)
				if ((i * 100 + j * 10 + z) * 2 < 1000 && (i * 100 + j * 10 + z) * 3 < 1000&&i!=j&&j!=z&&i!=z&&i!=j&&j!=z&&i!=z && 2*i != 2*j && 2*j != 2*z && 2*i != 2*z&&3 * i != 3 * j && 3 * j != 3 * z && 3 * i != 3 * z)
					cout << i * 100 + j * 10 + z << " " << (i * 100 + j * 10 + z) * 2 << " " << (i * 100 + j * 10 + z) * 3 << endl;
}
