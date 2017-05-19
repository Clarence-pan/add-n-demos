# Add-N in python:
# Requires: python
#     run: python ./add-n.py


addN = lambda (n): lambda (x): n + x

add2 = addN(2)

print("add2(3) => " + str(add2(3)))

