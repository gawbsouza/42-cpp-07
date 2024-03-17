/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:47:34 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/17 19:38:36 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

    std::cout << "# Empty Array --- " << std::endl;
    Array<int> emptyArr;
    std::cout << "Size: " << emptyArr.size() << std::endl;
    std::cout << "Array: " << emptyArr << std::endl << std::endl;
    
    
    std::cout << "# Size 4 Array creation --- " << std::endl;
    Array<int> size4Array (4);
    std::cout << "Size: " << size4Array.size() << std::endl;
    std::cout << "Array: " << size4Array << std::endl << std::endl;


    std::cout << "# Elements Manipulation --- " << std::endl;
    Array<int> elementsArray(4);
    elementsArray[0] = -234;
    elementsArray[1] = 42;
    elementsArray[2] = 864;
    elementsArray[3] = 56;
    std::cout << "Size: " << elementsArray.size() << std::endl;
    std::cout << "Array: " << elementsArray << std::endl << std::endl;


    std::cout << "# Index Out of Bounds --- " << std::endl;
    Array<int> sampleArray(4);
    std::cout << "Size: " << sampleArray.size() << std::endl;
    std::cout << "Array: " << sampleArray << std::endl;

    try {
        sampleArray[4];
    } catch( std::exception & e ) {
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    }

    std::cout << "# Copy Array --- " << std::endl;
    Array<int> array1(4);
    Array<int> array2(array1);
    Array<int> array3 = array2;
    array1[2] = 555;
    array2[1] = 888;
    array3[3] = 777;
    std::cout << "(Array 1) Size: " << sampleArray.size() << " Array: " << array1  << std::endl;
    std::cout << "(Array 2) Size: " << sampleArray.size() << " Array: " << array2  << std::endl;
    std::cout << "(Array 3) Size: " << sampleArray.size() << " Array: " << array3  << std::endl << std::endl;

    return 0;
}