#include <iostream>
#include <string>
using namespace std;
   int main()
{
    cout <<"Dien so vao E=";
    int E;
    cin >> E;
    int A1 = E*E;
    cout << "Dien so vao R=";
    int R;
    cin >>R;
    int pi=3.14159;
    int A2 = pi*R*R;
	cout << boolalpha << ("A1" == "A2") << endl;
	cout << boolalpha << ("A1" != "A2") << endl;
	cout << boolalpha << ("A1" < "A2") << endl;
	cout << boolalpha << ("A2" < "A1") << endl;  // con chịu thua rồi thầy =))
	
    return 0;
}