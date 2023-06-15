#include <bits/stdc++.h> 
#include<queue>
class node{
    public:
    int data;
    int row;
    int col;

    node(int data,int row,int col){
        this->data=data;
        this->row=row;
        this->col=col;
    }
};

class compare{
    public:
    bool operator()(node*a,node*b){
        return a->data > b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<node*,vector<node*>,compare>pq;

    for(int i=0;i<k;i++){
        node*temp=new node(kArrays[i][0],i,0);
        pq.push(temp);
    }
    vector<int>ans;
    while(!pq.empty()){
        node*temp=pq.top();
        ans.push_back(temp->data);
        pq.pop();

        if(temp->col+1 < kArrays[temp->row].size()){
            node* next=new node(kArrays[temp->row][temp->col+1],temp->row,temp->col + 1);
            pq.push(next);
        }
    }
    return ans;
    }
