#include <nana/gui.hpp>

int main() {
  using namespace nana;

  form fm;
  drawing dw{fm};
  dw.draw([](paint::graphics &graph) {
    graph.line({10, 10}, {20, 20});

    // A drawing function should not resize the graphics
    // graph.size({new_width, new_height});
    // otherwise the behavior is unspecified.
  });

  // Showing the form refreshes the form.
  // Therefore the drawing function will be called.
  fm.show();
  exec();
}