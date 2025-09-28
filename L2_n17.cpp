#include <iostream>

bool is_natural(int);
bool is_correct(int&);
double fraction(int , double);
bool NOD(int, int);

int main()
{
    int number;
    std::cout << "input natural and whole number < 2 147 483 647 " <<'\n';
    if (is_correct(number) && is_natural(number))
    {
        std::cout << "irreducible fractions" << '\n';
        for (int i = 1; i < number; i++)
        {
            int temp{ 2 };
            while (temp < number)
            {
                if (fraction(i, temp) != 0 && NOD(i,temp) ==1)
                {
                    std::cout << fraction(i, temp) << "\n";
                }
                ++temp;
            }
        }
    }
    else
    {
        std::cout << " you input not natural and whole number, or number > 2 147 483 647";
    }
}

bool is_natural(int number)
{
    return number > 0;
}
bool is_correct(int& number)
{
    return (std::cin >> number) ? true : false;
}
double fraction(int numerator, double denominator)
{
    double temp{0};
    if (numerator / denominator < 1)
    {
        temp = numerator / denominator;
    }
    return temp;
}
bool NOD(int numerator, int denaminator)
{
    int temp;
    while (denaminator != 0)
    {
        temp = denaminator;
        denaminator = numerator % denaminator;
        numerator = temp;
    }
    return temp < 2 ? true : false;
}