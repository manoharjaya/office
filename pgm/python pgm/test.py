#import sys; x="test foo" ; stdout.write(x+"\n")
#lets starting....
print "manohar ..."
if True:                   #true
   print "Answer"	  # 1
   print "True"		#2
else:
   print "Answer"
   print "False"
print "after else"
a,b,c="m",5,8.95
print a,b,c
l1=["m","a","n","o"]
tuple1=("manohar","jaya")
dic={"name":"manohar","company":"java developer","designation":"R&D"}
print l1[1:] 
print tuple1[1]
print dic
print dic.keys(),dic.values()
count=1
while count<5:
	count=count+1
	print "hello",count	
else: 
	print "now count is greater than ",count
l2=["req","dev","tes","dep","R&D"]
for lists in l2:
	print lists
index=len(l2)
print "Iterate over by Index=",index
r=range(1,5)
print "\nRange ",r
raw_input("\n\nPress the enter key to exit.")

