class Node {
 public:
  int height;  // to be set by computeHeight()
  Node *left, *right;
  Node() {
    height = -1;
    left = right = nullptr;
  }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};
