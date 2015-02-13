#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	char game;
	game = 'Y';
	const char Y = 'Y';
	const char N = 'N';
	while ((game == 'Y') || (game == 'y'))
	{
		string phrase, phrasecopy;
		cout << "Player 1 please enter a 4 letter word (lowercase only)." << endl;
		std::cin >> phrase;
		phrasecopy = phrase;
		char x, guess1, guess2, guess3, guess4, guess5, guess6, guess7, guess8;
		x = '_';
		guess1 = x;
		guess2 = x;
		guess3 = x;
		guess4 = x;
		guess5 = x;
		guess6 = x;
		guess7 = x;
		guess8 = x;
		int failstate;
		failstate = 0;
		phrasecopy[0] = x;
		phrasecopy[1] = x;
		phrasecopy[2] = x;
		phrasecopy[3] = x;
		int guesses;
		guesses = 8;

		if ((phrase.length() > 4) || (phrase.length() < 4))
		{
			cout << "ERROR. Please make sure to enter a 4 letter word." << endl;
			continue;
		}

		if (phrase.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos)
		{
			cout << "ERROR. Please make sure to use ONLY lowercase alphabetical letters." << endl;
			continue;
		}

		while (guesses > 0)
		{
			char guess, a, b, c, d;
			a = phrase[0];
			b = phrase[1];
			c = phrase[2];
			d = phrase[3];
			cout << "Player 2 please guess a letter (lowercase only)." << endl << "Here is what you have gotten so far:" << endl << phrasecopy[0] << " " << phrasecopy[1] << " " << phrasecopy[2] << " " << phrasecopy[3] << endl << "You have " << guesses << " tries left." << endl << "Here are the letters you have guessed so far:" << endl << guess1 << " " << guess2 << " " << guess3 << " " << guess4 << " " << guess5 << " " << guess6 << " " << guess7 << " " << guess8 << endl;
			std::cin >> guess;

			if (isalpha(guess))
			{
				cout << endl;
			}
			else
			{
				cout << "ERROR. Please enter a valid lowercase letter." << endl << endl;
				continue;
			}
			if (isupper(guess))
			{
				cout << "ERROR. Please enter a valid lowercase letter." << endl << endl;
				continue;
			}
			if ((guess == guess1) || (guess == guess2) || (guess == guess3) || (guess == guess4) || (guess == guess5) || (guess == guess6) || (guess == guess7) || (guess == guess7))
			{
				cout << "ERROR. You already guessed that letter." << endl << endl;
				continue;
			}
			if (guess == a)
			{
				phrasecopy[0] = phrase[0];
				cout << "Congrats! You guessed a correct letter!" << endl << endl;
			}
			if (guess == b)
			{
				phrasecopy[1] = phrase[1];
				cout << "Congrats! You guessed a correct letter!" << endl << endl;
			}
			if (guess == c)
			{
				phrasecopy[2] = phrase[2];
				cout << "Congrats! You guessed a correct letter!" << endl << endl;
			}
			if (guess == d)
			{
				phrasecopy[3] = phrase[3];
				cout << "Congrats! You guessed a correct letter!" << endl << endl;
			}
			if ((guess != a) && (guess != b) && (guess != c) && (guess != d))
			{
				cout << "Sorry, that was not one of the letters." << endl << endl;
			}
			if ((phrasecopy[0] == phrase[0]) && (phrasecopy[1] == phrase[1]) && (phrasecopy[2] == phrase[2]) && (phrasecopy[3] == phrase[3]))
			{
				cout << "Awesome! You got it! You guessed the word:" << endl << phrasecopy << endl << "Player 2 Wins!" << endl<< endl;
				break;
			}
			if (guesses == 8)
			{
				guess1 = guess;
			}
			if (guesses == 7)
			{
				guess2 = guess;
			}
			if (guesses == 6)
			{
				guess3 = guess;
			}
			if (guesses == 5)
			{
				guess4 = guess;
			}
			if (guesses == 4)
			{
				guess5 = guess;
			}
			if (guesses == 3)
			{
				guess6 = guess;
			}
			if (guesses == 2)
			{
				guess7 = guess;
			}
			if (guesses == 1)
			{
				guess8 = guess;
			}
			if (guesses > 0)
			{
				guesses = guesses - 1;
			}
			if (guesses == 0)
			{
				cout << "Sorry, but you did not guess the word in time. Player 1 Wins!" << endl << endl;
				failstate = failstate + 1;
			}
		}
		while (failstate >= 1)
		{
			if (phrasecopy[0] != phrase[0])
			{
				cout << "Player 2, you missed the letter '" << phrase[0] << "'" << endl;
			}
			if (phrasecopy[1] != phrase[1])
			{
				cout << "Player 2, you missed the letter '" << phrase[1] << "'" << endl;
			}
			if (phrasecopy[2] != phrase[2])
			{
				cout << "Player 2, you missed the letter '" << phrase[2] << "'" << endl;
			}
			if (phrasecopy[3] != phrase[3])
			{
				cout << "Player 2, you missed the letter '" << phrase[3] << "'" << endl;
			}
			if (failstate = 1)
			{
				cout << endl << "The correct word was:" << endl << phrase << endl << endl;
				failstate = failstate - 1;
			}
		}
		
		cout << "Would you like to play again Y/N?" << endl;
		std::cin >> game;
	}


	if ((game == 'N') || (game == 'n'))
	{
		cout << "Thanks for playing!";
	}

	std::cin.get();
	std::cin.get(); // I added these two to make the executable pause before closing when I compile at home

	return 0;
}