#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(2, 3);
    vector<int> v1 = {3, 5, 6, 7};
    vector<vector<int>> matrix={{1,2,3},{4,5,6}};

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int x : v1)
    {
        cout << x << " ";
    }

    cout << endl;

    v.push_back(2);
    v.push_back(3);

    cout << "after inserting at end in v " << endl;

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "after inserting at index 1 " << endl;

    v.insert(v.begin() + 1, 6);

    for (int x = 0; x < v.size(); x++)
    { /// we use v.at() function to find the element at certain position in the vector
        cout << v.at(x) << " ";
    }
    cout << endl;
    for (int x = 0; x < v.size(); x++)
    { /// it prints same alike an array
        cout << v[x] << " ";
    }
    cout<<endl;

    v.pop_back();                         /// it delete the element from the end odf the vector
    v.erase(find(v.begin(), v.end(), 2)); /// to delete at position we use erase function

    cout << "elements after deleting"<<endl;

    for (int x = 0; x < v.size(); x++)
    {
        cout << v[x] << " ";
    }

    // 2d vectors
    cout<<endl<<"2D VECTORS"<<endl;


    for(int i =0 ; i< matrix.size();i++){
        for(int j =0 ; j< matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    
}