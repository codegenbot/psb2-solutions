from collections import Counter

def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = Counter(code)
    guess_counts = Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_counts[code[i]] -= 1
            guess_counts[guess[i]] -= 1
    
    for color in guess_counts:
        white_pegs += min(code_counts[color], guess_counts[color])
        
    return white_pegs, black_pegs