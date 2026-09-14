class Solution {
    int commonArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        int commonX = max(0, min(ax2, bx2) - max(ax1, bx1));
        int commonY = max(0, min(ay2, by2) - max(ay1, by1));

        return commonX * commonY;
    }
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int axl = abs(ax1 - ax2);
        int ayl = abs(ay1 - ay2);
        int bxl = abs(bx1 - bx2);
        int byl = abs(by1 - by2);

        return axl*ayl + bxl*byl - commonArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    }
};