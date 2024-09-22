#ifndef WIREGUARD_DART_SERVICE_CONTROL_H
#define WIREGUARD_DART_SERVICE_CONTROL_H

#include <string>

#include "connection_status.h"

namespace wireguard_dart {

struct CreateArgs {
  std::wstring description, executable_and_args, dependencies;
};

class ServiceControl {
 public:
  const std::wstring service_name_;

  ServiceControl(const std::wstring service_name) : service_name_(service_name) {}

  void Create(CreateArgs args);
  void Start();
  void Stop();
  void Disable();
  ConnectionStatus Status();
};

}  // namespace wireguard_dart

#endif
