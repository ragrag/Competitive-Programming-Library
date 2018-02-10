

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (arr[m] == x) 
        return m;  

    if (arr[m] < x) 
        l = m + 1; 

    else
         r = m - 1; 
  }
 
  return -1; 
}

int BSfindFirst(int start, int end, int val) {
    while(start < end) {
        int mid = start + (end-start)/2;
        if(f(mid) < val)
			start= mid+1;
        else if(f(mid) > val)
			end  = mid-1;
        else   
			end  = mid;
    }
    return start;
}
 
int BSfindLast(int start, int end, int val) {
    while(start < end) {
        int mid = start + (end-start)/2;
        if(f(mid) < val)
			start= mid+1;
        else if(f(mid) > val) 
			end  = mid-1;
        else            
			start= mid;
    }
    return start;
}

//Binary unsorted
int main()
{
vector <pair<int,int> > ar;
int n;
cin>>n;

for (int i=0;i<n;i++)
{
    int x;
    cin>>x;
    ar.push_back({x,i});
}
vector < pair<int,int> > copy = ar;
sort(copy.begin(),copy.end());
int temp; 
cin>>temp;
int index = copy[lower_bound(copy.begin(),copy.end(),make_pair(temp,0) )- copy.begin()].second; //searching

cout << ar[index]; //access
return 0;
}
    