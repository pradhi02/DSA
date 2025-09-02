#include<iostream>
using namespace std; 

//recursive function
int cnt=0; 
  //we have declared it as a global paramter because while calling the function again and again the value of cnt will be reset to 0 and it will cause infinited calls , hence will lead to segmentation erros and function call stack will get full; 
void msg(){
    if(cnt==3) return; //here the function is returned  
    cout<<"Hello"<<endl;
    cnt++; 
    msg();

} 

//print name 5 times 
void printName(string s, int num, int cnt=0){
    if(cnt==num)return; //base case 

    cout<<s<<endl; 
    cnt++;
    printName(s,num,cnt++);   
} 

void p(int start, int num){
    if(start>num) return;  

    cout<<"Helloo world"<<endl; 
    p(start+1,num); 
}
  
void printN(int temp,int n){
    if(temp>n) return;  

    cout<<temp<<" ";  //printing temp 
   
    printN(temp+1,n); 
} 

//print from n to 1; 

void printP(int num, int temp){
    if(num<temp) return; //the moment num becaomse smaller than i it is called back 
    cout<<num<<" ";
    printP(num-1,temp);
} 


//priniting using backtracking 
//conditions we useing are 
//if(i>n) return starts from 1,n 
 void printBackP(int i, int num){
    //base conditio first here we ill write 
    if(i>num) return; 

    printBackP(i+1,num); // (2,num) 
    cout<<i<<" "; 
 }


int main(){ 
    cout<<"start Recursion"<<endl; 
    cout<<"When a function calls itself that is recusion"<<endl; 
    msg();
    printName("Hello Pradhi", 5); 
    p(1,6);
    printN(1,5);   
    cout<<endl;
    printP(5,1);
    printP(18,7); 
    cout<<endl;  
    cout<<"print using backtracking from 1 to N"<<endl; 

    printBackP(1,10);



    


    return 0;
}