#include <array.hh>
#include <vector.hh>
#include <iostream>

int main()
{
    //
    // ARRAY
    //
    Structures::Array<int, 5> array;

    for (int i = 0; i < 5; ++i)
        array[i] = i + 42;
    for (int i = 0; i < 5; ++i)
        std::cout << array[i] << std::endl;
    std::cout << "back: " << array.back() << std::endl;
    std::cout << "front: " << array.front() << std::endl;


    //
    // VECTOR
    //
    Structures::Vector<int> vector;
    for (int i = 0; i < 42; ++i)
        vector[i] = i;
    for (int i = 0; i < 42; ++i)
        std::cout << vector[i] << std::endl;
}
