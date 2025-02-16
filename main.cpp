#include <iostream>
#include <string.h>
using namespace std;

int main() {
   string str;
   int j = 0, n = 0, len = 0; // n is the number words of the string, len is the length the biggest word of the string
   cout << "Enter a string: ";
   getline(cin, str);
   str += ' ';
   for (int i = 0; i < str.length(); i++) {
       if (str[i] == ' ') {
           n++;
           if(len < i - j) len = i - j;
           j = i + 1;
       }
   }
   cout << "Number of words: " << n << endl;
   cout << "Length of the biggest word: " << len << endl;
   return 0;
}
