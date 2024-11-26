#ifndef ARRAYTEMP_H
#define ARRAYTEMP_H

#include <cstddef>
#include <iostream>
using namespace std;

template <typename T1>
class Array{

  private:
    T1* data;
    int size;

  public:
    explicit Array(int size); //Constructor
    Array(const Array& inputArray); //Copy constructor
    ~Array(); //Destructor
    Array<T1>& operator=(const Array& inputArray); // Copy Assignment operator
    T1& operator[](size_t index) const; // subscript operator
    T1& operator*() const; // dereference operator
    void Print(int size) const; //Function to print array
};

// Member functions

// Constructor
template <typename T1>
Array<T1>::Array(int size) : size(size) {
  cout << "Constructor called for the array class" << endl << endl;
  data = new T1[size];
}

// Copy constructor
template <typename T1>
Array<T1>::Array(const Array& inputArray) : size(inputArray.size) {
  cout << "Copy constructor called for the array class" << endl << endl;
  data = new T1[size];
  for(int i = 0; i < size; i++){
    data[i] = inputArray.data[i];
  }
}

//Destructor
template <typename T1>
Array<T1>::~Array(){
  cout << "Destructing in the array class" << endl << endl;
  delete[] data;
  data = nullptr;
}

//Copy Assignment operator
template <typename T1>
Array<T1>& Array<T1>::operator=(const Array<T1>& inputArray){
  cout << "Copy assignment operator called for the array class" << endl << endl;
  if(this != &inputArray){
    size = inputArray.size;
    delete[] data;
    data = new T1[size];
    for(int i = 0; i < size; i++){
      data[i] = inputArray.data[i];
    }
  }

  return *this;
}

//subscript operator
template <typename T1>
T1& Array<T1>::operator[](size_t index) const{
  try{
    if(index >= size || index < 0){
      throw out_of_range("Index out of range");
    }
    return data[index];    
  }
  catch(out_of_range& expt){
    cout << expt.what() << endl;
    cout << "Attempted access outside of index range in Array class. Cannot complete operation" << endl;
  }

  return data[size-1];
}

// Dereference operator
template <typename T1>
T1& Array<T1>::operator*() const{
  cout << "dereferencing array" << endl;
  return *data;
}

//Function to print the array
template <typename T1>
void Array<T1>::Print(int size) const {
  cout << "Printing in the array class" << endl;
  try{
    if(size > this->size || size < 0){
      throw out_of_range("Index out of range");
    }
    for (int i = 0; i < size; i++){
      cout << data[i] << " ";
    }
    cout << endl << endl;

  }
  catch(out_of_range& expt){
    cout << expt.what() << endl;
    cout << "Attempted access outside of index range in Array class. Cannot complete operation" << endl;
  }
}


#endif
