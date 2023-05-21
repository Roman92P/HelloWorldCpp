#include <iostream>  // for std::cout and std::cin

int main()
{
    //std::cout << "Enter two numbers separated by a space: ";

    //int x{ }; // define variable x to hold user input (and zero-initialize it)
    //int y{ }; // define variable y to hold user input (and zero-initialize it)
    //std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    //std::cout << "You entered " << x << " and " << y << '\n';
    
    /*std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';*/

    int a, b;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;
    std::cout << a << " + " << b << " is " << a + b << '\n';
    std::cout << a << " - " << b << " is " << a - b << '\n';
    

    return 0;
}