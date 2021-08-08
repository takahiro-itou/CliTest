// This is the main DLL file.

#include "stdafx.h"

#include "Wrapper.h"

namespace Wrapper {

    Boolean MyTreeView::drawToTreeView(System::Windows::Forms::TreeView^ target)
    {
        target->Nodes->Clear();

        System::Windows::Forms::TreeNode^   node1 = gcnew System::Windows::Forms::TreeNode("Node 1");
        target->Nodes->Add(node1);

        System::Windows::Forms::TreeNode^   node2 = gcnew System::Windows::Forms::TreeNode("Node 1-1");
        node1->Nodes->Add(node2);

        System::Windows::Forms::TreeNode^   node3 = gcnew System::Windows::Forms::TreeNode("Node 1-2");
        node1->Nodes->Add(node3);

        return true;
    }
}