/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:04:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/17 16:48:40 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T>
void swap( T a, T b ) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> 
T min( T a, T b ) {
    return (a < b)? a : b;
}

template <typename T> 
T max( T a, T b ) {
    return (a > b)? a : b;
}

#endif