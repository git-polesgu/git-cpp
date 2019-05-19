#include <iostream>  

int main()
{
	double a,b;
	char s;
	std::cout <<"Введите 2 числа "<< '\n';
	std::cin >> a >> b;
	std::cout <<"Введите арифметическую операцию ";
	std::cin >> s;
	switch(s)
	{
		case '+':
			std:: cout <<"Результат операции ("<< s<< ") = " << a+b ;
			break;
		
		case '-':
			std:: cout <<"Результат операции ("<< s<< ") = " << a-b ;
			break;
		case '*':
			std:: cout <<"Результат операции ("<< s<< ") = " << a*b;
			break;
		case '/':
			std:: cout <<"Результат операции ("<< s<< ") = " << a/b;
			break;
		default:
			std:: cout << "Введен неверный символ";
			break;
	}
	return 0;
}
