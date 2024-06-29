class NumArray
{
public:
    vector<int> tree;
    vector<int> values;

    NumArray(vector<int> &nums) : tree(tree)
    {
        values = nums;
        tree.push_back(0);
        tree.insert(tree.end(), nums.begin(), nums.end());
        for (int i = 1; i <= tree.size(); i++)
        {
            int p = i + (i & -i);
            if (p < tree.size())
            {
                tree[p] = tree[p] + tree[i];
            }
        }
    }
    void update(int index, int val)
    {
        int aux = val - values[index];
        values[index] = val;
        index++;
        while (index < tree.size())
        {
            tree[index] += aux;
            index += index & -index;
        }
    }

    int sum(int i)
    {
        int sum = 0;
        while (i > 0)
        {
            sum += tree[i];
            i -= i & -i;
        }
        return sum;
    }

    int sumRange(int left, int right)
    {
        return sum(right + 1) - sum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */