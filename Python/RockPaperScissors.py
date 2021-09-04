import random
import time
import sys

class RockPaperScissors:
    """
    A class which stores the code for a game of rock paper scissors.
    The game is ran for as long as the user wants to play.

    Class Variables:
        OPTION_LIST = Stores a list of possible options the computer 
                      can pick.

    Methods:
        __init__ = Defines the initial variables of the game.

        run = Runs the main code for the game.

        get_valid_user_choice = Asks the player for a choice and checks 
                                to see if it is valid or not.
        
        determine_winner = Uses if statements to determine the winner 
                           of the game.
    """
    OPTION_LIST = ["rock", "paper", "scissors"]



    def __init__(self):
        """
        Defines the inital variables of the game.

        Variables:
            self.user_choice = Stores the choice the user makes.

            self.computer_choice = Stores the choice the computer makes.

            self.play_again = Stores whether the user wants to play again.
        """
        self.user_choice = None
        self.computer_choice = None
        self.play_again = "yes"



    def run(self):
        """
        Used to run the game.
        Game keeps running until the user decides to stop.
        """
        print("Welcome to rock paper scissors.")
        time.sleep(2)
        
        # Loop over for as long as the user wants to play.
        while self.play_again == "yes":
            # Computer picks a choice at random.
            self.computer_choice = random.choice(RockPaperScissors.OPTION_LIST)

            # Check whether the user made a valid choice or not.
            self.get_valid_user_choice()
            print(f"I picked {self.computer_choice}")
            time.sleep(2)

            #Compares the choices made and works out the winner.
            self.determine_winner()
            time.sleep(2)
            #Asks the user if they want to play again.
            self.play_again = input("Would you like to go again? \n(yes/no) \n")

        input("ok then, press enter to exit \n")
        sys.exit()
    


    def get_valid_user_choice(self):
        """
        Asks the user for a choice and performs while loop to see 
        if the choice is valid or not.

        Variables:
            valid_choice = Stores whether the user made a valid 
                           choice.
        """
        valid_choice = False
        while valid_choice == False:
            self.user_choice = input("What is your choice? \n(rock/paper/scissors) \n")
            if self.user_choice in RockPaperScissors.OPTION_LIST:
                valid_choice = True
            else:
                print("Invalid choice selected, try again.")
    


    def determine_winner(self):
        """
        Uses if statements to determine who won the game.
        Compares the choices and uses the rules of rock paper scissors 
        to determine the winner.
        """
        if self.user_choice == "rock":
            if self.computer_choice == "rock":
                print("It's a draw...")
            elif self.computer_choice == "paper":
                print("Yes, I win!")
            elif self.computer_choice == "scissors":
                print("There's always next time.")
        elif self.user_choice == "paper":
            if self.computer_choice == "rock":
                print("Which means you win...")
            elif self.computer_choice == "paper":
                print("Therefore we draw.")
            elif self.computer_choice == "scissors":
                print("I win!")
        elif self.user_choice == "scissors":
            if self.computer_choice == "rock":
                print("You lose!")
            elif self.computer_choice == "paper":
                print("You win...")
            elif self.computer_choice == "scissors":
                print("Hmm a draw.")



if __name__ == "__main__":
    rps = RockPaperScissors()
    rps.run()