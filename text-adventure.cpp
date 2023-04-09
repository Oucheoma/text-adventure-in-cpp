#include <iostream>

int main(){

  int answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9;


  std::cout << "=========================\n";
  std::cout << "Welcome to New Orleans \n";
  std::cout << "=========================\n";


  std::cout << "Home to Vampires, Witches and Werewolves. But now the town is in disarray, every faction wants to be king, but who will actually win?? \n";

  std::cout << "Choose a number to start this journey \n";
  std::cout << "1. \n";
  std::cout << "2. \n";
  std::cout << "3. \n";

  std::cin >> answer1;

  if (answer1 == 1){
    std::cout << "You are a Witch \n";

    std::cout << "Here's a little back story, witches are connected to their ancestor, every ancestor is buried in New Orleans. Since they are strong with the energy of their buried ancestors, leaving isn't an option for them. \n ";

    std::cout << "Choose your next step \n";

    std::cout << "1) Lay low and do nothing \n ";
    std::cout << "2) Stay and Fight \n";

    std::cin >> answer2;

      if (answer2 == 1){
        std::cout << "The fight wasn't yours to fight anyway. The Witches lose \n";
      } else if (answer2 == 2){
        std::cout << "Choosing to fight requires bravery, but it takes more than that to win this war \n";

        std::cout << "Fight alone or with your community \n";
        std::cout << "1) Fight alone \n";
        std::cout << "2) Fight with community \n";

        std::cin >> answer3;

            if (answer3 == 1){
              std::cout << "Sadly, you are caught casting your first spell and killed on sight \n";
            } else if (answer3 == 2){
              std::cout << "You seem to be the only believer here, all other members left New Orleans. Sadly the fight was lost before it even started, The Witches lose. \n";
            } else {
              std::cout << "Pick a valid option \n";
            }
      }else{
        std::cout << "Pick a Valid option \n";
      }





  } else if (answer1 == 2){
    std::cout << "You are a Vampire \n";

    std::cout << "Here's a little back story, New Orleans has been home to the original Vampires, so the vampire believe it's their right to rule, Join in the fight to reclaim New Orleans. \n ";

    std::cout << "Choose your next step \n";

    std::cout << "1) Lay low and do nothing \n ";
    std::cout << "2) Stay and Fight \n";

    std::cin >> answer4;

      if (answer4 == 1){
        std::cout << "The fight wasn't yours to fight anyway. The Vampires lose \n";
      } else if (answer4 == 2){
        std::cout << "You've choosen to fight \n";

        std::cout << "Pick an option \n";
        std::cout << "1) Attack the Witches \n";
        std::cout << "2) Ask the Originals for help \n";

        std::cin >> answer5;

            if (answer5 == 1){
              std::cout << "Unfortunately, it takes an army to defeat the witches \n";
            } else if (answer5 == 2){
              std::cout << "You have Klaus attention but Elijah his brother thinks it's a bad ideas \n";

              std::cout << "Proceed with Klaus's help or decline his offer \n";

              std::cout << "1) Decline \n";
              std::cout << "2) Proceed \n";

              std::cin >> answer6;

               if (answer6 == 1){
                 std::cout << "Klaus thinks you're a problem, so he kills you by reaping your heart out \n";
               } else if (answer6 == 2){
                 std::cout << "The goodnews is New Orleans now belongs to the Vampires \n";
                 std::cout << "Bad news, you were killed on the battle ground \n";
               } else{
                 std::cout << "Pick a valid option \n";
               }

            } else {
              std::cout << "Pick a valid option \n";
            }
      }else{
        std::cout << "Pick a Valid option \n";
      }




} else if (answer1 == 3){
    std::cout << "You are a Werewolf \n";

    std::cout << "Here's a little back story, The werewolves have been quiet all this time, but now they want to break their silence. Plus they believe to have a fighting chance with a new player, Hailey \n ";

    std::cout << "Choose your next step \n";

    std::cout << "1) Lay low and do nothing \n ";
    std::cout << "2) Stay and Fight \n";

    std::cin >> answer7;

      if (answer7 == 1){
        std::cout << "The fight wasn't yours to fight anyway. The Witches lose \n";
      } else if (answer7 == 2){
        std::cout << "Choosing to fight requires bravery, but it takes more than that to win this war \n";

        std::cout << "To win you need the help of one of these two \n";
        std::cout << "1) Hailey's support \n";
        std::cout << "2) The community's support \n";

        std::cin >> answer8;

            if (answer8 == 1){
              std::cout << "Hailey wants to fight, but it's a bit tricky for her. Being with child for Klaus doesn't make the decision easy. She nexts more convincing. \n";

              std::cout << "How do you convince Hailey \n";

              std::cout << "1) Seek help from your community \n";
              std::cout << "2) Fight alone \n"; 
                
              std::cin >> answer9;

               if (answer9 == 1){
                 std::cout << "You have the support of the community and hailey. \n";
                 std::cout << "Hailey was able to broke a deal with Klaus, a truce where both the Vampires and Werewolves live in harmony \n";
                 std::cout << "Klaus is on board for the sake of his unborn child. The Vampire and Werewolves now live in peace \n";
               } else if (answer9 == 2){
                 std::cout << "The fight wasn't yours to fight anyway. You die, but Hailey brokers a truce between the Vampire and Werewolves, so you're the only werewolve to die \n";
               } else{
                 std::cout << "Pick a Valid option \n";
               }
            } else if (answer8 == 2){
              std::cout << "The community are only onborad if Hailey agrees. \n";
              std::cout << "You have the support of the community and hailey. \n";
                 std::cout << "Hailey was able to broke a deal with Klaus, a truce where both the Vampires and Werewolves live in harmony \n";
                 std::cout << "Klaus is on board for the sake of his unborn child. The Vampire and Werewolves now live in peace \n";
            } else {
              std::cout << "Pick a valid option \n";
            }
      }else{
        std::cout << "Pick a Valid option \n";
      }


  } else{
    std::cout << "Pick a valid option \n";
  }



  
}
