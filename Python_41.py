

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: Complete the following code given the task description and function signature.
    # You may add additional helper functions as needed.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any global variables.
    # You may not use any mutable variables such as lists or dictionaries as default arguments.
    # You may not use any recursive functions.
    # You may not use any sort functions.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists and dictionaries.
    # You may not

    This function outputs the number of such collisions.
    """
