#include<iostream>

using namespace std;

int main()
{
	int height;

	cout << "Tinggi : ";
	cin >> height;

	for (int row = 1; row <= height; ++row) {
		// Print leading spaces
		for (int col = 0; col < height - row; ++col) {
			cout << " ";
		}
		// Print stars
		for (int col = 0; col < (2 * row - 1); ++col) {
			cout << char(118);
		}
		cout << endl;
	}

		return 0;

}