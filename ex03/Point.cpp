/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:00:26 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/23 16:54:33 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): m_x(0), m_y(0){
	std::cout << "Default constructor called for Point"<<std::endl;
}

Point::Point(const Fixed& ref): m_x(ref.m_x), m_y(ref.m_y){
	std::cout << "Copy constructor called for Point"<<std::endl;
}

Point::Point(const float x, const float y): m_x(x), m_y(y){
	std::cout << "Given X and Y float constructor called for Point"<<std::endl;
}

Point::~Point(void){
	std::cout << "Destructor called for Point"<<std::endl;
}

Point& Point::operator=(const Point& ref)
{
	std::cout << "Copy assignment operator called for Point"<<std::endl;
	std::cout << "It's const, what are you expecting. You cannot assign new values"<<std::endl;
    return *this;
}

float	Point::get_x( void ) const{
	return (m_y.toFloat());
}

float	Point::get_y( void ) const{
	return (m_y.toFloat());
}