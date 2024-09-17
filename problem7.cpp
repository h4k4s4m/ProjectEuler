#include <iostream>
int currentNumber = 2; // we increment this on the first loop so we start with 2, the first prime
int primeCounter = 1;  // 2 is prime and we start at 3 so we count 1 to account for that
bool isPrime = true;

int main()
{

    while (primeCounter != 10001)
    {
        currentNumber++;
        if (currentNumber % 2 == 0)
        {
            isPrime = false;
        }
        for (int i = 3; i*i <= currentNumber; i += 2)
        {
            if (isPrime == false)
                break;
            if (currentNumber % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
            primeCounter++;
        isPrime = true;
    }
    std::cout << currentNumber;
}