#include <iostream>
#include "sum.h"
using namespace std;

int main() {

	double x = 0, y = 0;

	cout << "���������l��2���͂��Ă��������B > " << endl;
	cin >> x >> y;
	
	cout << "���v�l��" << Sum(x, y) << "�ł��B" << endl;
}