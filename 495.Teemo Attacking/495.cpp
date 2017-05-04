class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poisonDuration = 0;
        if(timeSeries.size() > 0) {
            poisonDuration += duration;
            int countDown = duration;
            for(int i = 1; i < timeSeries.size(); i++) {
                countDown = timeSeries[i] - timeSeries[i - 1];
                poisonDuration += min(countDown, duration);
            }
        }
        return poisonDuration;
    }
};//59ms
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=0,last=-1;
        for(int i=0;i<timeSeries.size();i++){
            if(last>=timeSeries[i]){
                total+=duration-(last-timeSeries[i]);
            }
            else{
                total+=duration;
            }
            last=timeSeries[i]+duration;
        }
        return total;
    }
};//79ms
