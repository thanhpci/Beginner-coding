
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_BAD_GUESSES = 7;
const string WORD_LIST[] = {"dog", "cat", "human"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

string chooseWord() {
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}



const string FIGURE[] = {

  "   -------------    \n   |                \n   |                \n   |                \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |                \n   |                \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |                \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |           |    \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |          /|    \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |          /|\\  \n   |                \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |          /|\\  \n   |          /     \n   |     \n -----   \n",

  "   -------------    \n   |           |    \n   |           O    \n   |          /|\\  \n   |          / \\  \n   |     \n -----   \n"
};


void renderGame(string guessedWord, int badGuessCount)
{
	cout << FIGURE[badGuessCount] << endl;
	cout << "Secret word: " << guessedWord << endl;
	cout << "Number of wrong guesses: " << badGuessCount << endl;
}


char readAGuess() {
    char ch;
    cout << "Enter your guess: ";
    cin >> ch;

    return ch;
}

string update(string guessedWord, char guess, string secretWord) {
    for (int i = 0; i < guessedWord.length(); i++) {
        if (guess == secretWord[i]) guessedWord[i] = guess;
    }

    return guessedWord;
}

void displayResult(bool lost) {
    if (lost) cout << "You lost!";
    else cout << "You won!";
}

bool contains(string word, char c) {
    return (word.find_first_of(c) != string::npos);
}

int main()
{
    srand((time(0)));

    string secretWord = chooseWord();
    string guessedWord = string(secretWord.length(), '-');

    int badGuessCount = 0;


    do {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        renderGame(guessedWord, badGuessCount);
        char guess = readAGuess();

        if (contains(secretWord, guess)) {
            guessedWord = update(guessedWord, guess, secretWord);
        } else badGuessCount++;

    } while (badGuessCount < MAX_BAD_GUESSES && guessedWord != secretWord);

    cout << "\n\n";

    displayResult(badGuessCount == MAX_BAD_GUESSES);

    return 0;
}
