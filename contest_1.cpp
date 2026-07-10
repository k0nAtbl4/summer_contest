#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        pq.push(x);
    }

    while(pq.size() > 1){
        long long x = pq.top();
        pq.pop();
        long long y = pq.top();
        pq.pop();
        cout << x << " " << y << "\n";
        pq.push(x + y);
    }
}
