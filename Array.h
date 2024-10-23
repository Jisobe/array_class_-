#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>
using namespace std;

class Array{

  private:
    int* data;
    int size;

  public:
    explicit Array(int size);
    Array(const Array& inputArray);
    ~Array();
    Array& operator=(const Array& inputArray);
    void Print(int size) const;
    int& operator[](size_t index);
    int& operator*();
};

#endif