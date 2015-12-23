#include <iostream>
#include <math.h>
#include <cstdio>
#include <string>
using namespace std;

typedef unsigned int UINT;

void printType(string name, UINT size, bool isUnsigned){
  if(isUnsigned){
    printf( "%s size: %d bytes, values from 0 to %.f\n", name, size, pow(2,(size*8)));
  } else {

    printf( "%s size: %d bytes, values from %.f to %.f\n", name, size, -pow(2,(size*8))/2, pow(2,(size*8))/2 - 1 );

  }

}

int main(){
  std::cout << "Num types signed:" << std::endl;
  printType("singed char", sizeof(signed char), false); //by default all are signed so char
  printType("singed short", sizeof(signed short), false); //short
  printType("singed int", sizeof(signed int), false); //int
  printType("long", sizeof(long), false); //long
  printType("long long", sizeof(long long), false); //long

  //unsigned long int === unsigned long



  return 0;
}
