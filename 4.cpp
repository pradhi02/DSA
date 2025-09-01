#include<iostream>
#include<cmath>
using namespace std;  
void extractDigit(int n){
    while(n>0){
      int lastdigit=n%10;
      cout<<lastdigit<<endl; 
      n=n/10; 
    }
} 


void reverseDigit(int n){
    int rev=0;
    while(n>0){
    int lastdigit=n%10; 
     n=n/10;
     rev= rev*10 + lastdigit; 
    
    } 
    cout<<rev;
}

 bool checkPalindorm(int n){
    int final=n; 

    int rev=0;
    while(n>0){
    int lastdigit=n%10; 
     n=n/10;
     rev= rev*10 + lastdigit; 
    
    } 
  if(rev==final) return true;  
  
  
  return false;
 } 
 
 bool checkArmstorng(int num){
    //first we will count the number of digits in the number 
    int final=num; 
    int check=num;  
    int c=0;
        while(num>0){
            int lastdigit= num %10;
            c++;
            num=num/10;
    } 

    //now that we have number of digits we will riase the last digit to the power of c;  
     int sum=0;
    while(check>0){
        int ld= check % 10; 
    
        check=check/10;
         double result = pow(ld,c); //rising to the power of digits  
         sum+=result; 
    } 

    if (sum==final) return true; 
    else return false;

 } 


 void printDivisor(int num){
  for(int i=1;i<=num;i++){
    if(num % i ==0)
        cout<<i<<" ";
     
} }

void printDiv(int num){
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<i<<" "; 
            if(i!=num/i){
                cout<<num/i<<" ";}
            
        }
    }
} 

void checkPrime(int num){
    int count=0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i == 0){
            count++;
            if(num/i!=i) count++;
        } 
        
    } 
    if(count==2) {cout<<"prime"<<endl;}

    
    else 
    {cout<<"not  prime"<<endl;}
}
  

int GCD(int a, int b){
    if(b==0)
    return a; 

     return GCD(b,a%b);
}

int main(){ 
    cout<<"hello program starts here"<<endl;
    extractDigit(453);
    reverseDigit(456); cout<<endl;
    reverseDigit(4568876);
    cout<<"next question for palindorm"<<endl;
    bool ans = checkPalindorm(121);
    cout<<ans; 
    cout<<"check armstrong here";
    bool ans2=checkArmstorng(121);
    cout<<ans2; 
    cout<<endl;
    bool ans3=checkArmstorng(153);
    cout<<ans3; cout<<endl; 

    printDivisor(30); 
    cout<<endl; 
    //optimized version of the promblem
    printDiv(30); 
    cout<<endl;

    //prime code starts here 
    checkPrime(3); 
    checkPrime(15); 
    checkPrime(13);

    int answer = GCD(12,8);
    cout<<answer;
    return 0;
}