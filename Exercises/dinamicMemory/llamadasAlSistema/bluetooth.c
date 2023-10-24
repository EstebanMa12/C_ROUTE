#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAC_LENGTH 6

struct bluetooth_info 
{
    char *name;
    unsigned int strength;
    char mac[MAC_LENGTH];
};
void print_structure(struct bluetooth_info *info);

struct bluetooth_info info, *new_info;

struct bluetooth_info *duplicate(struct bluetooth_info *);
// In this case, the duplicate function is declared to take a pointer to a struct bluetooth_info as an argument. The function is expected to create a new struct bluetooth_info object that is a copy of the input object and return a pointer to the new object.

// The use of a pointer to a struct bluetooth_info allows the function to modify the original object or create a new object without having to copy the entire object. This can be more efficient than copying the entire object, especially if the object is large.

int main(int argc, char **argv) 
{
    struct bluetooth_info *info_ptr;
    int i;

    info_ptr = &info;
    info_ptr->name = "My phone";
    info_ptr->strength = 100;
    for (i = 0; i < MAC_LENGTH; i++) 
    {
      info_ptr->mac[i] = 10;
    }
    new_info = duplicate(info_ptr);
    print_structure(new_info);
    free(new_info);

    return 0;
}


// Function to duplicate bluetooth_info struct
struct bluetooth_info *duplicate(struct bluetooth_info *src_ptr)
{
    // Create a new bluetooth_info struct
    struct bluetooth_info *result;
    int i;

    // The function first allocates memory for a new struct bluetooth_info object using the malloc() function. The size of the object is determined using the sizeof() operator, which returns the size of the struct bluetooth_info type in bytes.
    result = (struct bluetooth_info *)malloc(sizeof(struct bluetooth_info));

    // Copy the name from the source struct. This is done by first allocating memory for the name using the malloc() function and then copying the contents of the source name to the new name using the strcpy() function.
    result->name = (char *)malloc(strlen(src_ptr->name) + 1);
    strcpy(result->name, src_ptr->name);

    // Copy the strength from the source struct
    result->strength = src_ptr->strength;

    // Copy the MAC address from the source struct
    for (i = 0; i < MAC_LENGTH; i++)
    {
      result->mac[i] = src_ptr->mac[i];
    }

    // Return the duplicated struct
    return result;
}
void print_structure(struct bluetooth_info *info){
  printf("Name: %s\n", info -> name);
  printf("Strength: %d\n", info -> strength);
  printf("MAC: ");
  for (int i = 0; i < MAC_LENGTH; i++) 
  {
    printf("%d ", info -> mac[i]);
  }
  printf("\n");
}