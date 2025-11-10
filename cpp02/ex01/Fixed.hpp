#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fix_point;
	static const int bit_num = 8;
public:
	Fixed(const int fix);
	Fixed(const float fFix);
	Fixed(const Fixed& cp);
	Fixed& operator=(const Fixed& op);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits(int new_fix);
};

#endif