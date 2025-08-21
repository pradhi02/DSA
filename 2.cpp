/*#include<iostream>
using namespace std; 
int main(){ 
    cout <<"Hello world"<<endl; 
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<"@";
        }
        cout<<endl;

    }
    return 0; 
}*/ 

#include<iostream>
using namespace std;

void printSquare(int n){
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			cout<<n;
		} 
		cout<<endl;
	}
} 

void print2(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
} 

void print3(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        } 
        cout<<endl;
    }
} 

void print4(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        } 
        cout<<endl;
    }
}  

//pattern5
void print5(int num){
    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            cout<<"*";
        } 
        cout<<endl;
    }
}   

void print6(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
} 

//pattern number 7
void print7(int num){
    for(int i=0;i<num;i++){
        //space 
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        } 
       
        //star 
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //space 
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }  

    
}
 

//pattern 8 
void print8(int num){
    for(int i=0;i<num;i++){
        //space 
        for(int j=0;j<i;j++){
            cout<<" ";
        } 
       
        //star 
        for(int j=0;j<2*num-(2*i+1);j++){
            cout<<"*";
        }

        //space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }  

    
} 

void print9(int num){ 
    //upper symmtery
    for(int i=0;i<num;i++){
        //space 
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        } 
       
        //star 
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //space 
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }   

//pattern 8 
    for(int i=0;i<num;i++){
        //space 
        for(int j=0;j<i;j++){
            cout<<" ";
        } 
       
        //star 
        for(int j=0;j<2*num-(2*i+1);j++){
            cout<<"*";
        }

        //space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }  
}
    

//pattern10
void print10(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    } 
    for(int i=1;i<=num;i++){
        for(int j=num-1;j>=i;j--){
            cout<<"*";
        } 
        cout<<endl;
    }

}

void print11(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){cout<<1;} //cout<<((i+j)%2==0 ?1:0)
            else{cout<<0;}
        }
        cout<<endl;  
    }
    
}
   //pattern12  
void print12(int num){ 

    //number code
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        } 
        cout<<endl;
    }  

    //code for space
    for(int i=0;i<num-2;i++){}


}

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/ 
	/*int t; 
	cin>>t; 
	for(int i=0;i<t;i++){
		int num; 
		cin>>num;
		printSquare(num);	
	}*/ 

    print2(3); 
    print3(5);
    print4(5); 
    print5(4); 
    print6(6); 
    print7(5);
    cout<<"differenet pattern"<<endl; 
    print8(5);
    
    print9(5);
    print10(5);
    print11(5); 
    //pattern12 
    print12(5);
}  





