#include <iostream>

using namespace std;

int fib_recur(int pos)
{
    if (pos == 1) {
        return 0;
    }
    if (pos == 2) {
        return 1;
    }
    else {
        int fib_num = fib_recur(pos -1) + fib_recur(pos -2);
        return fib_num;
    }

}

int main()
{
    int fib = fib_recur(7);
    cout << fib << endl;
    return 0;
}
