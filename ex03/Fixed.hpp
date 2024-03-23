/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:42:41 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/23 15:55:39 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int s_frac_bits = 8;
		int	m_raw_bits;
	public:
		Fixed(void);
		Fixed(const Fixed& ref);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);
		
		Fixed& operator= (const Fixed& ref);
		Fixed operator+(const Fixed& ref) const;
		Fixed operator-(const Fixed& ref) const;
		Fixed operator*(const Fixed& ref) const;
		Fixed operator/(const Fixed& ref) const;

		bool operator==(const Fixed& ref) const;
		bool operator!=(const Fixed& ref) const;
		bool operator>(const Fixed& ref) const;
		bool operator<(const Fixed& ref) const;
		bool operator>=(const Fixed& ref) const;
		bool operator<=(const Fixed& ref) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, Fixed const& nmb);
