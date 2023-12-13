```python
import collections

def mastermind(code, guess):
    if code == guess:
        return len(code), 0
    
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    white_pegs = 0
    for color in code_count:
        white_pegs += min(code_count[color], guess_count[color])
        
    return white_pegs, black_pegs
```