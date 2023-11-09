
def Strongest_Extension(class_name, extensions):
    """You will be given the name of a class (a string) and a list of extensions.
    The extensions are to be used to load additional classes to the class. The
    strength of the extension is as follows: Let CAP be the number of the uppercase
    letters in the extension's name, and let SM be the number of lowercase letters 
    in the extension's name, the strength is given by the fraction CAP - SM. 
    You should find the strongest extension and return a string in this 
    format: ClassName.StrongestExtensionName.
    If there are two or more extensions with the same strength, you should
    choose the one that comes first in the list.
    For example, if you are given "Slices" as the class and a list of the
    extensions: ['SErviNGSliCes', 'Cheese', 'StuFfed'] then you should
    return 'Slices.SErviNGSliCes' since 'SErviNGSliCes' is the strongest extension 
    (its strength is -1).
    Example:
    for Strongest_Extension('my_class', ['AA', 'Be', 'CC']) == 'my_class.AA'
    """

    class_name = class_name.lower()  # Change the case of the class name to lower
    extensions_strength = {}
    for extension in extensions:  # Change the case of the extensions to lower
        extensions_strength[extension.lower()] = extension.count(extension.upper()) - extension.count(extension.lower())  # Calculate the strength of the extension

    # Get the strongest extension
    strongest_extension = max(extensions_strength, key=extensions_strength.get)  # Get the strongest extension

    return class_name + '.' + strongest_extension  # Return the class name and the strongest extension


print(Strongest_Extension('my_class', ['AA', 'Be', 'CC']))
