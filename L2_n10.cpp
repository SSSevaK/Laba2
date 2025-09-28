#include <iostream>
#include<cmath>
bool is_natural(int);
bool is_correct(int&);
int length(int);
int exponentiation(int);

int length_numb;

int main()
{
    int i_number;
    std::cout << "input natural and whole number < 2 147 483 647" <<'\n';
    if (is_correct(i_number) && is_natural(i_number))
    {      
        std::cout << "Armstrong number is : " <<'\n';
        for (int i = 1; i <= i_number; ++i)
        {
            length_numb = length(i);
            if (exponentiation(i) == i)
            {
             std::cout << i << '\n';         
            }
        }
    }
    else
    {
        std::cout << "you input not natural number, or number > 2 147 483 647";
    }
}

bool is_natural(int i_number)
{
    return i_number > 0;
}
bool is_correct(int& i_number)
{
    return (std::cin >> i_number) ? true : false;
}
int length(int i_number)
{
    int i_temp = 0;
    while(i_number > 9)
    {
        i_number /= 10;
        i_temp += 1;
    }
    return i_temp + 1;
}
int exponentiation(int number)
{
    int temp;
    int temp1{0};
    for (int i = 0; i < length_numb; ++i)
    {
        temp = number % 10;
        number /= 10;
        temp = static_cast<int>(pow(temp,length_numb));
        temp1 += temp;
    }
    return temp1;
}