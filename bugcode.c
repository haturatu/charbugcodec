#include <stdio.h>

/* trap code
int my_read_char(const char *buffer, size_t *offs) {
  if (buffer[*offs] != '\0') {
    return buffer[*offs++]; 
  } else {
    return EOF;
  }
}
*/

int my_read_char(const char *buffer, size_t *offs) {
  if (buffer[*offs] != '\0') {
    return (unsigned char) buffer[(*offs)++];
  } else {
    return EOF;
  }
}

int main() {
  const char *buffer = "Hello, World!";
  size_t offs = 0;

  printf("Reading characters from buffer:\n");
  while (1) {
    int ch = my_read_char(buffer, &offs);
    if (ch == EOF) {
      break;
    }
    printf("Character read: %c, offs: %zu\n", ch, offs);
  }

  return 0;
}

