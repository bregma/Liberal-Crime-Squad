/**
 * Implementation of the TypeCache component.
 */
/*
 * Copyright 2017,2018 Stephen M. Webb  <stephen.webb@bregmasoft.ca>
 *
 * This file is part of Liberal Crime Squad.
 *
 * Liberal Crime Squad is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */
#include "typecache.h"

#include "locations/districttypecache.h"
#include "locations/locationtypecache.h"


TypeCache::
TypeCache()
: district_type_cache(new DistrictTypeCache(*this))
, location_type_cache(new LocationTypeCache(*this))
{ }


TypeCache::
~TypeCache()
{
  delete location_type_cache;
  delete district_type_cache;
}