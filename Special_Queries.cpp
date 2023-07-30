#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    queue<string> q;
   while (n--)
   {    
    int m;
    cin>>m;
      if(m==0){
        string qu;
        cin>>qu;
        q.push(qu);
    }
    else if(m==1){
        if(q.empty()){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<q.front()<<endl;
            q.pop();
        }
    }
   }
   
    return 0;
}