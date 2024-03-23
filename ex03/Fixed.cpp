/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:53 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/23 15:56:50 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): m_raw_bits(0)
{
	//std::cout << "Default constructor called for Fixed"<<std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	//std::cout << "Copy constructor called for Fixed"<<std::endl;
	*this = ref;
}

Fixed::Fixed(int const nmb): m_raw_bits(nmb << s_frac_bits)
{
	//std::cout << "Int constructor called for Fixed"<<std::endl;
}

Fixed::Fixed(float const nmb): m_raw_bits(roundf(nmb * (1 << s_frac_bits)))
{
	//std::cout << "Float constructor called for Fixed"<<std::endl;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called for Fixed"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	//std::cout << "Copy assignment operator called for Fixed"<<std::endl;
	if (&ref != this) {
		this->m_raw_bits = ref.getRawBits();
	}
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called"<<std::endl;
	return m_raw_bits;
}

void	Fixed::setRawBits( int const raw )
{
	m_raw_bits = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)m_raw_bits / (float)(1 << s_frac_bits));
}

int		Fixed::toInt( void ) const{
	return (m_raw_bits >> s_frac_bits);
}

std::ostream& operator<< (std::ostream &out, Fixed const& nmb)
{
	return out << nmb.toFloat();
}

//Aritmentics, Comparisons, and other operators via overloading


Fixed Fixed::operator+(const Fixed& ref) const{
	Fixed result;
	result.setRawBits(this->m_raw_bits + ref.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& ref) const{
	Fixed result;
	result.setRawBits(this->m_raw_bits - ref.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& ref) const{
	Fixed result;
	result.setRawBits((this->m_raw_bits * ref.getRawBits()) >> s_frac_bits);
	return result;
}

Fixed Fixed::operator/(const Fixed& ref) const{
	Fixed result;
	if (ref.m_raw_bits == 0)
		return Fixed (42);
	result.setRawBits((this->m_raw_bits * (1 << s_frac_bits)) / ref.getRawBits());
	return result;
}

bool	Fixed::operator==(const Fixed& ref) const{
	return (this->m_raw_bits == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed& ref) const{
	return !(*this == ref);
}

// ref ist das zweitere bei 1 < 2
bool	Fixed::operator<(const Fixed& ref) const{
	return (this->m_raw_bits < ref.getRawBits());
}

bool	Fixed::operator>(const Fixed& ref) const{
	return (this->m_raw_bits > ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed& ref) const{
	return (this->m_raw_bits >= ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed& ref) const{
	return (this->m_raw_bits <= ref.getRawBits());
}

Fixed Fixed::operator++(){
	this->m_raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed result;
	result.setRawBits(this->m_raw_bits);
	++(*this);
	return result;
}

Fixed Fixed::operator--(){
	this->m_raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed result;
	result.setRawBits(this->m_raw_bits);
	--(*this);
	return result;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return (a > b) ? a : b;
}
