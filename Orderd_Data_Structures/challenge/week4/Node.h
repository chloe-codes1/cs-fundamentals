class Node {
 public:
  int value;
  Node *left, *right;
  Node(int val = 0) {
    value = val;
    left = right = nullptr;
  }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};
