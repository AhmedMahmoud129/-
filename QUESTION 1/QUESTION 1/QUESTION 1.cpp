#include <iostream>

using namespace std;
int main()
{

    float year, month = 0, i, sum = 0, max = 0, mini = 9999999999;
    for (year = 1; year <= 10; year++)
    {
        for (i = 1; i <= 12; i++)
        {
            cout << "Enter the month earning";
            cin >> month;
            if (month > max)
            {
                max = month;

            }
            if (month < mini)
            {
                mini = month;

            }
            sum = sum + month;

        }
        cout << "The sum is " << sum << endl;
        cout << "The avg is" << sum / 12 << endl;
        cout << "The max is" << max << endl;
        cout << "The mini is" << mini << endl;
    }

    return 0;
}
