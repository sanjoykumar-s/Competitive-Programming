#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    } 
    int x;
    cin >> x;
    v.erase(v.begin()+x-1);
    int y,z;
    cin >> y >> z;
    v.erase(v.begin()+y-1,v.begin()+z-1);
    cout << v.size() << endl;
    for(auto it : v)cout << it << " ";
    cout << endl;
    return 0;
}
