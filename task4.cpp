#include "task4.h"

int main(){
    List<int> list;

    list.InsertNode(10, 0);
    list.PrintList();
    cout << "\n";

    list.InsertNode(20, 0);
    list.PrintList();
    cout << "\n";

    list.InsertNode(30, 0);
    list.PrintList();
    cout << "\n";

    list.InsertNode(40, 0);
    list.PrintList();
    cout << "\n";

    list.InsertNode(50, 1);
    list.PrintList();
    cout << "\n";

    list.InsertNode(60, 3);
    list.PrintList();
    cout << "\n";

    list.InsertNode(70, 100);
    list.PrintList();
    cout << "\n";

    list.RemoveNode(0);
    list.PrintList();
    cout << "\n";

    list.RemoveNode(4);
    list.PrintList();
    cout << "\n";

    list.RemoveNode(4);
    list.PrintList();
    cout << "\n";

    list.RemoveNode(20);
    list.PrintList();
    cout << "\n";

    cout << list.GetElement(2) << "\n";
    cout << "\n";

    cout << list.GetElement(10) << "\n";
    cout << "\n";

    return 0;

    
}