#include <iostream>

using namespace std;

int main() {
  const float pi=3.14315926536;
  float r;
  float h;
  float Area;
  float Round;
  float Cylinder;

  cout<< "Please enter redius : ";
  cin >> r;
  Area=pi*r*r;
  cout<< "Area of Circle : "<< Area<<endl;
  Round=2*pi*r;
  cout<< "Roond of Circle : "<< Round<<endl;

  cout<< "Piease enter hight : ";
  cin>> h;
  Cylinder=pi*r*r*h;
  cout<< "Area of Cylinder : "<< Cylinder<<endl;
  return 0;
}
