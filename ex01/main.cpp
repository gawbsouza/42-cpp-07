/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:49:10 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/29 16:11:27 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{    
    int numbers[]   = {5, 10, -100, 55, 777};
    int numbersSize = 5;
    
    std::cout << "Integers: ";
    iter(numbers, numbersSize, &valueWithComma);
    std::cout << std::endl;


    std::string strings[]   = {"car", "House", "APPL&", "Mouse", "Test"};
    int         stringsSize = 5;
    
    std::cout << "Strings: ";
    iter(strings, stringsSize, &valueWithComma);
    std::cout << std::endl;

    double	doubles[]	= {-85558.0, 5.3444, 0.1, 5512.33, 42.4242};
    int		doublesSize	= 5;
    
    std::cout << "Doubles: ";
    iter(doubles, doublesSize, &valueWithComma);
    std::cout << std::endl;
    
    return 0;
}
