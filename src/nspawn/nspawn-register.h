/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include <sys/types.h>

#include "sd-id128.h"

#include "nspawn-mount.h"

int register_machine(sd_bus *bus, const char *machine_name, pid_t pid, const char *directory, sd_id128_t uuid, int local_ifindex, const char *slice, CustomMount *mounts, unsigned n_mounts, int kill_signal, char **properties, bool keep_unit, const char *service);
int terminate_machine(sd_bus *bus, pid_t pid);

int allocate_scope(sd_bus *bus, const char *machine_name, pid_t pid, const char *slice, CustomMount *mounts, unsigned n_mounts, int kill_signal, char **properties);
