#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void result(int, int, int);
void tactic(int , int&);

int main()
{
    int card_1, card_2;
    srand(time(NULL));
    card_1 = rand() % 101;
    do {
        card_2 = rand() % 101;
    } while (card_1 == card_2);

    cout << "The value of card 1 is: " << card_1 << endl;

    int guess;
    tactic(card_1, guess);
    result(card_1, card_2, guess);

    cout << endl << "The value of card 2 is: " << card_2;
    return 0;
}

void result(int card_1, int card_2, int guess)
{
    if (guess == 1) {
        if (card_1 > card_2) cout << "Bob win!";
        else cout << "Bob lose!";
    }
    if (guess == 2) {
        if (card_2 > card_1) cout << "Bob win!";
        else cout << "Bob lose!";
    }
}

void tactic(int card_1,int& guess)
{
    if (card_1 > 50) {
        cout << "Bob chooses card 1" << endl;
        guess = 1;
    }
    else
    {
        cout << "Bob chooses card 2" << endl;
        guess = 2;
    }
}
