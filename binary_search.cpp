# include <bits/stdc++.h>
using namespace std;

	string defanging(string s){
		string result = "";
		for(int i = 0; i<s.size(); i++){
			if(str[i]=='.')
			{
				result.push_back("[.]");
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

		string s = "1.1.1.1";
		string res;
		res = defanging(s);
		cout<<res;

        

	//**********************************************//
	return 0;
}