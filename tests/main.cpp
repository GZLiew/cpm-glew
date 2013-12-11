
#include <cstdlib>
#include <iostream>
#include <exception>
#include <memory>

#include <GL/glew.h>
#include <gtest/gtest.h>

// This test *only* tests whether we can compile GLEW.
// We do not create a context and issue calls into GLEW.

int main(int argc, char** argv)
{
  // Add a global test environment that initializes an OpenGL batch renderer.
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

