#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int smallestelement(priority_queue<int,vector<int>, greater<int>>& pq, int k) {

    for (int i = 1; i < k; ++i) {
        pq.pop();
    }
    return pq.top();
}

int main() {
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(14);
    pq.push(23);
    pq.push(15);
    pq.push(20);
    pq.push(17);
    pq.push(30);
    int k ;
    cout<<"enter a value:";
    cin>>k;
    int result = smallestelement(pq, k);
    cout << "The " << k << "th smallest element is: " << result << endl;

    return 0;
}