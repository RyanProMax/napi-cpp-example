#include <register.h>

napi_value Method1(napi_env env, napi_callback_info info)
{
  napi_status status;
  napi_value world;
  status = napi_create_string_utf8(env, "world", 5, &world);
  assert(status == napi_ok);
  return world;
}

napi_value Method2(napi_env env, napi_callback_info info)
{
  napi_value result;
  napi_create_string_utf8(env, "Hello from Method2!", NAPI_AUTO_LENGTH, &result);
  return result;
}
