#include <iostream>
#include <cstring>

using namespace std;

std::uint32_t pow10[10]=
{
  1,
  10,
  100,
  1000,
  10000,
  100000,
  1000000,
  10000000,
  100000000,
  1000000000
};
std::uint32_t atoui(char* number)
{
    size_t len = strlen(number);

    if (number == nullptr)
        return 0;

    std::uint32_t res = 0;
    for (int i =0; i< len; i++)
    {
        if (number[i] > '0' && number[i] < '9')
        {
            res += (number[i] - '0')*pow10[len -i -1];
        }
    }
    return res;
}

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    char number[10], number2[10];
    cin >> number;
    cin >> number2;
    cout << atoui(number)*atoui(number2)<<endl;
    return 0;
}
