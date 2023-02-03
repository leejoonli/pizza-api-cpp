#include <stdio.h>
#include <maya/MString.h>
#include <maya/MArgList.h>
#include <maya/MPxCommand.h>
#include <maya/MIOStream.h>

class Pizza : public MPxCommand
{
public:
    MStatus doIt(const MArgList &args);
    static void *creator();
};