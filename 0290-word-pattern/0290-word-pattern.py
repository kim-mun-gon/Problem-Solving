class Solution(object):
    def wordPattern(self, pattern, s):
        word = list(pattern)
        s_split = s.split()

        if len(word) != len(s_split):
            return False

        for i in range(len(word)):
            for j in range(i+1, len(word)):
                if word[i] == word[j]:
                    if s_split[i] != s_split[j]:
                        return False
                else:
                    if s_split[i] == s_split[j]:
                        return False

        return True