#include <iostream>
using namespace std;
int* get_array(int N){
 int *p= new int[N];
 for (int i=0; i<N; i++){
    cin >> p[i];

 }
return p;
}
int main(){
 int N ;
 cin>> N;
 int *m=get_array(N);
 for (int i=0; i<N; i++)
cout << m[i] << " ";

}