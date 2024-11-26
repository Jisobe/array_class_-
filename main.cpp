// #include "Array.h"
// #include "ArrayNew.h"
#include "ArrayTemplate.h"
#include <iostream>

using namespace std;

int main(){

  // ________Array class_________

  // cout << "____arr1____" << endl;
  // Array arr1(5);

  // arr1[0] = 1;
  // arr1[1] = 2;
  // arr1[2] = 3;
  // arr1[3] = 4;
  // arr1[4] = 5;

  // cout << "____arr2____" << endl;
  // Array arr2(5);

  // arr2[0] = 6;
  // arr2[1] = 7;
  // arr2[2] = 8;
  // arr2[3] = 9;
  // arr2[4] = 10;

  // cout << "____arr1____" << endl;
  // cout << *arr1 << endl;
  // arr1.Print(5);
  
  // cout << "____Array array1Copy = arr1____" << endl;
  // Array array1Copy = arr1;
  // cout << "Print array1Copy called" << endl;
  // array1Copy.Print(5);

  // cout << "____arr1 = arr2____" << endl;
  // arr1 = arr2;
  // cout << "____arr1____" << endl;
  // cout << *arr1 << endl;
  // arr1.Print(5);
  
  // // _________ArrayNew Class___________

  // cout << "____arrNew1____" << endl << endl;
  // ArrayNew arrNew1(5);

  // arrNew1[0] = 6;
  // arrNew1[1] = 7;
  // arrNew1[2] = 8;
  // arrNew1[3] = 9;
  // arrNew1[4] = 10;

  // ArrayNew arrNew2(5);

  // arrNew1[0] = 1;
  // arrNew1[1] = 2;
  // arrNew1[2] = 3;
  // arrNew1[3] = 4;
  // arrNew1[4] = 5;

  // arrNew1.Print(5);

  // cout << "____arrayNew2 Copy constructor____" << endl << endl;
  // ArrayNew arrayNew1Copy = arrNew1;
  // arrayNew1Copy.Print(5);
  // cout << *arrNew1 << endl;

  // cout << "____arrayNew2 Copy assignment operator____" << endl << endl;
  // arrNew1 = arrNew2;
  // arrNew1.Print(5);
  // cout << *arrNew1 << endl;

  //______________Array Template______________
    cout << "____arr1____" << endl;
  Array<int> arr1(5);

  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;

  cout << "____arr2____" << endl;
  Array<int> arr2(3);

  arr2[0] = 7;
  arr2[1] = 8;
  arr2[2] = 9;

  cout << "____arr1____" << endl;
  cout << *arr1 << endl;
  arr1.Print(5);
  
  cout << "____Array array1Copy = arr1____" << endl;
  Array array1Copy = arr1;
  cout << "Print array1Copy called" << endl;
  array1Copy.Print(5);

  cout << "____arr1 = arr2____" << endl;
  arr1 = arr2;
  cout << "____arr1____" << endl;
  cout << *arr1 << endl;
  arr1.Print(3);

  return 0;
}