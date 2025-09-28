#include <iostream>

int deliteSomeNumbers(int);
int minimalNumber(int);
int reverseNumb(int);
bool is_natural(int);
bool is_correct(int&);

int main()
{
    int number;
    std::cout << "input whole and natural number " << '\n';
    if (is_correct(number) && is_natural(number))
    {
        std::cout << "minimal number is :" << minimalNumber(number) << '\n';
        //std::cout << deliteSomeNumbers(number) << '\n';
        int perem = deliteSomeNumbers(number);
        std::cout << reverseNumb(perem) << '\n';
    }
    else
    {
        std::cout << "input not whole and natural number or The number is actually higher 2 147 483 647 " << '\n';
    }
}
int deliteSomeNumbers(int number)
{
    int delnumb = { 0 };
    int temp1 = minimalNumber(number);
    while (number > 0)
    {
        int temp;
        temp = number % 10;
        number /= 10;
        if (temp1 == 0)
        {
            std::cout << "minimal number 0 - is mistake";
            break;
        }
        if (temp % temp1 != 0)
        {
            delnumb = delnumb * 10 + temp;
        }
    }
    return delnumb;
}

int minimalNumber(int number)
{
    int minNumb{ 10 };
    while (number > 0)
    {
        int temp;
        temp = number % 10;
        number /= 10;
        if (minNumb > temp)
        {
            minNumb = temp;
        }
    }
    return minNumb;
}
int reverseNumb(int perem)
{
    int reverse = { 0 };
    while (perem > 0)
    {
        int temp = perem % 10;
        perem /= 10;
        reverse += temp;
        reverse *= 10;
    }
    reverse /= 10;
    return reverse;
}
bool is_natural(int number)
{
    return number > 0;
}
bool is_correct(int& number)
{
    return (std::cin >> number) ? true : false;
}