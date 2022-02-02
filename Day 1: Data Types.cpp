#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    //take input for int
    cin>>j;
    double e;
    cin>>e;
    string x;
    //as the space afte scanning the double is left and getline will scan it so we have to ignore it.
    cin.ignore();
    getline(cin, x);
    cout<<i+j<<endl;
    printf("%.1f\n",d+e);
    cout<<s+x;

    return 0;
}
