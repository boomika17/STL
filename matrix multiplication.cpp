#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<int>> matrix1 = {
        {4,5},
        {8,9},
        {6,7}
    };
    vector<vector<int>> matrix2 = {
        {6,7},
        {4,6},
        {3,4}
    };

    int row = matrix1.size();
    int col1 = matrix1[0].size();
    int col2 = matrix2[0].size();
    vector<vector<int>> result(row, vector<int>(col2,0));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

   cout<<"matrix multiplication :"<<endl;
    for ( auto &r : result) {
        for (auto &element : r) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}

