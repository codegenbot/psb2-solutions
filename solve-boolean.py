```python
def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = expression.replace('&', ') and (').replace('|', ') or (')
    expression = '(' + expression + ')'
    return eval(expression)
```