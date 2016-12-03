#import <iostream>

int main(int argc, char const *argv[]) {

  int numPerticipants;
  int position;

  std::cin >> numPerticipants >> position;

  int scores[numPerticipants];

  for(int i = 0; i < numPerticipants; i++){
    std::cin >> scores[i];
  }

  int target = 0;

  for (int i = 0; i < numPerticipants; i++){

    if (scores[i] > 0 && scores[i] >= scores[position-1]){
        target++;
    }
  }
  std::cout << target << std::endl;
  
  return 0;
}
