import random
import time
import sys

#Lists the variables.
choice = 0
optionlist = ("rock","paper","scissors")
option = random.choice(optionlist)
again = "yes"

#Start of the script.
print("Welcome to rock paper scissors.")
time.sleep(3)
#Loops over and over as long as the user wants to play.
while again == "yes":
    #Computer randomly picks an option and user picks an option.
    option = random.choice(optionlist)
    choice = input("What is your choice? \n(rock/paper/scissors) \n")
    print(f"I picked {option}.")
    time.sleep(3)
    #Compares the choices made and works out the winner.
    if choice == "rock":
        if option == "rock":
            print("It's a draw...")
        elif option == "paper":
            print("Yes, I win!")
        elif option == "scissors":
            print("There's always next time.")
    elif choice == "paper":
        if option == "rock":
            print("Which means you win...")
        elif option == "paper":
            print("Therefore we draw.")
        elif option == "scissors":
            print("I win!")
    elif choice == "scissors":
        if option == "rock":
            print("You lose!")
        elif option == "paper":
            print("You win...")
        elif option == "scissors":
            print("Hmm a draw.")
    time.sleep(4)
    #Asks the user if they want to play again.
    again = input("Would you like to go again? \n(yes/no) \n")
input("ok then, press enter to exit \n")
sys.exit()