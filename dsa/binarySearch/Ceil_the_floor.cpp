#include <bits/stdc++.h>
using namespace std ; 

pair<int, int> getFloorAndCeil(int arr[], int n, int target) {
	  
     pair<int,int> p ;

	 sort(arr,arr+n) ;
     
	 int floor = -1 ;
	 int ceil = -1 ; 

	  int start = 0 ; 
	  int end = n-1 ;

	  while(start<= end) {
		  int mid = start + (end-start)/2 ; 
		  if(arr[mid] == target) {
			  floor = arr[mid] ;
			  ceil = arr[mid] ;
			  break ; 
		  }
		  if(target >= arr[mid]){
              floor = arr[mid];
			  start = mid +1 ;
		  }
		  if (target <= arr[mid] ){
			  ceil = arr[mid] ;
			  end = mid -1 ;
		  }
	  } 

	  p.first = floor ;
	  p.second = ceil ;

	  return p ;


}

int main(){

return 0 ; 
}