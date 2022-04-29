class Node:
  def __init__(self, data):
    self.data = data
    self.next = None


class insertionEnd:
  def __init__(self):
    self.head = None

  
  def push_back(self, x):
    newNode = Node(x)
    if(self.head == None):
      self.head = newNode
      return
    else:
      temp = self.head
      while(temp.next != None):
        temp = temp.next
      temp.next = newNode

 
  def PrintList(self):
    temp = self.head
    if(temp != None):
      print(" list :", end=" ")
      while (temp != None):
        print(temp.data, end=" ")
        temp = temp.next
      print()
    else:
      print(" list is empty.")

                
MyList = insertionEnd()


MyList.push_back(1)
MyList.push_back(2)
MyList.push_back(3)
MyList.PrintList()