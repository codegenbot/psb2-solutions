
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
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """
    message = message.lower()
    message = message.replace('a', 'd')
    message = message.replace('e', 'h')
    message = message.replace('i', 'l')
    message = message.replace('o', 'r')
    message = message.replace('u', 'y')

    return message.upper()
