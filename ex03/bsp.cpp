/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:01:16 by mburgler          #+#    #+#             */
/*   Updated: 2024/03/24 18:12:35 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed surface_area(Point const a, Point const b, Point const c){
    Fixed tmp;
    
    tmp =  a.get_x() * (b.get_y() - c.get_y()) + \
        b.get_x() * (c.get_y() - a.get_y()) + \
        c.get_x() * (a.get_y() - b.get_y());
    if(tmp < Fixed(0))
        tmp = tmp * Fixed(-1);
    tmp = tmp * Fixed(0.5f);
    return(tmp);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed sfAll (surface_area(a, b, c));
    Fixed sfSub1 (surface_area(a, b, point));
    Fixed sfSub2 (surface_area(a, point, c));
    Fixed sfSub3 (surface_area(point, b, c));
    if (sfSub1 == Fixed(0) || sfSub2 == Fixed(0) || sfSub3 == Fixed(0))
        return (false);
    Fixed sfSubTotal = sfSub1 + sfSub2 + sfSub3;
    return (sfAll == sfSubTotal);
}
