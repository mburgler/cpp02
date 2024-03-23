/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:01:16 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/23 19:11:44 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
    
}

Fixed surface_area(Point const a, Point const b, Point const c){
    Fixed tmp;
    
    tmp =  a.m_x * (b.m_y - c.m_y) + b.m_x * (c.m_y - a.m_y) + c.m_x * (a.m_y - b.m_y);
    if(tmp < Fixed(0))
        tmp = tmp * Fixed(-1);
    tmp = tmp * Fixed(0.5);
    return(tmp);
}