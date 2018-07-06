#include <iostream>
#include <string>

using namespace std;

int fibonacci_iteration(int pos)  {
    int fib1 = 0;
    int new_fib = 1;
    for (int x = 2; x < pos; x++)  {
        fib1 += new_fib;
        swap(fib1, new_fib);
        }
    if (pos == 1) {
        return fib1; }
    else {
        return new_fib; }
}


int main ()
{
    int position = 4;
    cout << fibonacci_iteration(position) <<endl;
}
