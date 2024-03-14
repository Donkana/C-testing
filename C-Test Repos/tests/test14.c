// This will cause a compiler error (unmatched parentheses)
if (x > 0) {
  // ... (code block)
} else (  // Missing closing parenthesis
  // ... (unreachable code)
}

int main() {
  // ... (rest of the code wouldn't be reached due to the error)
  return 0;
}
