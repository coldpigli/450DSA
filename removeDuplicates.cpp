# include <bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& nums) {
        
        set<int, greater<int>> s1;
        for(auto it: nums){
            s1.insert(it);
        }


        
        nums.clear();
        for(auto it: s1){
        	
            nums.push_back(it);
        }
        
        return nums.size();
        
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
		vector<int> arr = {1,1,2,3,4,4,5};
		int k = removeDuplicates(arr);
		cout<<k;


	//**********************************************//
	return 0;
}