def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(1 for digit in string if int(digit) % 2 != 0),
        i,
        string,
        i) for i, string in enumerate(lst)]