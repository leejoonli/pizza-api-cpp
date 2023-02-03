#include <maya/MFnPlugin.h>
#include <windows.h>
#include <shellapi.h>
#include "pizza.h"

MStatus Pizza::doIt(const MArgList &args)
{
    ShellExecute(NULL, "open", "http://www.google.com", NULL, NULL, SW_SHOWNORMAL);
    return MS::kSuccess;
}

void *Pizza::creator()
{
    return new Pizza;
}

MStatus initializePlugin(MObject obj)
{
    MFnPlugin plugin(obj, "Autodesk", "1.0", "Any");
    plugin.registerCommand("pizza", Pizza::creator);
    return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj)
{
    MFnPlugin plugin(obj);
    plugin.deregisterCommand("pizza");
    return MS::kSuccess;
}