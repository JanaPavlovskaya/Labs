number = []


f = open("D:\LabS\Labs\lab_0\python\data1.txt")
for line in f.readlines():
    if(int(line) > 0 and int(line) < 32767):
        number.append(int(line))
        number.sort()
        b = 0
        print("Message " + str(number[0]) + "-" + str(number[len(number) - 1]), end="")
        for i in range(number[0],number[len(number) - 1]):
            if number.count(i) == False:
                b = b + 1
                if b == 1:
                    print(" net paketikov", end=" ")
                print(" " + str(i), end="")
        if b == 0:
            print(" cool",end="")
        print("")
