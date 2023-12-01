vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int leftCarrots = max(totalCarrots - remaining, 0);
    
    return {eatenCarrots, leftCarrots};
}