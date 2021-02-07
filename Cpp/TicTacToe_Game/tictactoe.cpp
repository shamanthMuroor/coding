#include <iostream>

class TicTacToe
{
private:
    char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int choice = 0;
    char mark = 'X';
public:
    int player = 1;
    int res = -1;
    void board()
    {
        system("cls");
        std::cout << "Tic Tac Toe!" << std::endl;
        std::cout << "Player 1(X) & Player 2(O)" << std::endl << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;
        std::cout << "     |     |     " << std::endl << std::endl;
    }

    int checkwin()
    {
        if (square[1] == square[2] && square[2] == square[3])
            return 1;
        else if (square[4] == square[5] && square[5] == square[6])
            return 1;
        else if (square[7] == square[8] && square[8] == square[9])
            return 1;
        else if (square[1] == square[4] && square[4] == square[7])
            return 1;
        else if (square[2] == square[5] && square[5] == square[8])
            return 1;
        else if (square[3] == square[6] && square[6] == square[9])
            return 1;
        else if (square[1] == square[5] && square[5] == square[9])
            return 1;
        else if (square[3] == square[5] && square[5] == square[7])
            return 1;
        else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
            && square[4] != '4' && square[5] != '5' && square[6] != '6'
            && square[7] != '7' && square[8] != '8' && square[9] != '9')
            return 0;
        else
            return -1;
    }

    void startgame()
    {
        while (res == -1)
        {
            board();
            player = (player % 2) ? 1 : 2;
            std::cout << "Player " << player << " enter a number: ";
            std::cin >> choice;
            if (choice <= 0 || choice >= 10)
            {
                std::cout << std::endl << "INVALID ENTRY!!! Press ENTER to try again!";
                std::cin.ignore();
                std::cin.get();
            }
            mark = (player == 1) ? 'X' : 'O';

            for (int i = 1; i <= 9; i++)
            {
                if (choice == i && square[i] == char(i+48)) //Integer numbers start from 49
                {
                    square[i] = mark;
                    break;
                }
            }
            res = checkwin();
            player++;
        }

        board();
        if (res == 1)
        {
            std::cout << "\aPlayer " << --player << " win ";
        }
        else
        {
            std::cout << "\aGame draw";
        }
        std::cin.get();
    }
};

int main()
{
    TicTacToe play;
    play.startgame();
    std::cin.get();
}