def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("_"*3, "-")
    return text