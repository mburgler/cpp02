/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:57:04 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/24 18:51:37 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point A;
    Point B(10, 1);
    Point C(5, 5);

    Point P(3, 1);
    std::cout << "A: "<< A.get_x() << ", " << A.get_y() << std::endl;
    std::cout << "B: "<< B.get_x() << ", " << B.get_y() << std::endl;
    std::cout << "C: "<< C.get_x() << ", " << C.get_y() << std::endl;
    std::cout << "P: "<< P.get_x() << ", " << P.get_y() << std::endl;
    std::cout << (bsp(A,B,C,P) ? "Point is inside the triangle" : "Point is outside the triangle") << std::endl;

    Point P2(-1, -1);
    std::cout << "A: "<< A.get_x() << ", " << A.get_y() << std::endl;
    std::cout << "B: "<< B.get_x() << ", " << B.get_y() << std::endl;
    std::cout << "C: "<< C.get_x() << ", " << C.get_y() << std::endl;
    std::cout << "P: "<< P2.get_x() << ", " << P2.get_y() << std::endl;
    std::cout << (bsp(A,B,C,P2) ? "Point is inside the triangle" : "Point is outside the triangle") << std::endl;

    Point P3(10, 1);
    std::cout << "A: "<< A.get_x() << ", " << A.get_y() << std::endl;
    std::cout << "B: "<< B.get_x() << ", " << B.get_y() << std::endl;
    std::cout << "C: "<< C.get_x() << ", " << C.get_y() << std::endl;
    std::cout << "P: "<< P3.get_x() << ", " << P3.get_y() << std::endl;
    std::cout << (bsp(A,B,C,P3) ? "Point is inside the triangle" : "Point is outside the triangle") << std::endl;
    return 0;
}
