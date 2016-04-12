// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "skeleton_pluginPrivatePCH.h"

#define LOCTEXT_NAMESPACE "Fskeleton_pluginModule"

void Fskeleton_pluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fskeleton_pluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fskeleton_pluginModule, skeleton_plugin)