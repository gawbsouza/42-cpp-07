/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:49:10 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/17 17:16:30 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main() {
    
    int numbers[] = {5, 10, -100, 55, 777};
    std::cout << "Intergers: ";
    iter(numbers, 5, &valueWithComma);
    std::cout << std::endl;


    std::string strings[] = {"car", "House", "APPL&", "Mouse", "Test"};
    std::cout << "Strings: ";
    iter(strings, 5, &valueWithComma);
    std::cout << std::endl;

    float floats[] = {-85558.0f, 5.3444f, 0.1f, 5512.33f, 42.424242f};
    std::cout << "Floats: ";
    iter(floats, 5, &valueWithComma);
    std::cout << std::endl;
    
    return 0;
}
