#include <iostream>
using namespace std;

int main ()
{
    int num = 0, sum = 0, count = 0;
    double mean = 0;
    cout << "Enter Positive Numbers Only: ";
    cin >> num;
    if (num > 0)
    {
        sum += num;
        count++;
        while (num > 0)
        {
            cout << "Enter Positive Numbers Only: ";
            cin >> num;
            if (num > 0)
            {
                sum += num;
                count++;
            }
        }
        mean = float(sum) / float(count);
        cout << "The Arithmetic Mean: " << mean << endl;
    }
    return 0;
}