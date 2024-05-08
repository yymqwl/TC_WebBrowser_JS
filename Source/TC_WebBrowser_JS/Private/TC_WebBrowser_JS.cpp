#include "TC_WebBrowser_JS.h"
#include "SWebBrowser.h"
#include "TC_WebBrowser_Log.h"


void UTC_WebBrowser_JS::BindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->BindUObject(Name,Object,bIsPermanent);
	}
	else
	{
		TC_WEBBROWSER_JS_LOG(TEXT("绑定失败"));
	}
}


void UTC_WebBrowser_JS::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->UnbindUObject(Name,Object,bIsPermanent);
	}
	else
	{
		TC_WEBBROWSER_JS_LOG(TEXT("接绑定失败"));
	}
}



TSharedRef<SWidget> UTC_WebBrowser_JS::RebuildWidget()
{
	auto widgetRef =  Super::RebuildWidget();
	if (widgetRef == WebBrowserWidget )
	{
		//支持中文输入
		ITextInputMethodSystem* const TextInputMethodSystem = FSlateApplication::Get().GetTextInputMethodSystem();
		WebBrowserWidget->BindInputMethodSystem(TextInputMethodSystem);
	}
	return widgetRef;
}

