bool check(Node *root,int val) {
    if (root->data==val) {
        return true;
    }
    if (root->left==NULL && root->right == NULL) {
        return false;
    }
    bool chck1,chck2;
    if (root->left!=NULL) {
        chck1=check(root->left,val);
    }
    if (root->right!=NULL) {
        chck2=check(root->right,val);
    }
    return (chck1||chck2);
}

Node * LCA(Node* root ,int n1 ,int n2 ) {
    int ans=root->data;
    Node *temp=root;
    bool rt=true,lft=true;
    while (rt||lft) {
        bool v1,v2;
        if (temp->left!=NULL) {
            v1=check(temp->left,n1);
            v2=check(temp->left,n2);
            if(v1&&v2) {
                temp=temp->left;
                lft=true;
                continue;
            }
        }
        lft=false;
        if (temp->right!=NULL) {
            v1=check(temp->right,n1);
            v2=check(temp->right,n2);
            if(v1&&v2) {
                temp=temp->right;
                rt=true;
                continue;
            }
        }
        rt=false;
    }
    return temp;
}