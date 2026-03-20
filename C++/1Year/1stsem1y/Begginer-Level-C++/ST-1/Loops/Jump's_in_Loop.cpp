JUMPS IN LOOP

1. Continuous 
for (int i = 1; i <= 10; i++)
 {
    if (i == 5) {
        continue; // Skip the rest of the loop when i is 5
    }
    cout << i << " "; // This will print numbers from 1 to 10 except 5
}

When continue statement is occured, the control jumps to the next iteration/next value of the loop, 
skipping any code that follows it within the loop body for that particular iteration.


example-1/ 
for(int i=1; i<=10; i++){
    if(i==6){
        continue;
    }
    cout<< i << endl;
}

1
2
3
4
5
7
8
9
10

example-2/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    for ( n; n<=20; n++){
        if (n==15){
            continue;
        }
        cout<< n << " ";
    }
}

INPUT = 1
OUTPUT = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20
INPUT = 10
OUTPUT = 10 11 12 13 14 16 17 18

GOTO STATEMENT :
goto statement are used to transfer control to a labeled statement within the same function.

simple example/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1;
    loop_start:
    if (i<=10){
        cout<< i << " ";
        i++;
        goto loop_start;
    }
}
  OUTPUT = 1 2 3 4 5 6 7 8 9 10


medium example/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    loop_start:
    if (n<=20){
        if (n==15){
            n++;
            goto loop_start;
        }
        cout<< n << " ";
        n++;
        goto loop_start;
    }
}

OUTPUT = (if input is 10) 10 11 12 13 14 16 17 18 19 20


BREAK STATEMENT :

Break Statement in Loops are used to terminate the loop prematurely when a certain condition is met. 
When the break statement is encountered inside a loop, the control immediately exits the loop,
 
simple example/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1;
    while (i<=10){
        if (i==6){
            break;
        }
        cout<< i << " ";
        i++;
    }
}

MEDIUM  
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    while (n<=20){
        if (n==15){
            break;
        }
        cout<< n << " ";
        n++;
    }
}
