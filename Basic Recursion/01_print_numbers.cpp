class Solution {
  public:
  void printNumbers(int n) {
        // Your code goes here
        printHelper(1, n);
    }

private:
  void printHelper(int current, int n) {
        if (current > n) {
            return;
        }
        cout << current << " ";
        printHelper(current + 1, n);
    }

};