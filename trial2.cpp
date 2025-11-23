


#include <iostream>
#include <cmath>
double x;
double y;
int main()
{
    std::cout << "Hello World!\n";
    std::cout << "pick a value for x";
    std:: cin >> x;
    std::cout << "pick a value for y";
    std::cin >> y;
	std::cout << " y divided by x is: " << y / x << std::endl;
    std::cout << "y multiplied by x is: " << y * x << std::endl;
    std::cout << "the size of x is: " << sizeof(x) << std::endl;
    std::cout << "the size of y is: " << sizeof(float) << std::endl;
    std::cout << "round x is: "<< round(x) << std::endl;
    std::cout <<"ceil x is: " << ceil(x) << std::endl;
    std::cout<<"floor x is:" << floor(x) << std::endl;
    std::cout<< "round y is: " << round(y) << std::endl;
    std::cout<< "ceil y is: " << ceil(y) << std::endl;
    std::cout<< "floor y is: " << floor(y) << std::endl;
    return 0;
}

