/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:42:41 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/21 22:39:11 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	private:
		static const int s_frac_bits = 8;
		int	m_raw_bits;
	public:
		Fixed(void);
		Fixed(const Fixed& ref);
		~Fixed(void);
		Fixed& operator= (const Fixed& ref);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};
