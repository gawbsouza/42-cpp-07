/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:23:48 by gasouza           #+#    #+#             */
/*   Updated: 2024/03/29 12:02:14 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

// # include <cstddef>
# include <exception>
# include <iostream>

template < typename T >
class Array 
{
private:

    T *             _array;
    unsigned int    _size;

public:

    // Constructors
    
    Array( void ) { 
        this->_array = NULL;
        this->_size = 0; 
    };
    
    Array( unsigned int size ) {
        this->_array = new T[size]();
        this->_size = size;
    }
    
    Array( const Array & ref ) {
        this->_array = NULL;
        this->_size = 0; 
        *this = ref;
    }
    
    ~Array( void ){
        delete [] this->_array;
    }

    // Methods

    unsigned int size( void ) const {
        return this->_size;
    }

    // Operators
    
    Array & operator=( const Array & ref )
    {
        if (this != &ref)
        {
            if (this->_array != NULL) {
                delete [] this->_array;
            }
            this->_size = ref._size;
            this->_array = new T[ref._size]();
            
            for(unsigned int i = 0; i < ref._size; i++) {
                this->_array[i] = ref._array[i];
            }
        }
        return *this;
    }

    T & operator[]( unsigned int i ) const
    {
        if ( i >= this->_size ) {
            throw IndexOutOfBoundsException();
        }
        return this->_array[i];
    }

    // Extra

    class IndexOutOfBoundsException : public std::exception
    {
        public:
            virtual const char* what() const throw() {
                return "index is out of bounds";
            }
    };

};

template < typename T >
std::ostream & operator<<( std::ostream & out, const Array<T> & array )
{
    for ( unsigned int i = 0; i < array.size(); i++ ) {
        T value = array[i];
        out << value << ", ";
    }
    return out;
}

#endif