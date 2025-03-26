#include<bits/stdc++.h>
using namespace std;

// syntex
// input / output
// variables
// conditional 
// loop
// function
// recursion




// void Alfa_pattern(int n){
//     for(int i = 0 ; i < n ; i++){
//         char a = 'A';
//         for(int j = 0; j <= i; j++){
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }
//     return ;
// }

// void odd_pattern(int n){
//     for(int i = 1 ; i <= n; i += 2){
//         for(int j = 1; j <= i; j+=2){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }


long long factorial(int n){
    if(n == 0) return 1;
    return n*(factorial(n - 1));
}


// void inverted_triangle(int n){
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= n; j++){
//             if((i + j) >= n) cout << '*';
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }


int main(){
    // inverted_triangle(9);

    long long ans = factorial(4);
    cout << ans << endl;
    cout << factorial(3) << endl;
    return 0;
}
