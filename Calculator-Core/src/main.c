/* Main file */

#include "buffer.h"
#include "buffer.h"
#include "go.h"

int main()
{
    const char* starting_header = "\tWelcome to @synapsesoftworkllc's\nCalculator kernel.";
    // Sleep(2000); // wait for 2 seconds to clear buffer */
    buffer_push_buffer(starting_header);
    buffer_clear();

    return 0;
}