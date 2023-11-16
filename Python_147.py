
def get_max_triples(n):
    """
    You are given a positive integer n. You have to create an integer array a of length n.
        For each i (1 ≤ i ≤ n), the value of a[i] = i * i - i + 1.
        Return the number of triples (a[i], a[j], a[k]) of a where i < j < k, 
    and a[i] + a[j] + a[k] is a multiple of 3.

    Example :
        Input: n = 5
        Output: 1
        Explanation: 
        a = [1, 3, 7, 13, 21]
        The only valid triple is (1, 7, 13).
    def get_max_triples(n):
        # Write your code here
        pass
    a = [i*i-i+1 for i in range(1, n+1)]
    print(a)
    count = 0
    for i in range(len(a)):
        for j in range(i+1, len(a)):
            for k in range(j+1, len(a)):
                if (a[i] + a[j] + a[k]) % 3 == 0:
                    count += 1
    return count


def check(get_max_triples):
    assert get_max_triples(1) == 0
    assert get_max_triples(2) == 0
    assert get_max_triples(3) == 0
    assert get_max_triples(4) == 0
    assert get_max_triples(5) == 1
    assert get_max_triples(100) == 53361


if __name__ == "__main__":
    check(get_max_triples)
    """
