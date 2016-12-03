#import <iostream>
#import <string.h>
#import <string>
#include <algorithm>
#include <cctype>

using namespace std;
int main(int argc, char const *argv[]) {

  string input;
  string output;

  cin >> input;

  transform(input.begin(), input.end(), input.begin(), ::tolower);
  for(int i = 0; i < input.length(); i++){

    string temp = input.substr(i,1);

    if(temp == "y" || temp == "a" || temp == "e" || temp == "i" ||temp == "o" ||temp == "u"){
      temp = "";
    }else{
      temp = "." + temp;
    }

    output += temp;
  }

  cout << output << endl;

  return 0;
}
