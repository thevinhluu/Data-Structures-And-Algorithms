#include <iostream>
using namespace std;

void H10ToH2(int n)
{
    if (n > 0)
    {
        int sd = n % 2;
        n = n / 2;
        H10ToH2(n);
        cout << sd;
    }
}

int main(int argc, char **argv)
{
    int n = 13;
    H10ToH2(n);
    cout << endl;

    return 0;
}
