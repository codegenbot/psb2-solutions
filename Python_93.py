
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('I DoNt KnOw WhAt tO WrItE')
    'k dQnT kNqW wHcT Tq wRkTg'
    >>> encode('a')
    'C'
    """
    message = message.lower()
    message = message.replace('a', 'c').replace('e', 'g').replace('i', 'k').replace('o', 'q').replace('u', 'w').replace('b', 'd').replace('f', 'h').replace('j', 'l').replace('n', 'p').replace('r', 't').replace('v', 'x').replace('z', 'b')

    return message.upper()
