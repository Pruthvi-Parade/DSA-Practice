#include <iostream>
using namespace std;

int fib(int n)
{

    if (n == 0)
    {

        return 0;
    }

    else if (n == 1)
    {

        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

void reachHome(int src, int dest)
{

    cout << "source " << src << " destination " << dest << endl;
    //base case
    if (src == dest)
    {
        cout << " pahuch gya " << endl;
        return;
    }

    //processing - ek step aage badhjao
    src++;

    //recursive call
    reachHome(src, dest);
}

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;

    //R.C
    int ans = countDistinctWayToClimbStair(nStairs - 1) + countDistinctWayToClimbStair(nStairs - 2);

    return ans;
}

void sayDigit(int n, string arr[])
{

    //base case
    if (n == 0)
        return;

    //processing
    int digit = n % 10;
    n = n / 10;

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl
         << endl
         << endl;
    sayDigit(n, arr);
    cout << endl
         << endl
         << endl;

    return 0;
}