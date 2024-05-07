#pragma once





//定义区域
TC_WEBBROWSER_JS_API DECLARE_LOG_CATEGORY_EXTERN(TC_WebBrowser_JS_Log,Log,All);
//////////////////
///定义GF日志
///[Core.Log]
///TC_WebBrowser_JS_Log=Display
///控制方法
///
///
///
#define TC_WEBBROWSER_JS_VERYBOSE(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,VeryVerbose,Format,##__VA_ARGS__)


#define TC_WEBBROWSER_JS_VERBOSE(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Verbose,Format,##__VA_ARGS__)

#define TC_WEBBROWSER_JS_LOG(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Log,Format,##__VA_ARGS__)

#define TC_WEBBROWSER_JS_DISPLAY(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Display,Format,##__VA_ARGS__)

#define TC_WEBBROWSER_JS_WARNING(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Warning,Format,##__VA_ARGS__)

#define TC_WEBBROWSER_JS_ERROR(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Error,Format,##__VA_ARGS__)

#define TC_WEBBROWSER_JS_FATAL(Format, ...) \
UE_LOG(TC_WebBrowser_JS_Log,Fatal,Format,##__VA_ARGS__)




///////////////////////////////