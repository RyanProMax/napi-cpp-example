#include <assert.h>
#include <node_api.h>
#include <vector>

#include <methods.h>

napi_value Init(napi_env env, napi_value exports)
{
  napi_status status;

  std::vector<napi_property_descriptor> properties = {
      DECLARE_NAPI_METHOD("method1", Method1),
      DECLARE_NAPI_METHOD("method2", Method2)};
  status = napi_define_properties(env, exports, properties.size(), properties.data());

  assert(status == napi_ok);
  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
