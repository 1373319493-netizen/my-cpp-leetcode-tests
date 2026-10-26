int hammingDistance(int x, int y) {
    int x1=x;
    int y1=y;
    int sum=0;
    while(x1!=0||y1!=0){
        sum+=abs((x1&1)-(y1&1));
        x1=x1>>1;
        y1=y1>>1;
    }
    return sum;
}