class Solution {
    void f(int []arr, int t, int i, int sum, List<Integer> help, List<List<Integer>> ans){
        if(sum > t || i == arr.length)return ;
        if(sum == t){
            ans.add(new ArrayList<>(help));
            return ;
        }
        help.add(arr[i]);
        f(arr, t, i, sum + arr[i], help, ans);
        help.removeLast();
        f(arr, t, i+1, sum, help, ans);


    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> help = new ArrayList<>();
        f(candidates, target, 0, 0, help, ans);
        return ans;
    }
}