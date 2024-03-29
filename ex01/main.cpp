/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:49:10 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/29 10:59:50 by gasouza          ###   ########.fr       */
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

    float   floats[]    = {-85558.0f, 5.3444f, 0.1f, 5512.33f, 42.424242f};
    int     floatsSize  = 5;
    
    std::cout << "Floats: ";
    iter(floats, floatsSize, &valueWithComma);
    std::cout << std::endl;
    
    return 0;
}
