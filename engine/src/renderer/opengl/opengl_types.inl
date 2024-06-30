#include "defines.h"

typedef struct opengl_context {

  // The framebuffer's current width.
  u32 framebuffer_width;

  // The framebuffer's current height.
  u32 framebuffer_height;

  // Current generation of framebuffer size. If it does not match
  // framebuffer_size_last_generation, a new one should be generated.
  u64 framebuffer_size_generation;

  // The generation of the framebuffer when it was last created. Set to
  // framebuffer_size_generation when updated.
  u64 framebuffer_size_last_generation;

  b8 recreating_swapchain;

} opengl_context;
