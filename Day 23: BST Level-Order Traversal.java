import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{
static LinkedList<Integer> queue = new LinkedList();
static void levelOrder(Node root){
    LinkedList<Node> treeQueue = new LinkedList();
    treeQueue.add(root);
    while(treeQueue.peek() != null) {
        Node toprint = treeQueue.remove();
        System.out.print(toprint.data);
        if(toprint.left != null) {
            treeQueue.add(toprint.left);
        }
        if(toprint.right != null) {
            treeQueue.add(toprint.right);
        }
        if(treeQueue.peek() != null) {
            System.out.print(" ");
        }
    }
    
    }
public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}
