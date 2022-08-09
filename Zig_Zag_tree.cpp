// class Solution{
//     public:
//     //Function to store the zig zag order traversal of tree in a list.
//     vector <int> zigZagTraversal(Node* root)
//     {
//     	vector<int>result;
//     	if (root == NULL) // agar root hi null hua to bas khatam ..kuch nahoi hoga 
//     	return result;
    	
//     	queue<Node*> q; // BFS hye isliye queue banaya
//     	q.push(root); // queue me root push karo
    	
//     	bool leftToRight = true; // Since we've to traverse zig zag .. ek bool func banaya
//     	while(!q.empty()){ // jab tak queue q empty nahi hye tab tak usse pop hone wale elements to ek vector me store karo
//     	    int size = q.size();
//     	    vector<int> ans(size);
    	    
//     	    for(int i = 0; i<size; i++){ // ab uss queue me ek ek elements to pop karo
//     	        Node* frontNode = q.front();
//     	        q.pop();
    	        
//     	        int index  = leftToRight ? i : size - i - 1; // next line me jump karke pop ko ulta karo..since its zog zag traversal
//     	        ans[index] = frontNode -> data;
    	        
//     	        if(frontNode->left) 
//     	        q.push(frontNode -> left);
    	        
//     	         if(frontNode->right)
//     	        q.push(frontNode -> right);
//     	    }
//     	    leftToRight = !leftToRight;
    	    
    	    
//     	    for(auto i:ans){
//     	        result.push_back(i);
//     	    }
//     	}
//     	return result;
//     }