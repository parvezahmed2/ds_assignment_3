#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    stack<int> st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);

    }
    
    queue<int> q;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    bool  flag=true;

    if(m != n){
        flag=false;
    }
    else{
        for(int i=0; i<n; i++){
            int stac=st.top();
                st.pop();
             int qu=q.front();
                q.pop();

                if(stac != qu){
                    flag=false;
                    break;
                }   

        }
    }
    if(flag){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}