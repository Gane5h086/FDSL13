#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to convert infix expression to postfix
string infixToPostfix(string infix) {
  // Stack to store operands
  stack<char> operands;

  // String to store the postfix expression
  string postfix = "";

  for (char ch : infix) {
    // If the character is an operand, append it to the postfix expression
    if (ch >= 'a' && ch <= 'z') {
      postfix += ch;
    }
    // If the character is an operator
    else {
      // While the stack is not empty and the top of the stack is an operator with higher or equal precedence, pop the top of the stack and append it to the postfix expression
      while (!operands.empty() && operands.top() != '(' && (operands.top() == '*' || operands.top() == '/' || (operands.top() == '+' || operands.top() == '-'))) {
        postfix += operands.top();
        operands.pop();
      }

      // Push the operator onto the stack
      operands.push(ch);
    }
  }

  // While the stack is not empty, pop the top of the stack and append it to the postfix expression
  while (!operands.empty()) {
    postfix += operands.top();
    operands.pop();
  }

  return postfix;
}

// Function to evaluate a postfix expression
int evaluatePostfix(string postfix) {
  // Stack to store operands
  stack<int> operands;

  for (char ch : postfix) {
    // If the character is an operand, push it onto the stack
    if (ch >= 'a' && ch <= 'z') {
      operands.push(ch - 'a');
    }
    // If the character is an operator, pop the top two operands from the stack, perform the operation, and push the result back onto the stack
    else {
      int operand1 = operands.top();
      operands.pop();
      int operand2 = operands.top();
      operands.pop();
      if (ch == '+') {
        operands.push(operand2 + operand1);
      }
      else if (ch == '-') {
        operands.push(operand2 - operand1);
      }
      else if (ch == '*') {
        operands.push(operand2 * operand1);
      }
      else if (ch == '/') {
        operands.push(operand2 / operand1);
      }
    }
  }

  // The result is the top of the stack
  return operands.top();
}

int main()
{
  
  string infix = "a+b-c*d/e";
  string postfix = infixToPostfix(infix);
  cout << "Infix: ";
}