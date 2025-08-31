class Solution(object):
    def value(self, r):
        if r == 'I': return 1
        if r == 'V': return 5
        if r == 'X': return 10
        if r == 'L': return 50
        if r == 'C': return 100
        if r == 'D': return 500
        if r == 'M': return 1000
        return -1

    def romanToInt(self, s):
        num = 0
        i = 0

        while i < len(s):
            s1 = self.value(s[i])

            if i + 1 < len(s):
                s2 = self.value(s[i + 1])

                if s1 >= s2:
                    num += s1
                    i += 1

                else:
                    num += (s2 - s1)
                    i += 2
            else:    
                num += s1
                i += 1

        return num
        
        