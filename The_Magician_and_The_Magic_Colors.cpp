  #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
      int t;
      cin>>t;
      while (t--)
      {
        int q;
        cin>>q;
        string str;
        cin>>str;
        stack<char> st;
        for(char c:str){
           
           if (!st.empty() && st.top() == c)
            {
                st.pop();
            }
            else if (!st.empty())
            {
                char tcolor = st.top();
                if ((tcolor == 'R' && c == 'B') || tcolor == 'B' && c == 'R')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='P'){
                        st.pop();   
                    }
                   else{
                     st.push('P');
                   }
                }
                else if ((tcolor == 'R' && c == 'G') || tcolor == 'G' && c == 'R')
                {
                    st.pop();
                    if( !st.empty() && st.top()=='Y'){
                        st.pop();
                    }
                    else{
                        st.push('Y');
                    }
                    
                }

                 else if ((tcolor == 'B' && c == 'G') || tcolor == 'G' && c == 'B')
                {
                    st.pop();
                    if( !st.empty() && st.top()=='C'){
                        st.pop();
                    }
                    else{
                        st.push('C');
                    }
                    
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }

        stack<char> st2;
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();

        }
        


        while (!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
        
         
         
      }
      
     
      
     
      
      
        
        
        
    
     
     return 0;
 }