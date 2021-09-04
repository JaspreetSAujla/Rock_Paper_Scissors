package Java;

import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class RockPaperScissors {
    /**
    A class which stores the code for a game of rock paper scissors.
    The game is ran for as long as the user wants to play.

    Class Variables:
        OPTION_LIST = Stores a list of possible options the computer 
                      can pick.

    Methods:
        RockPaperScissors = Defines the initial variables of the game.

        run = Runs the main code for the game.

        getValidUserChoice = Asks the player for a choice and checks 
                             to see if it is valid or not.
        
        determineWinner = Uses if statements to determine the winner 
                          of the game.
        
        main = Runs the file.
    */
    private List<String> OPTION_LIST = Arrays.asList("rock", "paper", "scissors");
    private String userChoice;
    private String computerChoice;
    private String playAgain;
    private Random randomIndex = new Random();
    private Scanner scn = new Scanner(System.in);
    
    

    RockPaperScissors() {
        /**
        Constructor for the class.
        Sets the value for the play again variable.
        */
        this.playAgain = "yes";
    }



    public void run() {
        /**
        Used to run the game.
        Game keeps running until the user decides to stop.
        */
        System.out.println("Welcome to Rock Paper Scissors!");

        // Loop over for as long as the user wants to play.
        while (this.playAgain.equals("yes")) {
            // Computer picks a choice at random.
            this.computerChoice = OPTION_LIST.get(randomIndex.nextInt(3));

            // Ask user for a choice, and check if valid or not.
            getValidUserChoice();
            System.out.println("I picked " + this.computerChoice + ".");

            // Compares the choices made, and works out the winner.
            determineWinner();
            // Ask the user if they want to play again.
            System.out.println("Would you like to play again? \r\n(yes/no)");
            this.playAgain = scn.nextLine();
        }
        scn.close();
    }



    private void getValidUserChoice() {
        /**
        Asks the user for a choice and performs while loop to see 
        if the choice is valid or not.

        Variables:
            validChoice = Stores whether the user made a valid 
                          choice.
        */
        Boolean validChoice = false;
        while (validChoice == false) {
            System.out.println("What is your choice? \r\n(rock/paper/scissors)");
            this.userChoice = scn.nextLine();
            if (OPTION_LIST.contains(this.userChoice)) {
                validChoice = true;
            } else {
                System.out.println("Invalid choice, try again.");
            }
        }
    }



    private void determineWinner() {
        /**
        Uses if statements to determine who won the game.
        Compares the choices and uses the rules of rock paper scissors 
        to determine the winner.
        */
        if (this.userChoice.equals("rock")) {
            if (this.computerChoice.equals("rock")) {
                System.out.println("It's a draw.");
            } else if (this.computerChoice.equals("paper")) {
                System.out.println("I win!");
            } else if (this.computerChoice.equals("scissors")) {
                System.out.println("There's always next time...");
            }
        } else if (this.userChoice.equals("paper")) {
            if (this.computerChoice.equals("paper")) {
                System.out.println("It's a draw.");
            } else if (this.computerChoice.equals("scissors")) {
                System.out.println("I win!");
            } else if (this.computerChoice.equals("rock")) {
                System.out.println("There's always next time...");
            }
        } else if (this.userChoice.equals("scissors")) {
            if (this.computerChoice.equals("scissors")) {
                System.out.println("It's a draw.");
            } else if (this.computerChoice.equals("rock")) {
                System.out.println("I win!");
            } else if (this.computerChoice.equals("paper")) {
                System.out.println("There's always next time...");
            }
        }
    }



    public static void main(String[] args) {
        RockPaperScissors rps = new RockPaperScissors();
        rps.run();
    }
}