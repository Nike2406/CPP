#include "whatever.hpp"

int		main() {
	int	int1 = 4;
	int	int2 = 2;
	cout << "int1 = " << int1 << ", int2 = " << int2 << endl;
	cout << "swap: ";
	::swap(int1, int2);
	cout << "int1 = " << int1 << ", int2 = " << int2 << endl;
	cout << "min = " << ::min(int1, int2) << endl;
	cout << "max = " << ::max(int1, int2) << endl;
	cout << endl;

	string	str1 = "string_1";
	string	str2 = "string_2";
	cout << "string_1 = " << str1 << ", string_2 = " << str2 << endl;
	cout << "swap: ";
	::swap(str1, str2);
	cout << "string_1 = " << str1 << ", string_2 = " << str2 << endl;
	cout << "min = " << ::min(str1, str2) << endl;
	cout << "max = " << ::max(str1, str2) << endl;
	cout << endl;

	float	fl1 = 4.33f;
	float	fl2 = 5.22f;
	cout << "float_1 = " << fl1 << ", float_2 = " << fl2 << endl;
	cout << "swap: ";
	::swap(fl1, fl2);
	cout << "float_1 = " << fl1 << ", float_2 = " << fl2 << endl;
	cout << "min = " << ::min(fl1, fl2) << endl;
	cout << "max = " << ::max(fl1, fl2) << endl;
	cout << endl;

	double	db1 = 3.5555;
	double	db2 = 4.22;
	cout << "double_1 = " << db1 << ", double_2 = " << db2 << endl;
	cout << "swap: ";
	::swap(db1, db2);
	cout << "double_1 = " << db1 << ", double_2 = " << db2 << endl;
	cout << "min = " << ::min(db1, db2) << endl;
	cout << "max = " << ::max(db1, db2) << endl;

	return (0);
}