# https://interviewing.io/recordings/Python-Google-6
# write a function that compares whether two strings are similar
# in a case insensitive manner

def case_insensitive_compare(s1, s2):
    dist = 0
    for i in min(range(len(s1)), range(len(s2))):
        if not s1[i].upper() == s2[i].upper():
            dist += 1
            if dist > 1:
                return False
    return not abs(len(s1) - len(s2)) + dist > 1 

assert case_insensitive_compare("a", "a") == True
assert case_insensitive_compare("a", "A") == True
assert case_insensitive_compare("A", "a") == True
assert case_insensitive_compare("Aa", "aA") == True
assert case_insensitive_compare("bb", "BB") == True
assert case_insensitive_compare("BB", "bb") == True
assert case_insensitive_compare("abc", "ABC") == True
assert case_insensitive_compare("abc", "dev") == False
assert case_insensitive_compare("ABC", u"dev") == False
assert case_insensitive_compare("abc", "acc") == True
assert case_insensitive_compare("ABC", "acc") == True
assert case_insensitive_compare("abc", "ABCD") == True
assert case_insensitive_compare("abc", "AB") == True
assert case_insensitive_compare("abc", "BB") == False
assert case_insensitive_compare("abc", "ABCDE") == False
assert case_insensitive_compare("abcde", "azzde") == False
