// #include<iostream>
// using namespace std;
// int UCLN(int a, int b){
//     if(a==b) return a;
//     if(a>b) 
//         UCLN(a-b,b);
//     else
//         UCLN(a,b-a);
// }
// int BCNN(int a, int b){
//     return (a*b/UCLN(a,b) );
// }
// void NhapMang(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<"Nhap a["<<i<<"]: ";
//         cin>>a[i];    
//     }
// }
// int BCNN_Mang(int a[],int n){
//         int temp = BCNN(a[0], a[1] );
//         for(int i=2;i<n;i++){
//             temp = BCNN(temp, a[i]);    
//         }
//         return temp;
//     }
// int main(){
//     int a[1000];
//     int n;
//     cin>>n;
//     NhapMang(a,n);
//     cout<<BCNN_Mang(a,n);
//     return 0;
// }
