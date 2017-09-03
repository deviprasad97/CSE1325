#include<iostream>
using namespace std;
#include "student.cpp"
int main(){
  string name;
  short int ctr=0;
  double grade;
  cout<<"Enter your name: ";
  getline(cin, name);
  Student student{name};
  do{
    cout<<"Enter "<<ctr+1<<" grade: ";
    cin>>grade;
    ctr++;
    if(grade>0){
      student.exam(grade);
    }
  }while(grade>0);
  cout<<student.name()<<" has an average of "<<student.average()<<"\n";
}
