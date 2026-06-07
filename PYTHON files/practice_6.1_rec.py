def show(n):
    if n == 0:
        return 1
    return n * show(n - 1)
print(show(5))


def show(n):
     if n == 0:
        return 
     print(n)
     show(n - 1)
show(5)

