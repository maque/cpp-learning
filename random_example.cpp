#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
  srand(time(NULL));
  cout << "RAND_MAX is " << RAND_MAX << endl;
  cout << "Random(1-10): " << rand()%10+1 << endl;
  return 0;
}
