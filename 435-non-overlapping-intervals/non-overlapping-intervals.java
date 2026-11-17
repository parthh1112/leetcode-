class Solution {
    public int eraseOverlapIntervals(int[][] arr) {
        Arrays.sort(arr, new Comparator<int []>(){
            @Override
            public int compare(int a[],int []b){
                if(a[1] == b[1]){
                    return Integer.compare(a[0], b[0]);
                }
                else{
                    return Integer.compare(a[1], b[1]);
                }
            }
        });
        for(var i : arr)System.out.println(i[0] + " " + i[1]);
        int cnt = 0;
        int pre = arr[0][1];
        for(int i=1;i<arr.length;i++){
            if(pre > arr[i][0]){
                cnt++;
            }
            else {
                pre = arr[i][1];
            }
        }
        return cnt;
    }
}