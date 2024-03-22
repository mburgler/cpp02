/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:57:04 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/22 17:27:35 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b( 5.05f );
    Fixed const c( 2 );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    a = (b + c);
    std::cout << a << std::endl;
    a = (b - c);
    std::cout << a << std::endl;
    a = (b * c);
    std::cout << a << std::endl;
    a = (b / c);
    std::cout << a << std::endl;
    a=2;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    if (b > a)
        std::cout << "b bigger"<< std::endl;
    if (b <= a)
        std::cout << "b smaller" << std::endl;
    Fixed e;
    std::cout << e << std::endl;
    std::cout << ++e << std::endl;
    std::cout << e << std::endl;
    std::cout << e++ << std::endl;
    std::cout << e << std::endl;
}

// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }
