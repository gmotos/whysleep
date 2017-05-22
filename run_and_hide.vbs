Dim WinScriptHost
Set WinScriptHost = CreateObject("WScript.Shell")
WinScriptHost.Run Chr(34) & "Release\WhySleep.exe" & Chr(34), 0
Set WinScriptHost = Nothing