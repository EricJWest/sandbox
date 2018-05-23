# for_test2.py

""" a more complicated for loop test """

print 'starting...'

listA = [1,2,3,4,5]
listB = [3,5,6]

for i in range(len(listA)-1):
  for j in range(len(listB)-1):
    startA = listA[i]
    endA = listA[i+1]
    startB = listB[j]
    endB = listB[j+1]
    print ((startA,endA),(startB,endB))

print 'finished!'
