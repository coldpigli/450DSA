# include <bits/stdc++.h>
using namespace std;

	void bin_search(vector<int> arr, int search)
	{
		sort(arr.begin(),arr.end());
		int front = 0;
		int back = arr.size() -1 ;
		
		while(front<back){
			int mid = (front+back)/2;
			if(arr[mid]==search){
				cout<<"Element found at"<<mid;
				return;
			}
			else if(arr[mid]>search){
				back = mid-1;
			}
			else
			{
				front = mid+1;
			}
		}
		cout<<"Element not found";
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

		vector<int>arr={5,4,3,2,1};
		int search = 2;
		bin_search(arr, search);
        

	//**********************************************//
	return 0;
}