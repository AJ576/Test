#include <iostream>
using namespace std;

int main() {

  int numCats;
  int *p = &numCats;
  int pp = *p;
  while(true){
    cout<< p<<" "<<pp<<" "<<numCats<<endl;
  }
  //cout<< p<<" "<<pp<<" "<<numCats<<endl;

  // cout << "Hello World!\n";
  // cout << "What is the number of cat thou demands?" << endl;
  // // cin >>  numCats;
  // cout << "Thou haveth " << numCats << "  cats" << endl;
  // int *p = &numCats;
  // int **c = &p;
  // cout << "p is " << p << " c is " << c << endl;

  // while (cin >> numCats) {
  //   cout << "You have " << numCats << " cats now" << endl;
  //   int *p = &numCats;
  //   int **c = &p;
  //   cout << "p is " << p << " c is " << c << endl;
  //   cout << "p is " << p << " c is " << c << " value of c is " << *c << endl;

  //   if (numCats >= 100) {
  //     cout << "You have more than enough cats now. No more for you!" << endl;
  //     break;
  //   }
  // }

  return 0;
}