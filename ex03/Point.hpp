/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:00:30 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/24 16:52:25 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
	private:
		const Fixed m_x;
		const Fixed m_y;
	public:
		Point(void);
		Point(const Point& ref);
		Point(const float x, const float y);
		~Point(void);
		Point& operator= (const Point& ref);

		Fixed	get_x( void ) const;
		Fixed	get_y( void ) const;
};
