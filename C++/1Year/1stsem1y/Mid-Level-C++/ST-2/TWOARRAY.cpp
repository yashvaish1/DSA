2D-__ARRAY 
2d array is an array of arrays in which each element is itself an array.
It can be visualized as a table with rows and columns.


Q-1/ WAP TO INPUT A TWO DIMENNSIONAL ARRAY AND PRINT IT.
A-1/ 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3][2],i,j;
	for(int i=0; i<3; i++){
	    for(int j=0; j<2; j++){
	        cin>>a[i][j];
	        cout<< a[i][j]  << " ";
	    }
	    cout<< "\n";
	}
}


Q-2/ WAP to find the ADDITION of an TWO MATRIX.
A-2/
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int a[3][3],b[3][3],s[i][j];
	for(int i=0; i<3; i++){
	 for(int j=0; j<3; j++){
	     cin>> a[i][j];
	     cout<< a[i][j]<< " ";
	 }
	 cout<< endl;
	}
	
	for(int i=0; i<3; i++){
	 for(int j=0; j<3; j++){
	     cin>> b[i][j];
	     cout<< b[i][j]<< " ";
	 }
	 cout<< endl;
}

 for(int i=0; i<3; i++){
     for(int j=0; j<3; j++){
         s[i][j]=a[i][j]+b[i][j];
         cout<< s[i][j] << " ";
     }
     cout<< endl;
 }
}


Q-3/ WAP TO FIND THE SUM OF ALL THE ELEMENTS OF A 2D ARRAY.
A-3/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,a[3][3],s=0;
   for(int i=0; i<3; i++){
	 for(int j=0; j<3; j++){
	  cin>> a[i][j];
	  s=s+a[i][j];
	 }
   }
   cout<< "Sum of all elements is: " << s;
}

Q-4/ WAP TO FIND OUT THE SUM OF ALL EVEN NUMBERS AND ODD NUMBERS OF A 2D ARRAY.
A-4/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,a[3][3],s=0,d=0;
 for(int i=0; i<3; i++){
     for(int j=0; j<3; j++){ 
         cin>> a[i][j];
         if(a[i][j]%2==0){ 
             s=s+a[i][j];
         }
         else{
             d=d+a[i][j];
         }
     }
     
 }
cout<< s;
cout<< endl;
     cout<< d;
}




Q-5/ WAP TO FIND OUT THE BIGGEST NUMBER OF A MATRIX.
A-5/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[3][3],i,j,max;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	max=a[0][0]; //initialize max with first element
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	cout<< "largest number is "<< max;
}


Q-6/ WAP TO FIND OUT THE SMALLEST NUMBER OF A MATRIX AND ALSO PRINT ITS LOCATION.
A-6/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[3][3],i,j,min,row,col;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	min=a[0][0]; //initialize min with first element
	row=0; //initialize row index
	col=0; //initialize column index
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]<min){
				min=a[i][j];
				row=i; //update row index
				col=j; //update column index
			}
		}
	}
	cout<< "smallest number is "<< min << " at location (" << row << ", " << col << ")";
}

Q-7/ WAP TO FIND OUT THE GIVEN ELEMENT IS IN THE MATRIX OR NOT.
A-7/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[3][3],i,j,flag=0,x;
	//input for matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	cout<< "enter the element to search: ";
	cin>> x;
	//search for the element
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]==x){
				flag=1; //element found
				break;
			}
		}
		if(flag==1){
			break;
		}

	}
	if(flag==1){
		cout<< "element found";
	}
	else{
		cout<< "element not found";
	}
}


Q-8/ WAP TO FIND OUT THE MULTIPLICATION OF TWO MATRIX.
A-8/
Matrix multiplication is possible when the number of columns in
the first matrix is equal to the number of rows in the second matrix.

For example, if matrix A is of size m x n and matrix B is of size n x p,
then their product AB will be of size m x p.


example: 1 of a[3]b[3] and b[3][3] so multiplication is possible 
and result will be stored in c[3][3]

#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[3][3],b[3][3],c[3][3];
	//input for first matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	//input for second matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> b[i][j];
		}
	}
     //multiplication of two matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j]=0; //initialize c[i][j] to 0
			for(int k=0; k<3; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	//print the result matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<< c[i][j] << " ";
		}
		cout<< endl;
	}
}

example:2 of a[2][3] and b[3][2] so multiplication is possible
and result will be stored in c[2][2]
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[2][3],b[3][2],c[2][2],i,j,k;
	//input for first matrix
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	//input for second matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cin>> b[i][j];
		}
	}
	 //multiplication of two matrix
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			c[i][j]=0; //initialize c[i][j] to 0
			for(int k=0; k<3; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	//print the result matrix
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<< c[i][j] << " ";
		}
		cout<< endl;
	}
}


Q-9/ WAP TO PERFORM TRANSPOSE OF A MATRIX AND PRINT IT.
A-9/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[3][3],t[3][3],i,j;
	//input for matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>> a[i][j];
		}
	}
	//transpose of matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			t[j][i]=a[i][j];
		}
	}
	//print the transposed matrix
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<< t[i][j] << " ";
		}
		cout<< endl;
	}
}


q-/ determinant of 
