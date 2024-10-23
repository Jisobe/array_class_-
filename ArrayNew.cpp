#include "ArrayNew.h"
#include <memory>
#include <iostream>
#include <cstddef>
using namespace std;

ArrayNew::ArrayNew(int size) : size(size) {
  cout << "Constructor called for the ArrayNew class" << endl << endl;
  data = make_unique<int[]>(size);
}

ArrayNew::ArrayNew(const ArrayNew& inputArray) : size(inputArray.size) {
  cout << "Copy constructor called for the ArrayNew class" << endl << endl;

  data =  make_unique<int[]>(size);

  for(int i = 0; i < size; i++){
    data[i] = inputArray.data[i];
  }

}

ArrayNew& ArrayNew::operator=(const ArrayNew& inputArray){
  cout << "Copy assignment operator called for the arrayNew class" << endl << endl;
  size = inputArray.size;
  for(int i = 0; i < size; i++){
    data[i] = inputArray.data[i];
  }

  return *this;
}

void ArrayNew::Print(int size) const {
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
    cout << "Attemtped access outside of index range in ArrayNew class. Cannot complete operation" << endl;
  }
}

int& ArrayNew::operator[](size_t index){
  try{
    if(index >= size || index < 0){
      throw out_of_range("Index out of range");
    }
    return data[index];
  }
  catch(out_of_range& expt){
    cout << expt.what() << endl;
    cout << "Attemtped access outside of index range in ArrayNew class. Cannot complete operation" << endl;
  }

  return data[size-1];
}

int& ArrayNew::operator*(){
  cout << "dereferencing arrayNew" << endl;
  return data[0];
}