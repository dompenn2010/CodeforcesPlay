#import <iostream>
#import <string>
#import <string.h>

using namespace std;

int main(int argc, char const *argv[]) {

  int x = 0;
  int n;
  cin >> n;
  string s;
  size_t f;

  for (int i = 0; i < n; i++){
    cin >> s;

    f = s.find("++");

    if (f != string::npos){
      x++;
    }else {
        f = s.find("--");
        x--;
    }
  }

  cout << x << endl;

  return 0;
}
