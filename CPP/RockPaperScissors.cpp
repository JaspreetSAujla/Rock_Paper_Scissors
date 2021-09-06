#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

class RockPaperScissors {
    /*
    A class which stores the code for a game of rock paper scissors.
    The game is ran for as long as the user wants to play.

    Methods:
        RockPaperScissors = Defines the initial variables of the game.

        run = Runs the main code for the game.

        getValidUserChoice = Asks the player for a choice and checks 
                             to see if it is valid or not.
        
        determineWinner = Uses if statements to determine the winner 
                          of the game.
        
        randomNumber = Returns a random number within a given range.
    */
    public:
        RockPaperScissors() 
        : playAgain("yes") {}



        void run() {
            /*
            Used to run the game.
            Game keeps running until the user decides to stop.
            */
            cout << "Welcome to Rock Paper Scissors!" << endl;

            // Loop over for as long as the user wants to play.
            while (playAgain == "yes") {
                // Computer picks choice at random.
                computerChoice = OPTION_LIST[randomNumber(0, 3)];

                // Ask user for a choice and check if valid or not.
                getValidUserChoice();
                cout << "I picked " << computerChoice << "." << endl;

                // Compares the choices made and works out the winner.
                determineWinner();
                // Ask the user if they want to play again.
                cout << "Would you like to play again? \n(yes/no)" << endl;
                cin >> playAgain;
            }
        }



    private:
        string OPTION_LIST[3] = {"rock", "paper", "scissors"};
        string playAgain;
        string userChoice;
        string computerChoice;



        int randomNumber(int startNumber, int endNumber) {
            /*
            Takes a start number and an end number and picks 
            a random number between that range.
            endNumber is EXCLUSIVE, similar to python range function.
            */
            srand(time(0));
            int number = startNumber + (rand() % endNumber);
            return number;
        }



        void getValidUserChoice() {
            /*
            Asks the user for a choice and performs while loop to see 
            if the choice is valid or not.

            Variables:
                validChoice = Stores whether the user made a valid 
                              choice.
            */
            bool validChoice = false;
            while (validChoice == false) {
                cout << "What is your choice? \n(rock/paper/scissors)" << endl;
                cin >> userChoice;
                if (std::find(std::begin(OPTION_LIST), std::end(OPTION_LIST), userChoice) != std::end(OPTION_LIST)) {
                    validChoice = true;
                } else {
                    cout << "Invalid choice, try again." << endl;
                }
            }
        }



        void determineWinner() {
            /*
            Uses if statements to determine who won the game.
            Compares the choices and uses the rules of rock paper scissors 
            to determine the winner.
            */
            if (userChoice == "rock") {
                if (computerChoice == "rock") {
                    cout << "It's a draw." << endl;
                } else if (computerChoice == "paper") {
                    cout << "I win!" << endl;
                } else if (computerChoice == "scissors") {
                    cout << "There's always next time..." << endl;
                }
            } else if (userChoice == "paper") {
                if (computerChoice == "paper") {
                    cout << "It's a draw." << endl;
                } else if (computerChoice == "scissors") {
                    cout << "I win!" << endl;
                } else if (computerChoice == "rock") {
                    cout << "There's always next time..." << endl;
                }
            } else if (userChoice == "scissors") {
                if (computerChoice == "scissors") {
                    cout << "It's a draw." << endl;
                } else if (computerChoice == "rock") {
                    cout << "I win!" << endl;
                } else if (computerChoice == "paper") {
                    cout << "There's always next time..." << endl;
                }
            }
        }
};



int main() {
    RockPaperScissors rps;
    rps.run();
    return 0;
}