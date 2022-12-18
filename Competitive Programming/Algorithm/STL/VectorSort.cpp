#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto it : v)cout << it << " ";
    cout << endl;
    return 0;
}
