/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:53 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/21 22:35:23 by mburgler         ###   ########.fr       */
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
	std::cout << "getRawBits member function called"<<std::endl;
	return m_raw_bits;
}

void	Fixed::setRawBits( int const raw )
{
	m_raw_bits = raw;
}
