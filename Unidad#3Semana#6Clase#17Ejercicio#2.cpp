#include <iostream>
using namespace std;
int main() {
char charArr[] = {'e','l', 'e', 'm', 'e', 'n', 't','o', 'c','h', 'a', 'r'};
int vowels = 0;

for (char ch: charArr) {
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
vowels++;
}
cout << vowels;
}