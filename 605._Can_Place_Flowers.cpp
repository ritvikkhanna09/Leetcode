bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int end = flowerbed.size()-1;
        for(int i = 0,count = 1;i <= end && n > 0;i++){
            count = flowerbed[i]?0:count+1;
            if(3 == count || (2 == count && i == end)){
                n--;
                count = 1;
            }
        }
        return 0 == n;
    }


