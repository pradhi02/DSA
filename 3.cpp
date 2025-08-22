//stl in cpp
#include<iostream>
#include<utility>
#include<vector> 
#include<list>
#include<queue>


using namespace std;  
void explainPair(){
    pair<int, int>p={1,2}; 
    cout<<p.first<<" "<<p.second; 
    cout<<endl;

    pair<int, pair<int,int>>k={4,{2,3}}; 
    cout<<k.first<<" "<<k.second.first;
    cout<<" "<<k.second.second;
    cout<<endl;

    pair<int, int> arr[]={{1,2}, {3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second; cout<<endl;//1,2
    cout<<arr[1].first<<" "<<arr[1].second; cout<<endl;//3,4
    cout<<arr[2].first<<" "<<arr[2].second; //5,6 
    cout<<endl;



} 


void expainVectors(){
    vector<int> v; 
    v.push_back(10); //addes 10 at the back 
    v.emplace_back(12); //directelty creats the object in the place 
    //pair in the vector  
    //create vecytor of a pair 
    vector<pair<int, int>>vec; 

    vec.push_back({1,2}); //if we want to insert a pair in the vector 
    vec.emplace_back(4,5); 
    


}
int main(){
    cout<<"hello boy"; 
    explainPair();
      

    vector<int>vec; 
    vec.push_back(12); 
    vec.push_back(13);
    vec.push_back(16); 
    vec.push_back(18);
    vec.push_back(18);
    vec.push_back(15); 
    vec.push_back(28); 
 
 

    vector<int>::iterator it = vec.begin(); 
    cout<<*vec.begin(); //dereferencing operator   
     cout<<endl;
    for(vector<int>::iterator it=vec.begin(); it!=vec.end();it++){
        cout<< *it; 
     } 
     cout<<endl;
        
        for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        } 
        cout<<endl;
     vec.erase(vec.begin()+1); //giving the address location of the element 


     for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        } 
       cout<<endl;
        vec.erase(vec.begin()+3,vec.end());
         
        for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        } cout<<endl;
      vec.insert(vec.begin()+1,120);
      for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        }  

        vec.insert(vec.begin()+2,3,110);
        cout<<endl; 

        for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        }  
      
      cout<<endl;
        //insertion of a vect0r to another vector 
        vector<int>copy(3,23); //creaying anew veryor with 3 element , that are 23 
        for(vector<int>::iterator ap=copy.begin();ap!=copy.end();ap++){
            cout<< *ap<<" " ;
        }
  //now copying the vecyor 
    vec.insert(vec.begin(),copy.begin(),copy.end()); 
     for(auto it=vec.begin(); it!=vec.end(); it++){
            cout<< *it<<" ";
        }  
      
      cout<<endl; 

      vec.insert(vec.begin()+1,copy.begin(),copy.end());
     for(auto it=vec.begin();it!=vec.end();it++){
          cout<<*it<<" "; 
     } 
       cout<<endl;
     vec.insert(vec.begin()+2,3,100); 
     //vec.insert(vec.begin()+1,copy.begin(),copy.end());
     for(auto it=vec.begin();it!=vec.end();it++){
          cout<<*it<<" "; 
     } 
cout<<endl;
//list stl  

cout<<"LIST STL STARTS FROM HEREEE"; 
list<int> li; 
li.push_back(12);
li.push_back(17);
li.push_back(19);
li.push_back(22); 
for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" ";
} 
cout<<endl;
cout<<li.empty(); //0-false 
cout<<li.size();//4 size of the list 
li.pop_back();   
cout<<endl;
for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" ";
}   
cout<<endl;
li.pop_front();
for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" ";
}   
   cout<<endl;
li.emplace_front(13); 
for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" ";
}  
cout<<endl; 
li.emplace_back(45);
li.emplace_back(45);
li.emplace_back(45);
li.emplace_back(45);


for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" ";
}  
 
cout<<endl; 
li.remove(45);  //rmeoves all the ocurrance of 45 from the list 

for(auto it=li.begin();it!=li.end();it++){
    cout<< *it<<" "<<"TEST";
}    
cout<<endl;
li.clear();  //now the list emeplety are all deleted 
li.push_front(8); //now only 8 is there in the list 
for(auto it=li.begin();it!=li.end();it++){
 cout<< *it<<" ";
}    
cout<<endl;
cout<<li.size();
 cout<<endl;

//Dqueue  
//deuque starts from here  
//queue 
queue<int>q;  
q.push(1);
q.push(2);
q.emplace(3); 
cout<<q.back(); cout<<endl;
cout<<q.front(); 
cout<<endl;
while(!q.empty()){
    cout<<q.front()<<" "; //assssing the fornt element 
     q.pop(); //removing and popping the element 
} 
cout<<endl; 

//priority queueuue 
priority_queue<int>pq; 
pq.push(6);
pq.push(18);
pq.push(27);
pq.push(3);
pq.push(4); 
cout<<pq.top(); 
pq.pop(); cout<<endl;
cout<<pq.top();




    return 0; 
}