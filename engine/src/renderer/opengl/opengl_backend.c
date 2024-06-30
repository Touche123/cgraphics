#include "opengl_backend.h"
#include "core/logger.h"
#include "opengl_platform.h"
#include "platform/platform.h"

// static Vulkan context
static opengl_context  context;

b8 opengl_renderer_backend_initialize(renderer_backend *backend,
                                      const char *application_name,
                                      struct platform_state *plat_state)
{
  // Surface
  KDEBUG("Creating Opengl  surface...");
  if (!platform_create_opengl_surface(plat_state, &context)) {
      KERROR("Failed to create platform surface!");
      return FALSE;
  }
  KDEBUG("Opengl surface created.");

  return TRUE;
}

void opengl_renderer_backend_shutdown(renderer_backend *backend)
{

}

void opengl_renderer_backend_on_resized(renderer_backend *backend, u16 width,
                                        u16 height) {

}

b8 opengl_renderer_backend_begin_frame(renderer_backend *backend,
                                       f32 delta_time) {
  glViewport(0,0, 800,600);
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  return FALSE;
}

b8 opengl_renderer_backend_end_frame(renderer_backend *backend, f32 delta_time) {
  return FALSE;
}