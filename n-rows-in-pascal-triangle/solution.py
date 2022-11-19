def generate(self, numRows):
    result=[]
    row = [1]
    result.append(row)

    for i in range(1, numRows):
        row = [1]
        j = 1

        while(j < i):
            row.append(result[i-1][j-1] + result[i-1][j])
            j+=1
        row.append(1)
        result.append(row)

    return result