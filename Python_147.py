
def get_value(n):
    return n * n - n + 1

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
    """
        The only valid triple is (1, 7, 13).
    arr = [get_value(i) for i in range(1, n+1)]
    arr_sum = 0
    for i in range(0, n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                arr_sum += arr[i] + arr[j] + arr[k]
                if arr_sum % 3 == 0:
                    return arr[i], arr[j], arr[k]
    return 0

print(get_max_triples(5))
