/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:54:57 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/17 17:16:20 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <cstddef>
# include <iostream>

template <typename T>
void iter( T * arr, size_t len, void (fun)(T &))
{
    for (size_t i = 0; i < len; i++) {
        fun( arr[i] );
    }
}

template <typename T>
void valueWithComma( T & value ) 
{
    std::cout  << value << ", ";
}

#endif