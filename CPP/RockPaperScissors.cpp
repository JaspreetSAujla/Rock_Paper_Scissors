#include<iostream>
#include<cstdlib>
#include<ctime>
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
                if (OPTION_LIST.)
            }
        }
};



int main() {

}