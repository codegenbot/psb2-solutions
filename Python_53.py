Solve the following code contest problem: Python/53. Problem description: Complete the following code given the task description and function signature.. Currently, the code is ```python def add(x: int, y: int): return x + y x = int(input("Enter first number: ")) y = int(input("Enter second number: ")) result = add(x, y) print(f"The sum of {x} and {y} is {result}") ``` Modify the code as The issue is caused by an incorrect indentation in the `add` function. The function signature and implementation are not properly indented, resulting in a syntax error. To fix the code, simply indent the function signature and implementation correctly:
```python
def add(x: int, y: int):
    return x + y

# ... rest of the code ... ```. You must only return correct code. Remove any triple quotes, language name or explanations.