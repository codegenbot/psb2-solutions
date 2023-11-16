
def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.

    Example:

        Input: arr = [111,21,3,4000,5,6,7,8,9], k = 4
    # TODO: Write your code here
    return 0


def main():
    print("Sum of elements with at most 2 digits from the first k elements: " +
          str(add_elements([111, 21, 3, 4000, 5, 6, 7, 8, 9], 4)))
    print("Sum of elements with at most 2 digits from the first k elements: " +
          str(add_elements([111, 21, 3, 4000, 5, 6, 7, 8, 9], 9)))


main()
        Output: 24 # sum of 21 + 3

    Constraints:
        1. 1 <= len(arr) <= 100
        2. 1 <= k <= len(arr)
    """
