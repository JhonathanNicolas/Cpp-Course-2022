/* includes */
#include <iostream>

int main()
{
    /* Creates and initialize the variable */
    int16_t favorite_number = 0;

    /* print the message to get the favorite number */
    std::cout << "Please, what is your favorite number (0 - 100)?: ";;

    /* get the valuer of the typed number to favorite number */
    std::cin >> favorite_number;

    /* validate */
    if ((favorite_number < 0) || (favorite_number > 100) )
    {
        std::cout << "The value typed is not between 0 and 100. Bye!" << std::endl;

    }

    else
    {
        std::cout << "No really! " << favorite_number << " is my favorite number!" << std::endl;
    }

    


}