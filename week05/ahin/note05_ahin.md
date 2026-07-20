# 트리 다루기

root 를 받았으면, 
root->val 은 자신의 값(루트값)
root->left->val는 왼쪽자식
root->right->val는 오른쪽자식

dfs(root) 를 하면 어떤 일이 생기는가? 중위->왼쪽->오른쪽 형태로 순회하면서 이동

결국 내려가면서 계속 탐색하는 거니까 트리 = 재귀 형태로 갈 수밖에 없음.

int depth(TreeNode* node) {
        if (node == nullptr)
            return 0;

        int left = depth(node->left);
        int right = depth(node->right);

        diameter = max(diameter, left + right);

        return max(left, right) + 1;
    }