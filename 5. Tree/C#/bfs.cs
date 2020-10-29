using System; 

// A recursive C# program to calculate the size of the tree 

/* Class containing left and right child of current 
node and key value*/
public class Node 
{ 
	public int data; 
	public Node left, right; 

	public Node(int item) 
	{ 
		data = item; 
		left = right = null; 
	} 
} 

/* Class to find size of Binary Tree */
public class BinaryTree 
{ 
	public Node root; 

	/* Given a binary tree. Print its nodes in level order 
	using array for implementing queue */
	public virtual int size() 
	{ 
		return size(root); 
	} 

	/* computes number of nodes in tree */
	public virtual int size(Node node) 
	{ 
		if (node == null) 
		{ 
			return 0; 
		} 
		else
		{ 
			return (size(node.left) + 1 + size(node.right)); 
		} 
	} 

	public static void Main(string[] args) 
	{ 
		/* creating a binary tree and entering the nodes */
		BinaryTree tree = new BinaryTree(); 
		tree.root = new Node(1); 
		tree.root.left = new Node(2); 
		tree.root.right = new Node(3); 
		tree.root.left.left = new Node(4); 
		tree.root.left.right = new Node(5); 

		Console.WriteLine("The size of binary tree is : " + tree.size()); 
	} 
} 

// This code is contributed by Shrikant13 
