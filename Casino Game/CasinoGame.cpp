#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
The program asks for a betting amount and then asks the user to guess a number on rolling. 
If the random number generated matches the user input, he wins, else money is deducted. 
The user can keep playing until he loses all the amount he put in initially.
*/

void rules(string name, int total)
{
    system("cls");
    cout << "Welcome to Casino World " << name << ", your starting balance is $" << total << endl;
    cout << "\t==========CASINO NUMBER GUESSING RULES!=========\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n";
    cout << "\t4. $2 is deducted per round to the house\n";
    cout << "\t5. 4 consecutive fails amounts to a $20 fine\n";
    cout << "\t6. 3 consecutive wins resets the whole game\n";
    cout << "\t===========Goodluck Player!=============\n";
}

int randomizer(int max) {
    return rand() % max + 1;
}

int main()
{
    srand(time(0));
    int bet, guess, house_fee = 2, chances = 0, wins = 0, dice = 0;
    int balance = randomizer(100);
    string name;

    cout << "\n=============WELCOME TO CASINO WORLD!!!============\n\n";
    cout << "\tWhat is your name: ";
    cin >> name;
    rules(name, balance);

    while (chances <= 3) {
        dice = randomizer(10);
        if (wins < 3) {
            cout << "To begin, please place the amount you wish to bet: ";
            cin >> bet;
            if ((balance - house_fee) > bet > 0) {
                balance -= house_fee;
                cout << "Guess the number rolled on the dice from 1 to 10: ";
                cin >> guess;
                chances += 1;
                if (guess == dice) {
                    balance += (bet * 10);
                    wins += 1;
                    cout << "Congratulations! You won the bet!\n";
                    cout << "Your current balance is: " << balance << endl;
                    cout << "Total wins: " << wins << endl;
                    cout << "Chances: " << chances << endl;
                }
                else {
                    balance -= bet;
                    cout << "You lose... Better luck next time. \nThe dice rolled was: " << dice << endl;
                    cout << "Your current balance is: " << balance << endl;
                    cout << "Total wins: " << wins << endl;
                    cout << "Chances: " << chances << endl;
                }
            }
        }
        else {
            cout << "You won this round " << name << "!\n";
            cout << "Total Winnings: " << balance << endl;
            return 0;
        }
    }
    if (chances > 3) {
        cout << "Sorry, you exhausted your " << chances <<" chances.";
        return 0;
    }
    return 0;
}