class parent:
	"parent class"
	p_var=""
	def __init__(self,p_var):
		"parent constuctor"
		self.p_var=p_var
		print "parent variable is getting .."+"Result is =",p_var
	def p_method(self):
		"parent method doc string "
		print "hello parent manohar "
class child(parent):
	"child doc string "
	c_var=0
	def __init__(self,c_var):
		"child constructor"
		self.c_var=c_var
		print "child  variable is getting .."+"Result is %d"%c_var
		parent("PYTHON")
	def c_method(self):
		"child method doc string"
		print "hello child jaya"        
c1=child(100)
c1.c_method()
c1.p_method()
print issubclass(child,parent)	
	
