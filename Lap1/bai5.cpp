#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n==1)
    return 1;
    return n* giaiThua(n-1);
}
int main()
{
int n;
cin >> n ;
cout << "Giai Thua"<< n << "la:"<< giaiThua(n);
return 0;
}