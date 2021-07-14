#pragma once

#include "export.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOST_PYTHON_STATIC_LIB  
#include <boost/python.hpp>

extern "C"
{

char const* greet()
{
	return "hello, world";
}

BOOST_PYTHON_MODULE(hello_ext)
{
	using namespace boost::python;
	def("greet", greet);
}

}