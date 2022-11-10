#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

void update(int *p)
{

    // p = p + 1;
    //cout << "inside "<< p <<endl;
    *p = *p + 1;
}

int getSum(int *arr, int n)
{

    cout << endl
         << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int num = 5;

    cout << num << endl;

    // address of Operator - &

    cout << " address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    //attention here
    cout << ch << endl;

    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    /*
    int value = 5;
    int *p = &value;
    //print(p);
    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    */

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is " << getSum(arr + 3, 3) << endl;

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0;

    //cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    //copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    //important concept
    int i = 3;
    int *t = &i;
    //cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;
    return 0;
}