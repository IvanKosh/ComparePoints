/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 19:02
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    int O, P, Q, R;
    bool t;
    while(stream >> O && stream >> P && stream >> Q && stream >> R) {
        t = true;
        if (P < R) {
            t = false;
            cout << 'N';
        }
        if (P > R) {
            t = false;
            cout << 'S';
        }
        if (O < Q) {
            t = false;
            cout << 'E';
        }
        if (O > Q) {
            t = false;
            cout << 'W';
        }
        if(t) cout << "here";
        cout << '\n';
    }
    
    return 0;
}