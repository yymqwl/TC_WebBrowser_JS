// Copyright Epic Games, Inc. All Rights Reserved.

#include "TC_WebBrowser_JS_Module.h"

#define LOCTEXT_NAMESPACE "FTC_CoreModule"

void FTC_WebBrowser_JS_Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FTC_WebBrowser_JS_Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_GAME_MODULE(FTC_WebBrowser_JS_Module, TC_WebBrowser_JS_Module)