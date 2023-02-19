// This code is given by - bentonite_02

#pragma GCC optimize("O3,unroll-loops")

#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <deque>
#include <climits>
#include <functional>
#include <climits>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ll long long int

using namespace std;

// Code begins here-->

void solve()
{
    ll start,end;
    cin>>start>>end;  //Enter the range for n, size of array
    ll len=start + ( std::rand() % ( end - start + 1 ) );
    cin>>start>>end;   //Enter the range for elements of array
    cout<<len<<endl;
    for(int i=0;i<len;i++){   
            cout<<start + ( std::rand() % ( end - start + 1 ) )<<" ";
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll _ = 1, p = 1;
    //cin >> _;
    while (_--)
    {
        solve();
        p++;
    }

    return 0;
}
