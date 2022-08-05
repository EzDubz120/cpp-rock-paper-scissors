#include <cstdlib>
#include <ctime>
#include <iostream>


using namespace std;

int main()
{
        srand((unsigned) time(0));
      int computer;
      for (int index = 0; index < 5; index++) {
        computer = (rand() % 3) + 1;
      }

    string select;
    cout << "This program is a command line rock, paper, scissors game against the computer:" << endl;
    cout << "Choose between rock, paper or scissors:" << endl;
    getline(cin, select);

    if(select == "rock" && computer == 1 ) {
        cout << "The computer chose rock so you drew!" << endl;
    }

     else if(select == "rock" && computer == 2 ) {
        cout << "The computer chose paper so you lose!" << endl;
    }

    else if(select == "rock" && computer == 3 ) {
        cout << "The computer chose scissors so you win!" << endl;
    }



    else if(select == "paper" && computer == 2 ) {
        cout << "The computer chose paper so you drew!" << endl;
    }

    else if(select == "paper" && computer == 1 ) {
        cout << "The computer chose rock so you win!" << endl;
    }

    else if(select == "paper" && computer == 3 ) {
        cout << "The computer chose scissors so you lose!" << endl;
    }


    else if(select == "scissors" && computer == 3 ) {
        cout << "The computer chose scissors so you drew!" << endl;
    }

    else if(select == "scissors" && computer == 2 ) {
        cout << "The computer chose paper so you win!" << endl;
    }

    else if(select == "scissors" && computer == 1 ) {
        cout << "The computer chose rock so you lose!" << endl;
    }

    return 0;
}
