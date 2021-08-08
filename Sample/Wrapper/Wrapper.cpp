// This is the main DLL file.

#include "stdafx.h"

#include "Wrapper.h"

namespace Wrapper {

    Boolean MyTreeView::drawToTreeView(System::Windows::Forms::TreeView^ target)
    {
        return true;
    }
}