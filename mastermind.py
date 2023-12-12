def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_dict = {}
    guess_dict = {}
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_dict[code[i]] = code_dict.get(code[i], 0) + 1
            guess_dict[guess[i]] = guess_dict.get(guess[i], 0) + 1
    
    for color in guess_dict:
        white_pegs += min(code_dict.get(color, 0), guess_dict[color])
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])