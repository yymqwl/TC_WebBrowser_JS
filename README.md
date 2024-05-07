## TC_WebBrowser_JS

WebBrowser 和JS 交互项目

绑定UObject
1.蓝图创建UObject。例如TestObject。创建TestFunctionA(str )方法

2.使用UTC_WebBrowser_JS 调用BindUObject 绑定 TestObject

3.UTC_WebBrowser_JS 设置的Url 路径可以直接调
ue.testobject.testfunctiona("jsdata").then(function(ReturnValue)
	{
		alert("调用完成"+ReturnValue);
	});
访问绑定的UObject。
需要注意的是1.名称必须全部小写 2.返回值必须是ReturnValue 不能修改

UE调用JS方法。
1.UTC_WebBrowser_JS绑定成功后。假如url里面有 function JSFunction(str)方法
2.UTC_WebBrowser_JS 执行Exec JavaScript 。例如 window.JSFunction("call from ue");
