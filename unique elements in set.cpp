#include <iostream>
#include <set>
#include<algorithm>
using namespace std;

int main()
{

    set<int> num;
    num.insert(34);
    num.insert(76);
    num.insert(34);
    num.insert(65);
    num.insert(45);
    num.insert(45);
    cout<<"Elements in set : ";
    for(auto i:num)
    cout<<i<<" ";
    
    cout<<endl<<"The number of unique elements of the array is : "<<num.size();

    return 0;
}