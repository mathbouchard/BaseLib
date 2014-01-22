/***************************************************************************
 *  BaseLib.cpp
 *  An example library
 *
 *  January 8 11:32 2014
 *  Copyright  2014  Mathieu Bouchard
 *  mathbouchard@gmail.com
 ****************************************************************************/

int BaseLib::Run()
{
    printf("Running %s\n", text.c_str());
    return 0;
}

int BaseLib::Set(string val)
{
    text = val;
    return 0;
}