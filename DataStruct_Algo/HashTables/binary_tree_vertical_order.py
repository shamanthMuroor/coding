""" Print a Binary Tree in Vertical Order | Set 2 (Map based Method)  """
# Binary Tree Node
class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None
    

def getVerticalOrder(root, hd, m):
    #Base Case
    if root is None:
        return
    
    # Store current node in map m
    try:
        m[hd].append(root.key)
    except:
        m[hd] = [root.key]

    # Store nodes in left subtree
    getVerticalOrder(root.left, hd-1, m)
    # Store nodes in right subtree
    getVerticalOrder(root.right, hd+1, m)


def printVerticalOrder(root):
    m = dict()
    hd = 0
    getVerticalOrder(root, hd, m)

    for index, value in enumerate(sorted(m)):
        for i in m[value]:
            print (i, end=",")
        print()
        

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)
root.right.left.right = Node(8)
root.right.right.right = Node(9)
print("Vertical order traversal is ")
printVerticalOrder(root)