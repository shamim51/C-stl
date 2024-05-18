/*Sets are a type of associative container in which each element has to be unique
 * because the value of the element identifies it.
 * The values are stored in a specific sorted order
 * i.e. either ascending or descending.*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> a;

    a.insert('G');
    a.insert('F');
    a.insert('G');

    for (char it : a) {
        cout << it;
    }
    /*
      for (auto it = a.begin(); it != a.end(); it++) {
            cout << *it;
        }
     */
    cout << '\n';

    //this additional greater<> will sort the set in descending order
    set<int, greater<> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);

    s1.insert(10); //this will be ignored, as set only contains unique values.

    for(auto x: s1){
        cout<<x<<" ";
    }
    cout<<"\n";

    //copy element of s1 into s2 but in ascending order
    set<int> s2(s1.begin(), s1.end());


    for(auto x: s2){
        cout<<x<<" ";
    }
    cout<<"\n";

    //erase function

    s2.erase(s2.begin(), s2.find(10));
    //this will start erase from beginning and upto 10
    for(auto x:s2) cout<<x<<" ";
    cout<<endl;

    //erase by num
    s2.erase(10);
    for(auto x:s2) cout<<x<<" ";
    cout<<endl;


    set<int> s3;
    s3.insert(10);
    s3.insert(5);
    s3.insert(12);
    s3.insert(4);
    s3.insert(1);
    //s3.insert(14);
    s3.insert(2);
    s3.insert(19);
    // lower bound and upper bound for set s1
    cout << "s3.lower_bound(5) : "<< *s3.lower_bound(5) << endl;
    cout << "s3.upper_bound(12) : "<< *s3.upper_bound(12) << endl;




    return 0;
}

//ref: https://www.geeksforgeeks.org/set-in-cpp-stl/
