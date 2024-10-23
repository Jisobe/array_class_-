#ifndef ARRAYNEW_H
#define ARRAYNEW_H
#include <memory>
#include <cstddef>
using namespace std;

class ArrayNew{

  private:
    unique_ptr<int[]> data;
    int size;

  public:
    explicit ArrayNew(int size);
    ArrayNew(const ArrayNew& inputArray);
    ArrayNew& operator=(const ArrayNew& inputArray);
    void Print(int size) const;
    int& operator[](size_t index);
    int& operator*();
};   

#endif