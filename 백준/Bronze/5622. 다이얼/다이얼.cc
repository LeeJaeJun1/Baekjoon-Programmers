#include<iostream>
using namespace std;

int main() {
    int total = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
            total += 3;
        }

        else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
            total += 4;
        }

        else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
            total += 5;
        }

        else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
            total += 6;
        }

        else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
            total += 7;
        }

        else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') {
            total += 8;
        }

        else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
            total += 9;
        }
        else{
            total += 10;        }
    }
    cout << total;
}