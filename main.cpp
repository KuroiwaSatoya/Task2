#include <iostream>
#include "sum.h"
using namespace std;

int main() {

	double x = 0, y = 0;

	cout << "足したい値を2つ入力してください。 > " << endl;
	cin >> x >> y;
	
	cout << "合計値は" << Sum(x, y) << "です。" << endl;
}