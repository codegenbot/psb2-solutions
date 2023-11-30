vector<int> eat(int number, int need, int remaining){
    int totalEaten = number + need;
    int leftCarrots = remaining - need;
    if(leftCarrots < 0){
        leftCarrots = 0;
    }
    return {totalEaten, leftCarrots};
}