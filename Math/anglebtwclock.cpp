class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle=6*minutes;
        double hourangle=(hour%12)*30+(0.5*minutes);
        double diff=abs(hourangle-minangle);
        double mini=min(diff,360.0-diff);
        return mini;
    }
};