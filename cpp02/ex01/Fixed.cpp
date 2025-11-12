#include "Fixed.hpp"

Fixed::Fixed(const int fix)
{
	std::cout<<"Default constructor called"<<std::endl;
	std::cout<<"Int constructor called"<<std::endl;
	this->fix_point = fix << bit_num;
}

Fixed::Fixed(const float fFix)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->fix_point = roundf(fFix * (1 << bit_num));
}

Fixed::Fixed(const Fixed& cp)
{
	std::cout<<"Copy constructor called"<<std::endl;
	fix_point = cp.fix_point;
}

Fixed& Fixed::operator=(const Fixed& op)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &op)
	{
		fix_point = op.fix_point;
	}
	return *this;
}

void Fixed::setRawBits(int new_fix)
{
	this->fix_point = new_fix;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->fix_point;
}

float Fixed::toFloat( void ) const
{
	return fix_point / (1 << bit_num);
}

int Fixed::toInt( void ) const
{
	return fix_point / (1 << bit_num);
}

std::ostream& Fixed::operator<<(std::ostream& out, const Fixed& f) {
    out << f.toFloat();
    return out;
}


Fixed::~Fixed()
{
	std::cout<<"Class ended"<<std::endl;
}