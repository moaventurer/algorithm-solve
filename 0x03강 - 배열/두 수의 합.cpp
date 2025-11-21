#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int X;
    cin >> X;

    if(n == 1){
        cout << 0;
        return 0;
    }

    sort(arr, arr+n, less<int>());

    int count=0;
    
    for(int cur_idx=0; cur_idx<n-1; cur_idx++){
        int s=cur_idx+1;
        int e=n;
    
        while(s<e){
            int mid = (s+e)/2; 
            // (s+e)/2 => 0.5는 내림이 됨 
            //  -> e = s+1일 경우, mid == s 와 같아짐. 
            //      -> mid(검색할 수 있는 수)의 범위는 [s, e)임. ****
            //          -> s=0, e=배열인덱스+1 이어야 mid가 [0,배열인덱스] 범위만큼 순회할 수 있음.
            int sum = arr[cur_idx] + arr[mid];
            if(sum == X){
                count++;
                break;
            }
            if(sum < X){
                s = mid+1; // mid보다 큰 숫자여야 한다는게 밝혀졌으므로, 아예 검색 범위에서 제거하기 위해 s=mid+1로 둠.
            } else{
                e = mid; // mid는 이미 찾던 숫자가 아니라는게 밝혀졌으므로, 아예 검색 범위에서 제거하기 위해 e=mid로 둠.
            }
        }
    }

    cout << count;
    return 0;
}