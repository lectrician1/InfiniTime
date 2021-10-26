#pragma once

#include <cstdint>
#include <stack>

namespace Pinetime {
  namespace Controllers {
    class TwosController {
        public:
            enum class Levels { Off, Low, Medium, High };
            void Init();

            void Set(Levels level);
            Levels Level() const;
            void Lower();
            void Higher();
            void Step();

            void Backup();
            void Restore();

            const char* GetIcon();
            const char* ToString();

        private:
            std::stack<Tile> gridHistory;
    };
  }
}
