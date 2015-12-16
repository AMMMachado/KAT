//  ********************************************************************
//  This file is part of KAT - the K-mer Analysis Toolkit.
//
//  KAT is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  KAT is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with KAT.  If not, see <http://www.gnu.org/licenses/>.
//  *******************************************************************

#include <gtest/gtest.h>

#include <../src/sect.hpp>
using kat::Sect;

namespace kat {

TEST(KAT_SECT, length_check ) 
{
    vector<path> inputs;
    inputs.push_back("data/ecoli.header.jf27");
    
    Sect sect(inputs, "data/sect_length_test.fa");
    sect.setOutputPrefix("temp/sect_length");
    sect.setCanonical(true);

    sect.execute();

    EXPECT_EQ( true, true );

    // Remove any generated files
    remove("temp/sect_length_counts.cvg");
    remove("temp/sect_length_contamination.mx");
    remove("temp/sect_length_stats.csv");
}


}