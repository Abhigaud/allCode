public class p2_leetcode42 {
    public static int rainwater(int height[]) {
        int n = height.length;

        int lmax = height[0];
        int rmax = height[n-1];

        int low = 1;
        int high = n-2;
        int ans = 0;
        while (low <= high) {
            lmax = Math.max(lmax,height[low]);
            rmax = Math.max(rmax, height[high]);

            if (lmax < rmax ) {
                ans += lmax -height[low];
                low++;
            }else{
                ans+= rmax - height[high];
                high--;
            }
        }
        return ans;




    }
    
    public static void main(String argd[]){
        int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(rainwater(height));
    }
}
