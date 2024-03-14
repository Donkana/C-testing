#ifndef ADVANCED_MACROS_H_
#define ADVANCED_MACROS_H_

// Macro with arguments (advanced: type safety, format specifier)
#define SQUARE(x) ((x) * (x))

// Macro for conditional compilation (advanced: feature checks)
#ifdef DEBUG
#define PRINT_DEBUG(message) printf("DEBUG: %s\n", message)
#else
#define PRINT_DEBUG(message) /* No output in non-debug mode */
#endif

#endif  // ADVANCED_MACROS_H_
