
// $Id: number_lookups.C,v 1.2 2007-10-21 20:48:54 benkirk Exp $

// The libMesh Finite Element Library.
// Copyright (C) 2002-2007  Benjamin S. Kirk, John W. Peterson

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA


// Local includes
#include "number_lookups.h"

// These numbers need to go up to at least maximum_totalorder - 2

// triangular_number_*: indices for triangle interiors
const unsigned char triangular_number_row[] = {
 0,
 1, 1,
 2, 2, 2,
 3, 3, 3, 3,
 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6,
 7, 7, 7, 7, 7, 7, 7, 7,
 8, 8, 8, 8, 8, 8, 8, 8, 8,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9
};

const unsigned char triangular_number_column[] = {
 0,
 0, 1,
 0, 1, 2,
 0, 1, 2, 3,
 0, 1, 2, 3, 4,
 0, 1, 2, 3, 4, 5,
 0, 1, 2, 3, 4, 5, 6,
 0, 1, 2, 3, 4, 5, 6, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
};


// square_number_*: indices for square interiors, cube faces
const unsigned char square_number_column[] = {
0,
0, 1, 1,
0, 1, 2, 2, 2,
0, 1, 2, 3, 3, 3, 3,
0, 1, 2, 3, 4, 4, 4, 4, 4,
0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9
};

const unsigned char square_number_row[] = {
 0,
 1, 1, 0,
 2, 2, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
};


// square_number_*: indices for cube interiors
const unsigned char cube_number_column[] = {
 0,

 0, 1, 1,
 0, 1, 1,
 0,

 0, 1, 2, 2, 2,
 0, 1, 2, 2, 2,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0,

 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7,
 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6,
 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5,
 0, 1, 2, 3, 4, 4, 4, 4, 4,
 0, 1, 2, 3, 3, 3, 3,
 0, 1, 2, 2, 2,
 0, 1, 1,
 0
};

const unsigned char cube_number_row[] = {
 0,

 1, 1, 0,
 1, 1, 0,
 0,

 2, 2, 2, 1, 0,
 2, 2, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 3, 3, 3, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 4, 4, 4, 4, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0,

 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0,
 7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0,
 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0,
 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0,
 4, 4, 4, 4, 4, 3, 2, 1, 0,
 3, 3, 3, 3, 2, 1, 0,
 2, 2, 2, 1, 0,
 1, 1, 0,
 0
};

const unsigned char cube_number_page[] = {
 0,

 0, 0, 0,
 1, 1, 1,
 1,

 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2,
 2, 2, 2,
 2,

 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3,
 3, 3, 3, 3, 3,
 3, 3, 3,
 3,

 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4,
 4, 4, 4,
 4,

 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 5, 5, 5, 5, 5, 5, 5, 5, 5,
 5, 5, 5, 5, 5, 5, 5,
 5, 5, 5, 5, 5,
 5, 5, 5,
 5,

 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6,
 6, 6, 6,
 6,

 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7,
 7, 7, 7,
 7,

 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8,
 8, 8, 8,
 8,

 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9,
 9, 9, 9,
 9
};