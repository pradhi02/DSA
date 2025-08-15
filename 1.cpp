/*#include<iostream>
using namespace std;
int main(){
    cout<<"HEY PRADHI";
    int a=12;
    long b= 3443;
    long long c = 33478967834;
    cout<<a<<b<<c<<"\n";
    string s;
    getline(cin,s);
    cout<<s;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

    /*cout<<"Helloo world";
    int age;
    cout<<"enter the age of the user";
    cin>>age;
    if(age<18){
        cout<<"not eligible";
}
else if(age>=18 && age<=54){
    cout<<"eligible for job";
}
else if(age>=55 && age<=57){
    cout<<"eligivle for the job but returmenet soon";
}
else{
    cout<<"retirmemenrt time dont come";
}*/

// switch case statements
/*int age;
cin>>age;
switch(age){
    case 1:
    cout<<"MONDAY";
    break;
    case 2:
    cout<<"TUESDAY";
    break;
    case 3:
    cout<<"WEDNESDAY";
    break;
    case 4:
    cout<<"THURSDAY";
    break;
    case 5:
    cout<<"FRIDAY";
    break;
    case 6:
    cout<<"SATURDAY";
    break;

    default:
    cout<<"nothing is exacutedddd falae invalid";

}
cout<<"if executed this will be exectued";

    return 0;
} */

/*#include<iostream>
using namespace std;
int main(){
    cout<<"hey world";
    string s="heyyyylollaa im crazzy";
    cout<<s;
    for(int i=0;i<10;i++){
        cout<<"helllo world"<<endl;
    }

    for(int j=5;j>0;j=j-5){
        cout<<j<<endl; ///dirrctly teh  value of i will be dexresed by 5;
    }

    int k=2;
    while(k<=10){
        cout<<k<<endl;
        k++;
    }

    int N=5;
    do{
        cout<<N;
        N++;
    } while(N<20);


    return 0;
} */
/*
#include <iostream>
using namespace std;
void printHello()
{
    cout << "HELLO GUYS WHATSAPPPP" << endl;
    ;
}
void printName(string name)
{
    cout << name;
}

int printSum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
} 

void printNum(int &a , int &b ){
    cout<<a<<b<<endl;  
    a=a+5; b=b+5; 
    cout<<a<<b; 

} 

int main()
{
    printHello();        // void funcation
    printName("Pradhi"); // parametrized function
    cout << printSum(3, 4) << endl;
    int minimum = min(10, 23);
    cout << minimum << endl; // inbuilt funcation 
    int num1=12; int num2=14;
    printNum(num1,num2); 
    cout<<num1;
    return 0;
}*/ 

#include<iostream>
using namespace std;  
void change(int &x){
    x=20;
} 

void changeArr(int array[], int size){
    array[0]+=10;
}
int main(){  

    int arr[5]; 
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }  
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    

    changeArr(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    

    int num=5;
    cout<<num<<endl; //here the original value remains unchanged 
    change(num); //here we call the fucnation and here the original valus is changed since we used pass by refernece and function has changed the original value. 
    cout<<num<<endl;
    return 0; 
}

