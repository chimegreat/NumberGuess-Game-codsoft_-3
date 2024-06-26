#include <iostream>
int main()
{
    // Number Guessing Game
    int ran_num = rand() % 15;
    std::cout << ran_num << "\n";
    int user_num;
    while (ran_num != user_num)
    {
        std::cout << "Guess the Number ! : " << std::endl;
        std::cout << "Input Your number : ";
        std::cin >> user_num;
        if (ran_num > user_num)
        {
            std::cout << " TOO LOW! " << std::endl;
            std::cout << " Try Again! " << std::endl;
        }
        else if (ran_num < user_num)
        {
            std::cout << " TOO High! " << std::endl;
            std::cout << " Try Again! " << std::endl;
        }
        else
        {
            std::cout << "You picked Correctly!" << std::endl;
        }
    }
}
