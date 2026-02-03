//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <zdefend_flutter/z_defend_flutter_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) zdefend_flutter_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ZDefendFlutterPlugin");
  z_defend_flutter_plugin_register_with_registrar(zdefend_flutter_registrar);
}
