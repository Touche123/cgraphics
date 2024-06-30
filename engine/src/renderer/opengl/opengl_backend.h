#pragma once
#include "../ext/glad/include/glad/glad.h"
#include "renderer/renderer_backend.h"
#include "renderer/opengl/opengl_types.inl"

b8 opengl_renderer_backend_initialize(renderer_backend *backend,
                                      const char *application_name,
                                      struct platform_state *plat_state);
void opengl_renderer_backend_shutdown(renderer_backend *backend);

void opengl_renderer_backend_on_resized(renderer_backend *backend, u16 width,
                                        u16 height);

b8 opengl_renderer_backend_begin_frame(renderer_backend *backend,
                                       f32 delta_time);
b8 opengl_renderer_backend_end_frame(renderer_backend *backend, f32 delta_time);
