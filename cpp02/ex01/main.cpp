#include "Fixed.hpp"

int main()
{
	Fixed a(4);
	Fixed b( a );
	Fixed c(1);
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}