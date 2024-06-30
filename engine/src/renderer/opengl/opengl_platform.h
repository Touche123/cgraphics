#pragma once

#include "defines.h"

struct platform_state;
struct opengl_context;

b8 platform_create_opengl_surface(struct platform_state *plat_state,
                                  struct opengl_context *context);