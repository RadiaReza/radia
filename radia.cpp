#include<iostream>
using namespace std;
class Employee {
  public:
    string Name = "Radia";
    void address() {
      cout << "Mirpur"<<endl ;
    }
};

class bank: public Employee {
  public:
    string site = "Myshop";
};

int main() {
  bank myinfo;
  myinfo.address();
  cout << myinfo.Name + " " + myinfo.site<<endl;
  return 0;
}



