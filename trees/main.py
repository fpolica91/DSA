from re import L


class Node:
  def __init__(self, value):
      self.value = value
      self.left = None
      self.right = None

def countNodes(root):
  if root is None:
    return 0
  return 1 + countNodes(root.left) + countNodes(root.right)

def countNodeIterative(root):
  if root is None:
    return 0
  stack = [root]
  count = 0
  while len(stack) > 0:
    node = stack.pop()
    count+=1
    if node.right is not None:
      stack.append(node.right)
    if node.left is not None:
      stack.append(node.left)
  return count

def max_in_tree(root):
  if root is None:
    return float('-inf')
  max_in_left = max_in_tree(root.left)
  max_in_right = max_in_tree(root.right)
  return max(max_in_left, max_in_right, root.value)


  


if __name__ == "__main__":

  node = Node(1)
  node.left = Node(2)
  node.right = Node(3)
  node.left.left = Node(4)
  node.left.right = Node(5)
  node.right.left = Node(6)
  node.right.right = Node(7)
  print(countNodes(node))
  print("The greatest value in the tree is",max_in_tree(node))

