#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
  Student nada{"Bjarne Stroustrup"};
  nada.exam(100.0);
  nada.exam(90.0);
  nada.exam(80.0);
  nada.name();
  nada.average();
  return 0;
}

