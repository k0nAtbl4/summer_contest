#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool res = true;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] != 1){
            res = false;
            break;
        }
    }

    if(res){
        cout << "Deck looks good" << endl;
    }
    else{
        cout << "Scammed" << endl;
    }
}
