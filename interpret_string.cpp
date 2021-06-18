# include <bits/stdc++.h>
using namespace std;

	
        
        string interpret(string str){
        
        string result;
        for(int i =0; i<str.size(); i++)
        {
            if(str[i]=='('&&str[i+1]==')'){
                result.append("o");
                i+=1;
            }
            else if(str[i]=='('&&str[i+1]=='a')
            {
                result.append("al");
                i+=3;
            }
            else
            {
                result.push_back(str[i]);
            }
        }
        return result;
        
    }


int main()
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);
		//for writing output to output.txt
		freopen("output.txt","w",stdout);
	#endif
		
	//**********************************************//

		string s = "G()(al)";
		string r = interpret(s);
		cout<<r;

        

	//**********************************************//
	return 0;
}