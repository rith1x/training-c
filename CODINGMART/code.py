
def  isPatternInGrid(grid, patter):
    flog = 0
    for j in grid:
        for i in range (0,len(grid)):
            for k in patter:
                for n in range(0,len(patter)):
                    if 
            # for k in patter:
            #     for p in patter:
                    
            # print(i)
            # if i in j:
                # print(i, j)
                # print("yes\n")
                # flog+=1
    if (len(patter)== flog):
        return True;
    else:
        return False;


# def patFind():
grid = ["abcde","bckfe","qwe"]
patter = ["ac","qe"]
# grid = ["1234","5678","9101"]
# patter = ["23","89"]
print(isPatternInGrid(grid,patter))
# print(patFind())
