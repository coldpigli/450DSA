# include <bits/stdc++.h>
using namespace std;

	 
        
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(!(ruleKey.compare("type"))){
            for(auto item: items){
                if(!item[0].compare(ruleValue)){
                    count++;
                }
            }
        }
        else if(!(ruleKey.compare("color"))){
            for(auto item: items){
                if(!(item[1].compare(ruleValue))){
                    count++;
                }
            }
        }
        else{
            for(auto item: items){
                if(!(item[2].compare(ruleValue))){
                    count++;
                }
            }
        }
    return count;
    }
};

int main()
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);
		//for writing output to output.txt
		freopen("output.txt","w",stdout);
	#endif
		
	//**********************************************//

		

        

	//**********************************************//
	return 0;
}