#include <collection.h>
#include <algorithm>
using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

void Class1::Test()
{
    Vector<int>^ vec = ref new Vector<int>();
    vec->Append(1);
    vec->Append(2);
    vec->Append(3);
    vec->Append(4);
    vec->Append(5);

    auto it =
        std::find(begin(vec), end(vec), 3);

    int j = *it; //j = 3
    int k = *(it + 1); //or it[1]

    // Find a specified value.
    unsigned int n;
    bool found = vec->IndexOf(4, &n); //n = 3
    
    // Get the value at the specified index.
    = vec->GetAt(4); // n = 3
    
    // Insert an item.
    // vec = 0, 1, 2, 3, 4, 5
    vec->InsertAt(0, 0);
    
    // Modify an item.
    // vec = 0, 1, 2, 12, 4, 5,
    vec->SetAt(3, 12);
    
    // Remove an item.
    //vec = 1, 2, 12, 4, 5
    vec->RemoveAt(0);
    
    // vec = 1, 2, 12, 4
    vec->RemoveAtEnd();
    
    // Get a read-only view into the vector.
    IVectorView<int>^ view = vec->GetView();
}