// lab10a.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "area.h"

int main()
{
    int menuNumber;
    double firstSide, secondSide;
    area result;

    std::cout << "Put a number to choose what you want to calculate:\n";
    while (true) {

        cout << "1 - square of quadrate\n";
        cout << "2 - square of rectangle\n";
        cout << "3 - exit\n";
        cin >> menuNumber;

        while ((menuNumber < 1) || (menuNumber > 3)) {
            cout << "You choose incorrect number, choose 1, 2 or 3" << endl;
            cin >> menuNumber;
        }


        switch (menuNumber)
        {
        case 1:
            cout << "Put side:";
            cin >> firstSide;

            while (firstSide < 0) {
                cout << "You put incorrect number" << endl;
                cout << "Put first side:";
                cin >> firstSide;
            }

            cout << "Quadrate square is: " << result.square(firstSide) << endl << endl;
            break;
        case 2:
            cout << "Put first side:";
            cin >> firstSide;
            cout << "Put second side:";
            cin >> secondSide;

            while ((firstSide < 0) || (secondSide < 0)) {
                cout << "You put incorrect number" << endl;
                cout << "Put first side:";
                cin >> firstSide;
                cout << "Put second side:";
                cin >> secondSide;
            }

            cout << "Rectangle square is: " << result.square(firstSide, secondSide) << endl << endl;
            break;
        case 3:
            exit(0);
            break;

        }

    }
}

