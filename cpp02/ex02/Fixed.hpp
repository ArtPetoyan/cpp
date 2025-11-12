#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>

class Fixed
{
private:
	int fix_point;
	static const int bit_num = 8;
public:
	Fixed();
	Fixed(const int fix);
	Fixed(const float fFix);
	Fixed(const Fixed& cp);
	Fixed& operator=(const Fixed& op);
	bool operator>(const Fixed& op);
	bool operator<(const Fixed& op);
	bool operator>=(const Fixed& op);
	bool operator<=(const Fixed& op);
	bool operator==(const Fixed& op);
	bool operator!=(const Fixed& op);
	int operator+(const Fixed& op);
	int operator-(const Fixed& op);
	int operator*(const Fixed& op);
	int operator/(const Fixed& op);
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int a);
	Fixed operator--(int a);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits(int new_fix);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif