
def check_dict_case(dict):
    """
    Given a dictionary, return True if all keys are strings in lower 
    case or all keys are strings in upper case, else return False.
    The function should return False is the given dictionary is empty.
    Examples:
    check_dict_case({"a":"apple", "b":"banana"}) should return True.
    check_dict_case({"a":"apple", "A":"banana", "B":"banana"}) should return False.
    check_dict_case({"a":"apple", 8:"banana", "a":"apple"}) should return False.
    check_dict_case({"Name":"John", "Age":"36", "City":"Houston"}) should return False.
    check_dict_case({"STATE":"NC", "ZIP":"12345" }) should return True.
    """
    # your code here
    if len(dict) == 0:
        return False
    else:
        lower_keys = True
        upper_keys = True
        for key in dict:
            if type(key) != str:
                return False
            else:
                if key.islower():
                    upper_keys = False
                else:
                    lower_keys = False
        if lower_keys or upper_keys:
            return True
        else:
            return False

print(check_dict_case({"a":"apple", "b":"banana"}))
print(check_dict_case({"a":"apple", "A":"banana", "B":"banana"}))
print(check_dict_case({"a":"apple", 8:"banana", "a":"apple"}))
print(check_dict_case({"Name":"John", "Age":"36", "City":"Houston"}))
print(check_dict_case({"STATE":"NC", "ZIP":"12345" }))
