#include<bits/stdc++.h>
using namespace std;
#define N 1000
const int MOD = 1e9 + 7;
int Remember_ar[N][N];
//ở đây dùng đệ quy có nhớ để tính C(k,n) bằng cách tìm các giá trị từ C(0,0) 
//lưu vào Remember_ar

//tính toán tổ hợp chập k của n:
void C( int k, int n){
for (int i = 0; i <=n; i++){
    Remember_ar[0][i]=1; 
}
    for (int i = 1; i <=n; i++){
        while (k<=i){
            if(k==i) Remember_ar[k][i]=1;
            else if(k!=i&&k==1) Remember_ar[k][i]=i;
            else Remember_ar[k][i]=(Remember_ar[k-1][i-1]+Remember_ar[k][i-1]) % MOD;
        k++;
        }
    k=1;
    }
    
}
void in_ra_C(int k, int n){
    cout<<Remember_ar[k][n];
}
int main(){
    int k,n;
    cin>>k>>n;
    C(k,n);//tính toán tổ hợp chập k của n:
    in_ra_C(k,n);
    return 0;
}
