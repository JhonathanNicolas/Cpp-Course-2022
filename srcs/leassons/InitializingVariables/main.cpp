#include <iostream>

using namespace std;

/* This program will calculate the area of a room in square feet*/

int main()

{
    /* Initialize variable in C++ */
    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room: ";
    cin >> room_length;

    cout << "The square feet of the room is: " << room_length * room_width << endl;

    return 0;

}