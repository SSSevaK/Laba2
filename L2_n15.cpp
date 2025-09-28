#include <iostream>

bool is_correct(int&);
int length(int&, int&);
int size(int);
bool is_increasing(int);


int main()
{
    int a;
    int b;
    std::cout << "input 2 whole numbers"<<'\n';
    if (is_correct(a) && is_correct(b) && length(a, b) != 0)
    {
        for (int i = a; i <= b; i++)
        {
            if (is_increasing(i) && i>10)
            {
                std::cout << i << '\n';
            }
        }
    }
    else
    {
        std::cout << "you input not 2 whole numbers or a = b";
    }
}
bool is_correct(int& number)
{
    return (std::cin >> number) ? true : false;
}
int length(int& a, int& b)
{
    if (a > b)
    {
        std::swap(a, b);
    }
    int i_number = b - a;

    return i_number;
}
int size(int a)
{
    int i_temp = 0;
    while (a > 9)
    {
        a /= 10;
        i_temp += 1;
    }
    return i_temp + 1;
}
bool is_increasing(int number)
{
    int prev_digit = 10; 
    while (number > 0)
    {
        int current_digit = number % 10;
        if (current_digit >= prev_digit)
        {
            return false; 
        }
        prev_digit = current_digit;
        number /= 10;
    }
    return true;
}