#include <iostream>

int main()
{
    int currentNumber = 1; // we increment this on the first loop so we start with 1, the first number we check is 3
    int primeCounter = 1;  // 2 is prime and we start at 3 so we count 1 to account for that

    while (primeCounter != 10001)
    {
        bool isPrime = true;
        currentNumber += 2;

        for (int i = 3; i * i <= currentNumber; i += 2)
        {
            if (currentNumber % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true)
        {
            primeCounter++;
        }
    }

    std::cout << currentNumber;
}