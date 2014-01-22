/***************************************************************************
 *  BaseLib.h
 *  An example library
 *
 *  January 8 11:32 2014
 *  Copyright  2014  Mathieu Bouchard
 *  mathbouchard@gmail.com
 ****************************************************************************/

#ifndef BaseLib_H
#define BaseLib_H

#if defined WIN64 || defined WIN32
	#ifndef snprintf
		#define snprintf sprintf_s
	#endif
#endif

#if defined OSX
    #ifndef snprintf
        #define MACOSX
    #endif
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

class BaseLib
{
public:
	BaseLib() {}
    ~BaseLib() {}
	int Run();
    int Set(string val);
    
private:
    string text = "something";
};
#endif // BaseLib_H
