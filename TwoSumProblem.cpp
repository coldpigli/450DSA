# include <bits/stdc++.h>
using namespace std;


vector<int> solution(vector<int> arr, int target){

	unordered_map<int,int> ss;

	vector<int> result;

	for(int i = 0; i<arr.size(); i++)
	{
		int fin = target-arr[i];
		if(ss.find(fin)!=ss.end())
		{
			result.push_back(ss[fin]);
			result.push_back(i);
			return result;
		}

		ss[arr[i]] = i;

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

		vector<int>arr = {1,2,3,4,5,6};
		vector<int>result;
		int target = 9;
		result = solution(arr,target);
		cout<<result[0]<<" "<<result[1];		



	//**********************************************//
	return 0;
}