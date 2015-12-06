/*
 * Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MT76x2_OF_H
#define __MT76x2_OF_H

#include "mt76x2.h"

#ifdef CONFIG_OF

int mt76x2_get_of_eeprom(struct mt76x2_dev *dev, int len);
void mt76x2_get_of_overrides(struct mt76x2_dev *dev);

#else

static inline int
mt76x2_get_of_eeprom(struct mt76x2_dev *dev, int len)
{
	return -ENOENT;
}

static inline void
mt76x2_get_of_overrides(struct mt76x2_dev *dev)
{
}

#endif /* CONFIG_OF */

#endif