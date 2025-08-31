//stl in cpp
#include<iostream>
#include<utility>
#include<vector> 
#include<list>
#include<queue>
#include<set>
#include<iterator>
#include<unordered_set>
#include<map>
#include<algorithm>

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


bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second) return true; 
    if(p1.second > p2.second) return false; 
    //when both the second are same 
    if(p1.first > p2.first) return true; 
    else return false;
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

//maps in cpp 
set<int>m; 
m.insert(2);  //{2}
m.insert(4); //{2,4}
m.insert(6); //2,4,6
m.insert(3);  //{2,3,4,6}
m.insert(2);//only stores uniques data in theselves 
//stores in a stored order 
auto i=m.find(4); //return an iterator which points to this 4  

int cnt=m.count(1);
cout<<cnt; //1 existe, 0 not exist 

//multiset 


cout<<"MULTISET STARTS HERE";
multiset<int>mu;  
cout<<endl;
mu.insert(12);
mu.insert(13);
mu.insert(12);
mu.insert(19); 
mu.insert(22);
mu.insert(12);
mu.insert(12); 
//mu.erase(12); //erases all the orrcurances of 12 
//mu.erase(mu.find(12),mu.find(12)+2);

int cut=mu.count(12); //count gives the number of 12 in multiset 
cout<<cut; //HERE WE WILL GET THE ANS 

//mu.erase(mu.find(12)); 

mu.erase(mu.find(12), std::next(mu.find(12), 2)); //erases two occurance of 12 in the multiset 
cut=mu.count(12); //reinitializing the cut value;
cout<<cut; 

cout<<endl; 

cout<<"UNORDERED SET STARTS HERE"; 

unordered_set <int> un ={2,3,9,01,10};
//constant time O(1);  

cout<<endl;
cout<<"map starts here";
map<int, int>ma; //key and  alue associated withe the key 

ma.insert({1,10}); 
ma.insert({2,12});
ma.insert({3,23}); 
//ma.emplace({4,24}); .//sytrax error 
ma.emplace(4,18);  

for(auto it :ma){
    cout<< it.first<<" "<<it.second<<endl;
} 

cout<<ma[1]; //this will print 10
cout<<ma[5]; //this will give output 0 since no number is here
cout<<endl;
//algorithms we have to learn 

int arr[]={34,48,21,1,23,3}; 

//int n= arr.size();
sort(arr,arr+6);
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<" "; } 

cout<<endl;
cout<<"new array function compatator";
cout<<endl;

    int arr2[]={34,23,84,19,383,983,12,1}; 
    sort(arr2,arr2+8,greater<int>());
    for(int i=0;i<8;i++)
{
    cout<<arr2[i]<<" "; }  
    cout<<endl;





    //pair usied and trying compare function 
vector<pair<int,int>>a={{1,2},{3,4},{6,2},{4,6}}; 

sort(a.begin(),a.end(),comp);

for(auto it=a.begin() ; it!=a.end();it++){
    cout<< it->first << it->second <<" ";
} 


int pra=18; 
int pc=__builtin_popcount(pra);
cout<<pc;
cout<<endl;
long long pradhi=273456789345678;
long prad=__builtin_popcountll(pradhi); 
cout<<prad;


cout<<endl; 

string s="2342"; 

do{
    cout<<s<<" ";
} 
while(next_permutation(s.begin(),s.end())); //printas all the permuatation of string 

int maxi= *max_element(arr,arr+6);
cout<<maxi;

return 0;  

}