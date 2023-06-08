#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    if (n % 2 == 0)

        cout << n << " "
             << "Number is even" << endl;
    else

        cout
            << n << " "
            << "Number is odd" << endl;

    return 0;
}