#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task 1

    int k, n;
    double y = 0, p = 1;

    cout << "\tTask 1 \n" << endl;
    cout << "Enter k : ";
    cin >> k;
    cout << "Enter n : ";
    cin >> n;

    for (int i = k; i <= n; i++)
    {
        y += (double)(i + 2) / ((i + 3) * (i + 6));
    }

    for (int l = 8; l <= 17; l++)
    {
        p *= pow(-1, l) * (l * l - 2) / (l + 3);
    }

    cout << "y = " << y << endl;
    cout << "p = " << p << endl;



    //Task 2

    int start, finish, sum = 0;

    cout << "\n\n\tTask 2 \n" << endl;
    cout << "Enter start: ";
    cin >> start;
    cout << "Enter finish: ";
    cin >> finish;

    for (int i = start; i <= finish; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }

    cout << "Start = " << start << endl;
    cout << "Finish = " << finish << endl;
    cout << "Sum of odd numbers = " << sum << endl;



    //Task 3

    double startValue, stepValue, result = 0;

    cout << "\n\n\tTask 3 \n" << endl;
    cout << "Enter x1: ";
    cin >> startValue;
    cout << "Enter dx: ";
    cin >> stepValue;

    for (int number = 5; number <= 24; number++)
    {
        double currentValue = startValue + (number - 1) * stepValue;
        double nextValue = currentValue + stepValue;

        result += (nextValue * nextValue) / (2 + currentValue);
    }

    cout << "x1 = " << startValue << endl;
    cout << "dx = " << stepValue << endl;
    cout << "y = " << result << endl;
}