#include "Array.h"
#include <iostream>
#include <cstddef>
using namespace std;

Array::Array(int size) : size(size) {
  cout << "Constructor called for the array class" << endl << endl;
  data = new int[size];
}

Array::Array(const Array& inputArray) : size(inputArray.size) {
  cout << "Copy constructor called for the array class" << endl << endl;
  data = new int[size];
  for(int i = 0; i < size; i++){
    data[i] = inputArray.data[i];
  }
}

Array::~Array(){
  cout << "Destructing in the array class" << endl << endl;
  delete[] data;
  data = nullptr;
}

Array& Array::operator=(const Array& inputArray){
  cout << "Copy assignment operator called for the array class" << endl << endl;
  size = inputArray.size;
  for(int i = 0; i < size; i++){
    data[i] = inputArray.data[i];
  }

  return *this;
}

void Array::Print(int size) const {
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

int& Array::operator[](size_t index){
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

int& Array::operator*(){
  cout << "dereferencing array" << endl;
  return *data;
}