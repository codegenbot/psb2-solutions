vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // add the first element of the sequence

    if(n == 0){
        return sequence; // return the sequence with only the first element
    }

    sequence.push_back(1 + n / 2); // add the second element of the sequence

    if(n == 1){
        return sequence; // return the sequence with the first two elements
    }

    sequence.push_back(sequence[1] + sequence[0]); // add the third element of the sequence

    if(n == 2){
        return sequence; // return the sequence with the first three elements
    }

    for(int i = 3; i <= n; i++){
        int nextElement;

        if(i % 2 == 0){
            nextElement = 1 + i / 2;
        } else {
            nextElement = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
        }

        sequence.push_back(nextElement); // add the next element of the sequence
    }

    return sequence; // return the complete sequence
}