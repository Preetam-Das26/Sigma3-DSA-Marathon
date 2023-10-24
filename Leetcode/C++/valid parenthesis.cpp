class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int c=0;

        if(s.length()%2==0)
        for(int i=(s.length()-1);i>=0;i--)
        {
           if(s[i]=='}'||s[i]==']'||s[i]==')')
           st.push(s[i]);
           else
           {
               if(st.size()==0)
               st.push(s[i]);
               else if(s[i]=='{'&&st.top()=='}')
               st.pop();
               else if(s[i]=='('&&st.top()==')')
               st.pop();
               else if(s[i]=='['&&st.top()==']')
               st.pop();
               else
               return false;

           }


        }
        else
        return false;



        if(st.size()>0)
        return false;
        else
        return true;












    }
};
