#include<iostream>
#include<map>
using namespace std;
int main(){ 


int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}  


//precompute the map here 
map<int,int>hash;    
for(int i=0;i<n;i++){
    hash[arr[i]]++; //if value encountered increase freuancy by 1
} 

for(auto it:hash){
    cout<<it.first<<"-->"<<it.second<<endl; //will print the frequrncies along with the key values 
}

int q; cin>>q; 
while(q--){
    int number;
    cin>>number;
    //fetch the frquencey  
    cout<<hash[number]<<endl; 
}
    return 0;
}