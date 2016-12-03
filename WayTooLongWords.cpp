#import <iostream>
#import <string.h>
#import <string>

using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  string currStr;

  cin >> n;

  for(int i = 0; i < n; i++){

    cin >> currStr;
    int strLen = currStr.length();

    if (strLen <= 10){
      cout << currStr << endl;
    }else{
      cout << currStr.substr(0,1) << (strLen-2)
        << currStr.substr(strLen-1) << endl;
    }
  }
  return 0;
}
