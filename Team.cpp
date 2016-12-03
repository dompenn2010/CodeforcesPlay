#import<iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int numProblems;
  int team[3];
  int problemscore = 0;
  int workNum = 0;

  cin >> numProblems;

  for(int i = 0; i < numProblems; i++){

    for(int j = 0; j < 3; j++){
      cin >> team[j];
    }

    for(int j = 0; j < 3; j++){
      if(team[j] == 1) problemscore++;
    }
    if(problemscore >= 2) workNum++;
    problemscore = 0;
  }

  cout << workNum << endl;

  return 0;
}
