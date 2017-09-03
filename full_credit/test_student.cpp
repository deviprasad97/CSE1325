#include <iostream>
using namespace std;
#include "student.cpp"
int main(){
  Student student{"Bjarne Stroustrup"};
  student.exam(100.0);
  student.exam(90.0);
  student.exam(80.0);
  student.name();
  student.average();
  return 0;
}

