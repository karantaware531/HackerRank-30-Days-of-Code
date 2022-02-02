#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int consOnes(string r, int size){
    int max=0 ,p=0;
    for(int i= 0; i<size;i++){
        if(r.substr(i,1)=="1"){
            p++;
            if (p>max) max=p;
        }
        else{
            p=0;
        }
    }
    return max;
}    
int main(){
    int n;
    cin >> n;
    string r = toBinary(n);
    cout << consOnes(r,r.length());
    
    return 0;
}
