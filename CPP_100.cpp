vector<int> levels;
levels.push_back(n);
for(int i = 1; i < n; i++){
    if(n % 2 == 0){
        levels.push_back(n + i);
    }
    else{
        levels.push_back(n + i + 1);
    }
}
return levels;