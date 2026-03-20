#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int ch;
    cin >> ch;
	switch (ch)
	{
	    case 1: 
	    cout << a+b << " IS the ADDITION of variable a = " << a << "variable b = " << b;
	    break;
	    case 2: 
	    cout << a-b << " IS the SUBTRACTION of variable a = " << a << "variable b = " << b;
	    break;
	    case 3: 
	    cout << a*b << " IS the MULTIPLICATION of variable a = " << a << "variable b = " << b;
	    break;
	    case 4: 
	    cout << a/b << " IS the DIVISION of variable a = " << a << "variable b = " << b;
	    break;
	    case 5: 
	    cout << a%b << " IS the MODULUS of variable a = " << a << "variable b = " << b;
	    break;
	}

}