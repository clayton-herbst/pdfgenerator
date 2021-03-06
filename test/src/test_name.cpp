#include <gtest/gtest.h>
#include <sstream>

#include "pdfgen/Name.h"


// Demonstrate some basic assertions.
TEST(DataTypes, NameTest)
{
  // create pdf Name object instance
  pdf::data_type::Name name_obj("TestName");

  // write pdf object to output stream
  std::ostringstream stream;
  stream << name_obj;

  // Expect two strings not to be equal.
  EXPECT_EQ(stream.str(), "/TestName");
}

