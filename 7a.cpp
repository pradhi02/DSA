#include<iostream>
using namespace std; 
void reverseArray(int arr[],int n){
    int i=0; int j=n-1; 
    while(i<j){
        //swap function 
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp; 
        i++;
        j--;

    } 
}  


//recursive function to revserse the array elements 
void reverseArray1(int arr[], int size, int start, int end){
    if(start>=end) return; //base case for recursion 
    swap(arr[start], arr[end]); 
    
   return reverseArray1(arr,size,start+1, end-1);

}
 

//recusirion using single pointer;  
void f(int array[], int i, int n){
    if(i>=n/2) return; 
    //recusive call; 
    swap(array[i], array[n-i-1]); 
      f(array,i+1,n);
}

bool checkPalindrome(string &s, int n, int i){
    if(i>=n/2) return true;  //aagr recusion calls yaha tak pauche gyye hai it means the string is palindorme 
    if(s[i]!=s[n-i-1]) return false; 
    
    return checkPalindrome(s,n,i+1);
}

int main(){
    cout<<"hello world"<<endl;  
    int array[5]={1,2,3,4,5};  

    reverseArray(array,5);  

    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    } 
 cout<<endl;
    reverseArray1(array,5,0,4); 

    for(int j=0;j<5;j++){
        cout<<array[j]<<" ";
    }  
     cout<<endl;
    int array2[5]={2,3,4,5,6}; 
    reverseArray1(array2,5,0,4); 

     for(int k=0;k<5;k++){
        cout<<array2[k]<<" ";
    }   
 cout<<endl; 

int array3[5]={4,5,6,7,8};  

     f(array3,0,5);
     for(int l=0;l<5;l++){
        cout<<array3[l]<<" ";
    }   

  string s="APPLE";
  bool pal=checkPalindrome(s,5,0);
  cout<<pal; 

 cout<<endl;
 string s1="MADAM";
 bool pal2=checkPalindrome(s1,5,0);
 cout<<pal2;
    return 0;
}