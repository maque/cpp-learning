#include <iostream>

using namespace std;

void HelloWorld(){
  cout << "Hello World!" << endl;
}

void staticVariableExmaple(){
  static int counter = 1;
  cout << "This method was called " << counter++ << " times" << endl;
}

int topVar = 0;
void localVariablesExample(){
  int topVar = 1;
  if(true){
    int topVar = 2;
    cout << "Local var in if is: " << topVar << endl;
  }
  cout << "Local var out if is: " << topVar << endl;
  cout << "Global var is: " << ::topVar << endl;
}

void loopsForExample(){
  //Same loops
  for(int i=0;i<2;i++){
    cout << "Full for Loop, i: " << i << endl;
  }
  int i =0;
  for(;i<2;i++){
    cout << "No init for Loop, i: " << i << endl;
  }
  i = 0;
  for(;i<2;){
    cout << "No init, no change Loop, i: " << i++ << endl;
  }
  i = 0;
  for(;;){
    cout << "For infinite Loop, i: " << i++ << endl;
    if(i>2){
      break;
    }
  }
  //i was incremented in last loop and it's 3 now
  int k = 0;
  for(;k<2;i++,k++){
    cout << "For Loop with double change, i: " << i << " k: " << k << endl;
  }
}

int main(){
  HelloWorld();

  staticVariableExmaple();
  staticVariableExmaple();

  localVariablesExample();

  loopsForExample();
  return 0;
}
