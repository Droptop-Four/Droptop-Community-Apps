Set objShell = CreateObject("WScript.Shell")
path = WScript.Arguments(0)

command = "powershell -noprofile -windowstyle hidden -executionpolicy bypass -file """ & path & """"

objShell.Run command,0