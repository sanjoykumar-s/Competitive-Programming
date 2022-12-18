#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int x,y;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x==1)s.insert(y);
        else if(x==2)s.erase(y);
        else
        {
            auto it = s.find(y);
            if(it!=s.end())cout << "Yes\n";
            else cout << "No" << endl;
        }
    }  
    return 0;
}



