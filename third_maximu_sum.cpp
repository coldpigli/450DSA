# include <bits/stdc++.h>
using namespace std;


int thirdMax(vector<int>& nums) {
        set<int> S;
        for(int i : nums) S.insert(i);
        
        if(S.size() < 3) return *--S.end();
        
        auto it = S.end();
        for(int i=0;i<3;++i) it--;
        
        return *it;
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
		
		vector<int> nums = {1,2,3,4,5};
		cout<< thirdMax(nums);



        

	//**********************************************//
	return 0;
}