%module moodee
%include "std_string.i"
%inline %{
    #define SWIG_FILE_WITH_INIT
    #include "moodee.h"
%}
%include "moodee.h"
