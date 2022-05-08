#include <iostream>
#include "conditions.cpp"

using namespace std;
float f = 10; // Global Variable

int xy(int n)
{
    int sum; // declare
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

float divide(float num)
{
    float res = num / 2;
    return res;
}
int main()
{
// char res = ifCondition(90);
// cout << "check if condition:" << res << endl;
fo:
    cout << "Enter num:";
    cin >> f;
    cout << divide(f) << endl;
    goto fo;

    return 0;
}
