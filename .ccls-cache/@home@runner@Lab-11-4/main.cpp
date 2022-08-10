#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int x;
  string word;
  cout<<"Enter a word : "<<endl;
  cin>>word;
  cout<<"The string length is : "<<word.length()<<endl;
  int neword = word.length()*2;
  cout<<"The string length *2 is : "<<setw(word.length()*2)<<right<<neword<<endl;
  return 0;
}