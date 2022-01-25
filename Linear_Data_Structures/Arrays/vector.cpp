//
// Created by mladenk on 22.1.22..
//

#include "vector.h"

template<class T>
vector<T>::vector() {
    array = new T[DEFAULT_VECTOR_SIZE];
    length_of_array = DEFAULT_VECTOR_SIZE;
    number_of_elements = 0;
}

template<class T>
vector<T>::vector(std::size_t count) {
    array = new T[count];
    length_of_array = count;
    number_of_elements = 0;
}

template<class T>
vector<T>::~vector() {
    delete[] array;
}

template<class T>
T &vector<T>::operator[](std::size_t pos) {
    return array[pos];
}

template<class T>
bool vector<T>::empty() const {
    return number_of_elements == 0;
}

template<class T>
std::size_t vector<T>::size() const {
    return number_of_elements;
}

template<class T>
void vector<T>::reserve(std::size_t new_cap) {
    /**
     * If the new capacity is larger than the current reallocate, otherwise, do nothing.
     */
    if(new_cap > length_of_array){
        /**
         * Allocate the new array, copy over the old data, delete the old array and set the new array and length of the array.
         */
        T* new_array = new T[new_cap];
        for (int i = 0; i < number_of_elements; ++i) {
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
        length_of_array = new_cap;
    }
}

template<class T>
std::size_t vector<T>::capacity() const {
    return length_of_array;
}

/**
 * TODO: Can this be done like this? Is setting the tail to nullptr optimal?
 */
template<class T>
void vector<T>::clear() {
    number_of_elements = 0;
    tail = nullptr;
}

