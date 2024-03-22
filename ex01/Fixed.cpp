/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:53 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/22 02:38:33 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): m_raw_bits(0)
{
	std::cout << "Default constructor called for Fixed"<<std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called for Fixed"<<std::endl;
	*this = ref;
}

Fixed::Fixed(int const nmb): m_raw_bits(nmb << s_frac_bits)
{
	std::cout << "Int constructor called for Fixed"<<std::endl;
}

Fixed::Fixed(float const nmb): m_raw_bits(roundf(nmb * (1 << s_frac_bits)))
{
	std::cout << "Float constructor called for Fixed"<<std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called for Fixed"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called for Fixed"<<std::endl;
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
