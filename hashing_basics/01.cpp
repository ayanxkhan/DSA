#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // precompute
    // in order to have  12th index i need a size of 13 bcz last array index is 12 
    int hash[13] = {0};
    for(int i =0;i<n;i++){
        hash[arr[i]] += 1;
    }


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << "Number of times " << number << " appears: " << hash[number] << endl;

    }

}


/*input table-

5  size of array
1 3 2 1 3  elements of array
5  no. of queries
1  how many times 1 appears
4  how many times 4 appears
2  how many times 2 appears
3  how many times 3 appears
12 how many times 12 appears

*/

/* output table-
2
0
1
2
0

*/