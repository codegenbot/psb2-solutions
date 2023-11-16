
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
    a = []
    for i in range(1, n+1):
        a.append(i*i - i + 1)
        #print(a[i])
    count = 0
    for i in range(1, n):
        for j in range(1, n):
            for k in range(1, n):
                if (i < j and j < k) and (a[i] + a[j] + a[k]) % 3 == 0:
                    count += 1
    return count

print(get_max_triples(5))
    """
