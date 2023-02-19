/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0A, k0B, k0C, k0D, k0E, k0F, k0G, k1A, k1B, k1C, k1D, k1E, k1F, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k3B, k3C, k3D, k3E, k3F, k3G, k4B, k4E, k4F, k4G, k5B, k5F, k5G \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F, k0G}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, XXX}, \
	{k2A, k2B, k2C, k2D, k2E, k2F, k2G}, \
	{XXX, k3B, k3C, k3D, k3E, k3F, k3G}, \
	{XXX, k4B, XXX, XXX, k4E, k4F, k4G}, \
	{XXX, k5B, XXX, XXX, XXX, k5F, k5G} \
}
