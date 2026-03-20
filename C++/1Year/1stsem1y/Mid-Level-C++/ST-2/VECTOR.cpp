VECTOR
Vector is a dynamic array that can grow and shrink in size. 
It is part of the C++ Standard Template Library (STL) and provides various functionalities 
to manage a collection of elements.

SYNTAX:
#include <vector>
using namespace std;
vector<datatype> vector_name;
vector<datatype> vector_name = {element1, element2, element3, ...}; //creates a vector and initializes it with the given elements
vector<datatype> vector_name(size, initial_value); //creates a vector of given size initialized with initial_value
vector<datatype> vector_name(size); //creates a vector of given size with default initialization


#HEADERS:
#include <iostream>
#include<vector.h> //for old compiler
#include <vector>

#Functions of Vector:
a.push_back(value); //adds an element to the end of the vector
a.pop_back(); //removes the last element of the vector
a.size(); //returns the number of elements in the vector after removing duplicates and spaces
a.capacity() → Returns allocated memory size.
a.empty(); //returns true if the vector is empty, false otherwise
a.clear(); //removes all elements from the vector.
a.begin(); //returns an iterator pointing to the first element of the vector
a.end(); //returns an iterator pointing to the position after the last element of the vector

v.front() / v.back() → Access first/last element.
v.clear() → Removes all elements.


Example of Vector in C++:
EX-1/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 int main() {
     vector<int> a= {1,2,3,4}//declaration of vector
     int x;
     for(int i=0; i<5; i++){
         cin>> x;
         a.push_back(x); //adding elements to vector
     } 
     int size =a.size(); //size of vector
     int k= a.capacity(); //capacity of vector
    cout<< "size is "<< size << endl;
    for(int i=0; i<size; i++){
        cout<< a[i] << " "; //accessing elements of vector
    }
    a.push_back(10); //adding one more element to vector
    int k=a.capacity(); //capacity of vector after adding one more element
    cout<< k;

    for(i:a){
        cout<< i << " ";
    }
 }


EX-2/ Accessing elements of vector
 int size =a.size(); //size of vector
 for(int i=0; i<size; i++){
     cout<< a[i] << " "; //accessing elements of vector
 }
 
 Alternatively : 
 for(int i:a){ //range based for loop
     cout<< i << " ";
 }

Wap to find out the last occurence of x in the given vector.
#include <bits/stdc++.h>
#include <vector>
using namespace std;


WAP to find out the number of occurences of x in the given vector.

Basic examples of vector operations:

Q-1/ Write a program to input n elements in a vector and display the elements of the vector.
A-1/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin>> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>> x;
        a.push_back(x);
    }
    for(int i=0; i<a.size(); i++){
        cout<< a[i] << " ";
    }
}

Q-2/ Write a program to find out the sum of all the elements of a vector.
A-2/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, x, sum=0;
    cin>> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>> x;
        a.push_back(x);
    }
    for(int i=0; i<a.size(); i++){
        sum += a[i];
    }
    cout<< "Sum of all elements: " << sum;
}

Q-3/ program using pop back function of vector.
A-3/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin>> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>> x;
        a.push_back(x);
    }
    cout<< "Elements before pop_back: ";
    for(int i=0; i<a.size(); i++){
        cout<< a[i] << " ";
    }
    a.pop_back(); //removing last element
    cout<< "\nElements after pop_back: ";
    for(int i=0; i<a.size(); i++){
        cout<< a[i] << " ";
    }
}



-------------------------------------------------------------------------------------------


