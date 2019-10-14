# Node class
class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

# Linked list class containing node object
class LinkedList:
	def __init__(self):
		self.head = None

if __name__ == '__main__':
	llist = LinkedList()
	start = LinkedList()
	n = int(input("No. of elements in a linked list: "))
	llist.head = Node(int(input()))
	start = llist.head
	for i in range(n-1):
		new_node = Node(int(input()))
		llist.head.next = new_node
		llist.head = llist.head.next
	while llist.head!= None:
		print(" ->", llist.head.data, end = " ")
		llist.head = llist.head.next