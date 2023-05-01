// transpose of a matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <vector<int> > vec(n, vector<int>(n,0));
    vector <vector<int> > ans(n, vector<int> (n,0));

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
           cin >> vec[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            ans[i][j] = vec [j][i];
    }
    cout << "Matrix:\n\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    cout << "\n\nTranspose Matrix: \n\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}