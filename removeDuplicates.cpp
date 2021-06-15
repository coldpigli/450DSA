# include <bits/stdc++.h>
using namespace std;


vector<vector<int>> triplets (vector<int> arr, int target_sum){

	//assuming array returned will always be sorted
	int n = arr.size();
	vector<vector<int>> full_result;
	for(int i=0; i<=n-3;i++)
	{
		int first = i+1;
		int last  = n-1;
		//two-pointer approach
		while(first<last){
			int currentsum = arr[i];
			currentsum += arr[first];
			currentsum += arr[last];

			if(currentsum == target_sum){
				full_result.push_back({arr[i],arr[first],arr[last]});
				first++;
				last++;
			}
			else if(currentsum>target_sum){
				last--;
			}
			else{
				first++;
			}
		}

	}
	return full_result;
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
		

		vector<int> arr = {1,2,3,4,5,6,7,8,15};
		int target = 18;
		vector<vector<int>> result = triplets(arr, 18);
		for(auto it: result){
			for(auto it2: it){
				cout<<it2<<" ";
			}
			cout<<endl;
		}

	//**********************************************//
	return 0;
}