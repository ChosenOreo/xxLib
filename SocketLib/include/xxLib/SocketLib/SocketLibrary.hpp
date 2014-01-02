#pragma once

#include <xxLib/CrossLib/CrossLibrary.hpp>

namespace xxLib {
    namespace SocketLib {
        bool Initialize();
        void Shutdown();
        bool Reset();
    }
}