/***************************************************************************
 *  BaseInterface.cpp
 *  An example library interface
 *
 *  January 8 11:32 2014
 *  Copyright  2014  Mathieu Bouchard
 *  mathbouchard@gmail.com
 ****************************************************************************/

#include "BaseInterface.h"

vector<BaseLib*> modmap;

LIB_EXTERN_C_BEGIN

LIB_API long STDCALL _Run(long token)
{
    if(token >=0 && token < long(modmap.size()))
    {
        printf("<Interface>\n\t");
        modmap[0]->Run();
        printf("</Interface>\n");
    }
    return 0;
}

LIB_API long STDCALL _Set(const char* str, long token)
{
    if(token >=0 && token < long(modmap.size()))
    {
        modmap[0]->Set(string(str));
    }
    return 0;
}

LIB_API long STDCALL _CreateModule()
{
	long ret = modmap.size();
	
    modmap.push_back(new BaseLib());
    
	return ret;
}

LIB_API long STDCALL _DeleteModel(long token)
{
	delete modmap[token];
	return 0;
}

LIB_EXTERN_C_END
