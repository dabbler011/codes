int findDist(Node* root, int a, int b) {
    vector <Node*> patha,pathb;
    getPath(root,patha,a);
    getPath(root,pathb,b);
    reverse(patha.begin(),patha.end());
    reverse(pathb.begin(),pathb.end());
    for (int i=0;i<min(patha.size(),pathb.size()),i++) {
        if(patha[i]!=pathb[i]) {
            break;
        }
    }
    return (patha.size()+pathb.size()-2*(i-1));
}

bool getPath (Node* root,vector<Node*> &path, int val) {
    if(root==NULL) return false;
    if (root->data==val){
        path.push_back(root);
        return true;
    }
    if (getPath(root->left,path,val) || getPath(root->right,path,val)) {
        path.push_back(root);
        return true;
    }
    return false;
}

