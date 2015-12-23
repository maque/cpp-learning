#include <string>
#include <iostream>
#include <cstdio>

using namespace std;
int main(){
  string inside="";
  string asci = "asci" + inside + "text";

  inside.length();
  inside[0]; //char at 0 'c'

  wstring unicode=L"zażł";
  cout << asci << endl;
//  printf ("%s",unicode);
  asci="łą";
  cout << asci << endl;

int from=2;
int howMany = 4;
string test("Test it much", from, howMany);
cout << test << endl;

  return 0;
}
