#include<queue>
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	// priority_queue<int>pq;
	// priority_queue<int,vector<int>,greater<int>>minHeap;
	vector<int>ans;
    // // for(int i=0;i<k;i++){
    // //     pq.push(arr[i]);
    // // }
	// // for(int i=k;i<n;i++){
	// // 	if(arr[i]<pq.top()){
	// // 		pq.pop();
	// // 		pq.push(arr[i]);
	// // 	}
	// // 	else{
	// // 		pq.push(arr[i]);
	// // 	}
	// // }
	// // int smallest=pq.top();
	// for(int i=0;i<n;i++){
	// 	minHeap.push(arr[i]);
	// }
    // for(int i=0;i<k-1;i++){
    //     minHeap.pop();

    // }
	// for(int i=0;i<n;i++){
	// 	pq.push(arr[i]);
	// }
    // for(int i=0;i<k-1;i++){
    //     pq.pop();

    // }
	// // int largest=pq.top();
	// ans.push_back(minHeap.top());
	// ans.push_back(pq.top());
    // return ans;
	// int i,key;
    //     for(int j=1;j<arr.size();j++){
    //         key=arr[j];
    //         i=j-1;

    //         while(i>=0 && arr[i]>key){
    //             arr[i+1]=arr[i];
    //             i--;
    //         }       
    //         arr[i+1]=key;
    //         }
	sort(arr.begin(),arr.end());
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
    return ans;
}
