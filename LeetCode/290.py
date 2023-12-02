'''class Solution(object):
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

        return True'''

class Solution(object):
    def wordPattern(self, pattern, s):
        words = list(pattern)
        s_splits = s.split()

        if len(words) != len(s_splits):
            return False
        
        d = {}
        for word, s_split in zip(words, s_splits):
            if word not in d:
                if s_split not in d.values():
                    d[word] = s_split
                else:
                    return False
            else:
                val = d[word]
                if s_split != val:
                    return False
                else:
                    continue
        return True