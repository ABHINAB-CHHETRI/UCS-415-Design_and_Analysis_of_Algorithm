#include <iostream>
#include<vector>
using namespace std;
void MaxActivities(int a[],int s[],int f[],int n){
    vector <int> my_vector={a[0]};
    int k=1;
    for(int i=2;i<n;i++){
        if(s[i]>=f[k]){
            my_vector.push_back(a[i]);
            k=i;
        }
    }
    for (int i=0;i<my_vector.size();i++){
        cout<<my_vector[i]<<"\t";
    }
    
}
int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    int s[] = { 1, 3, 0, 5, 3, 5, 6, 8, 8, 2,12 };
    int f[] = { 4, 5, 6, 7, 9, 9,10,11,12,14,16 };
    int n = sizeof(s) / sizeof(s[0]);

    MaxActivities(a,s, f, n);
    return 0;



}
