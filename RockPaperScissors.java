import java.util.Random;
import java.util.Scanner;

class RPS {
    public static void main(String[] args) {
        String choice;
        String[] optionList = {"rock", "paper", "scissors"};
        Scanner scn = new Scanner(System.in);
        String option;
        Random randIndex = new Random();
        String again = "yes";

        System.out.println("Welcome to rock paper scissors.");
        while (again.equals("yes")) {
            option = optionList[randIndex.nextInt(3)];
            System.out.println("What is your choice? \r\n(rock/paper/scissors)");
            choice = scn.nextLine();
            System.out.println("I picked " + option + ".");
            if (choice.equals("rock")) {
                if (option.equals("rock")) {
                    System.out.println("It's a draw.");
                } else if (option.equals("paper")) {
                    System.out.println("I win!");
                } else if (option.equals("scissors")) {
                    System.out.println("There's always next time...");
                }
            } else if (choice.equals("paper")) {
                if (option.equals("paper")) {
                    System.out.println("It's a draw.");
                } else if (option.equals("scissors")) {
                    System.out.println("I win!");
                } else if (option.equals("rock")) {
                    System.out.println("There's always next time...");
                }
            } else if (choice.equals("scissors")) {
                if (option.equals("scissors")) {
                    System.out.println("It's a draw.");
                } else if (option.equals("rock")) {
                    System.out.println("I win!");
                } else if (option.equals("paper")) {
                    System.out.println("There's always next time...");
                }
            }
            System.out.println("Would you like to play again? \r\n(yes/no)");
            again = scn.nextLine();
        }
        scn.close();
    }
}