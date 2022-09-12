#include <iostream>
using namespace std;

int main(){
int n = 5;
//initializtion of parent Loop variable
int i = 1;
while (i <= 5) { //test expression of parent loop
//initializtion of child Loop variable
int j = 1;
while (j <= i) { //test expression of child Loop
cout << j << " ";
// update expression of child Loop
j++;
}
cout << "\n";
// update expression of parent Loop
i++;
}
}