//
// Created by mladenk on 22.1.22..
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H
#define DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H

#include <cstddef>

template<class T>
class vector {

public:
    /**
     * Checks whether the vector is empty or not.
     * @return  Returns true if it's empty and false otherwise.
     */
    bool empty() const;

    /**
     * Returns the number of elements.
     * @return Number of elements.
     */
    std::size_t size() const;

    /**
     * Sets the capacity to new_cap if new_cap is greater than current capacity, does nothing otherwise.
     * @param new_cap - New capacity of the vector.
     */
    void reserve(std::size_t new_cap);

    /**
     * Returns the number of elements that the vector has space for.
     * @return
     */
    std::size_t capacity() const;

};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H
