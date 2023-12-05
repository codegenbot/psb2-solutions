```
def get_camel_case(my_string):
    my_string = my_string.title()
    my_string = my_string.replace(" ", "")
    return my_string

# Test cases
assert get_camel_case("") == ""
assert get_camel_case("hello world") == "HelloWorld"
assert get_camel_case("the quick brown fox") == "TheQuickBrownFox"
```