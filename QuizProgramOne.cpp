#include <iostream> 

int main()
{
	int a, b;
	std::cout << "Enter an integer: ";
	std::cin >> a;
	std::cout << "Enter another integer: ";
	std::cin >> b;
	std::cout << a << " + " << b << " is " << a + b;
	std::cout << a << " - " << b << " is " << a - b;
	return 0;
}