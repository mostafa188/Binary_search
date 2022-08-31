#include<bits/stdc++.h>
#define nl endl
using namespace std;
void binary_search(int ara[],int n,int item ){
	vector <int > v ;
	// leniar search 
	int l,r,mid;
	bool cnt = true;
	l =0;
	r= n-1;

	while(l<r){
	    mid = (r+l)/2;

	    if(ara[mid] == item ){
		cnt = false;
		cout<<"Index is : "<< mid;
	    } 

	    if(ara[mid] < item) l = mid+1;
	    else
	    r = mid-1;
	}
	if(cnt) cout<< item <<" is not found !!"<<nl;
}
int main(){
        int n,item;
        vector < int > v;
        cin >> n>>item ;

        int ara[n+1];
        for(int i=0 ; i< n; i ++){
	      cin >> ara[i];
        }
        sort(ara,ara+n);

        binary_search(ara,n,item);
        return 0;
}
