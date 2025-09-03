#include<iostream>
using namespace std;  

//paramaterized recursice function //MY LOGIC 
int sumN(int i, int num, int sum=0){
    if(i>num) return sum; //when base case is reached return the accumulated ans
    sum+=i; 
   return sumN(i+1,num,sum); 

}   

//Striver logic  fro N to 1; 
int sumNN(int i, int num, int sum=0){ 
    //base case we have 
    if(i<1) return sum; 
    sum+=i;
    return sumNN(i-1,num,sum);

} 

//functinal recussion  

int sumR(int num){
    if(num==0) return 0; //if the num reached 0 return 0 
     return num + sumR(num-1); 
} 


//factorial of number using parametrized way 

int fact1(int num, int fact=1){
    if(num<=1) return fact; 
     fact=fact * num;
     return fact1(num-1,fact); //this will retrun the 
} 

//funcational recursion problem 
 int fact2(int num){
    if(num<=1) return 1; 
    return num * fact2(num-1); 
 } 

int main(){ 
    int ans=sumN(1,10,0); 
  cout<<ans<<endl;  

  int ans2= sumNN(20,1,0);
 cout<<ans2<<endl; 

 int ans3=sumR(4); 
 cout<<ans3; cout<<endl;

 int ans4=sumR(10);
 cout<<ans4<<endl; 

 int factorial1=fact1(5);
 cout<<factorial1<<endl;  

 int factorial2= fact2(5); //answer doneho
 cout<<factorial2;

return 0;
}