//
// Created by mladenk on 22.1.22..
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H
#define DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H

#include <cstddef>

#define DEFAULT_VECTOR_SIZE 10

template<class T>
class vector {
public:
    /**
     * The default constructor, constructs an empty vector of size DEFAULT_VECTOR_SIZE.
     */
    vector();

    /**
     * Constructs an empty vector of size count.
     * @param count - The size of the empty vector.
     */
    vector(std::size_t count);

    /**
     * Destructs the vector.
     */
    ~vector();

    /**
     * Returns a reference to the element at the specified location pos.
     * @param pos - Location of the element to return.
     * @return Reference to the requested element.
     */
    T& operator[](std::size_t pos);

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
     * @return The number of elements that can fit into the vector.
     */
    std::size_t capacity() const;

    /**
     * Clears the contents of the vector.
     */
    void clear();

    /**
     * Insert the element at position before pos.
     * @param pos - the position before which the element will be inserted.
     */
    void insert(std::size_t pos);

    /**
     * Erases the element
     * @param pos - The position of the element ot be erased.
     */
    void erase(std::size_t pos);

    /**
     * Push the value to the back of the vector.
     * @param value - The value to be pushed back.
     */
    void push_back(const T& value);

    /**
     * Erase the value off the end of the vector.
     */
    void pop_back();
};


#endif //DATA_STRUCTURES_AND_ALGORITHMS_CPP_VECTOR_H
