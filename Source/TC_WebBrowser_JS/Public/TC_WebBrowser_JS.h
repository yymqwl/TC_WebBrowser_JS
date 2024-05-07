
#pragma once

#include "CoreMinimal.h"
#include "WebBrowser.h"
#include "TC_WebBrowser_JS.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UTC_WebBrowser_JS : public UWebBrowser
{
	GENERATED_BODY()
public:
	UFUNCTION(Blueprintable,BlueprintCallable,Category="Web Browser")
	void BindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);
	
	UFUNCTION(Blueprintable,BlueprintCallable,Category="Web Browser")
	void UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);
	
};