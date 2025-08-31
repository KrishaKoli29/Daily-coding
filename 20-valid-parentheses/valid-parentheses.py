class Solution(object):
    def isValid(self, s):
        stack = []

        for ch in s:
            if ch in "({[":
                stack.append(ch)
            elif ch in ")}]":
                if not stack:  #empty stack 
                    return False
                top = stack[-1]
                if (ch == ')' and top == '(' or
                    ch == '}' and top == '{' or
                    ch == ']' and top == '['):
                    stack.pop()
                else:
                    return False
        
        return not stack
        