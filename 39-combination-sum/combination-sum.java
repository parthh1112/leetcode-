class Solution {
    void f(int []arr, int t, int i, int sum, List<Integer> help, List<List<Integer>> ans){
        if(i == arr.length || sum > t)return ;
        if(sum == t){
            ans.add(new ArrayList<>(help));
            return ;
        }
        f(arr, t, i+1, sum, help, ans);
        help.add(arr[i]);
        f(arr, t, i, sum + arr[i], help, ans);
        help.removeLast();


    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> help = new ArrayList<>();
        f(candidates, target, 0, 0, help, ans);
        return ans;
    }
}