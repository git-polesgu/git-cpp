#include <iostream>
int main() {
	int A , B , C ;

	std :: cin >> A;
	
	switch (A)
	{
		case 0:
			int Z;
			Z = 15;
			std:: cout << "mon" << A << std :: endl;
			break;

		case 1:
			std :: cout << "tue" << Z << std :: endl;
			break;
		case 2:
			std :: cout << "wen" << std :: endl;
			break;
		case 3:
			std :: cout << "two" << std :: endl;
			break;
		case 4:
			std :: cout << "fri" << std :: endl;
			break;
		case 5:
			std :: cout << "sat" << std :: endl;
			break;
		default:
			std :: cout << "sun" << std :: endl;
	}
	// <expression> ? <action 1> : <action 2>
	// true - action 1
	// false - action 2
	return 0;
}
