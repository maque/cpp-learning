#include <iostream>
using namespace std;
int main(){
  float floatNumber = 2.5;
  int intNumber = floatNumber; //will cast down

  cout << "Float is: " << floatNumber << endl;
  cout << "Int is: " << intNumber << endl;

  int multiplicationCasting = 2.5 * 1.5; // 3.5 will be casted to 3
  cout << "Multiplication " << multiplicationCasting << endl;
  multiplicationCasting = (int)(2.5) * 2; // will be casted to 4
  cout << "Multiplication " << multiplicationCasting << endl;
  multiplicationCasting = static_cast<int>(2.5 * 2); // will be casted to 5
  cout << "Multiplication " << multiplicationCasting << endl;


  return 0;
}
