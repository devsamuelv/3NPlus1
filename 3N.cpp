#include <iostream>
#include <vector>
#include <cstdio>

namespace util
{
    int getInput()
    {
        int _base;

        std::cout << "Enter starting index: ";
        std::cin >> _base;

        return _base;
    };

    bool isEven(int val)
    {
        if (val % 2 == 0) {
            return true;
        } else {
            return false;
        }
    };

};

namespace math {
    int calOdd(int startingNumber) {
        return startingNumber * 3 + 1;
    }

    int calEven(int startingNumber) {
        return startingNumber / 2;
    }
}

int main() {
    int loopCount = 0;
    int maxLoopsAllowed = 5;
    int base = util::getInput();
    int currentNumber = base;

    while (loopCount != maxLoopsAllowed) {
        bool isEven = util::isEven(currentNumber);

        if (isEven) {
            int t = math::calEven(currentNumber);

            currentNumber = t;
        }

        if (!isEven) {
            int t = math::calOdd(currentNumber);

            currentNumber = t;
        }

        if (currentNumber == 1) {
            loopCount ++;
        }

        std::cout << "Current Number: " << currentNumber << std::endl;
    }

    std::cout << "Max Loop Attempts Allowed: " << maxLoopsAllowed << std::endl;

    return 0;
}
