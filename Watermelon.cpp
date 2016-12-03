#import <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  cin >> n;
  bool positive = false;

  if (n % 2 == 0){
    for (int i = 0; i < n; i+=2) {
      for (int j = 0; j < n; j+=2) {
        if (i+j == n){
          cout << "YES" << endl;
          positive = true;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;

  return 0;
}
