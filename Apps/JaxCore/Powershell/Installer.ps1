$root = $RmAPI.VariableStr("CURRENTPATH") + "CoreInstaller"

function debug {
    param(
        [Parameter()]
        [string]
        $message
    )

    $RmAPI.Bang("[!Log `"`"`"CoreInstaller: " + $message + "`"`"`" Debug]")
}

function Get-Webfile ($url, $dest) {
    debug "Downloading $url`n"
    $uri = New-Object "System.Uri" "$url"
    $request = [System.Net.HttpWebRequest]::Create($uri)
    $request.set_Timeout(5000)
    $response = $request.GetResponse()
    $length = $response.get_ContentLength()
    $responseStream = $response.GetResponseStream()
    $destStream = New-Object -TypeName System.IO.FileStream -ArgumentList $dest, Create
    $buffer = New-Object byte[] 100KB
    $count = $responseStream.Read($buffer, 0, $buffer.length)
    $downloadedBytes = $count

    while ($count -gt 0) {
        $RmAPI.Bang("[!SetVariable Progress `"$([System.Math]::Round(($downloadedBytes / $length) * 100,0))`"][!SetVariable InstallText `"Downloading [#Progress]%`"][!UpdateMeterGroup Progress][!Redraw]")
        $destStream.Write($buffer, 0, $count)
        $count = $responseStream.Read($buffer, 0, $buffer.length)
        $downloadedBytes += $count
    }

    debug "`nDownload of `"$dest`" finished."
    $destStream.Flush()
    $destStream.Close()
    $destStream.Dispose()
    $responseStream.Dispose()
}
function New-Cache {

    [System.IO.Directory]::CreateDirectory("$root\cache") | Out-Null
    Get-ChildItem "$root\cache" | ForEach-Object {
        Remove-Item $_.FullName -Force -Recurse
    }
}

function Install {
    $webVersion = $RmAPI.Measure('mVer')
    $url = "https://github.com/Jax-Core/JaxCore/releases/download/v$webVersion/JaxCore_v$webVersion.rmskin"
    $name = "JaxCore$webVersion"
    $outPath = "$root/cache/$name.rmskin"

    New-Cache

    Get-Webfile $url $outPath

    $RmAPI.Bang("[!SetVariable InstallText `"Do not touch controls, running installer...`"][!UpdateMeterGroup Progress][!Redraw]")

    Start-Process -FilePath $outPath

    If ($Null -NotMatch (get-process "SkinInstaller" -ea SilentlyContinue)) {
        If ($name -NotMatch 'JaxCore') {
            $wshell = New-Object -ComObject wscript.shell
            $wshell.AppActivate('Rainmeter Skin Installer')
            Start-Sleep -s 1.5
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys('{ENTER}')
            $wshell.SendKeys('{DOWN}')
            $wshell.SendKeys('{ENTER}')
            $wshell.SendKeys('+{TAB}')
            $wshell.SendKeys(' ')
            $wshell.SendKeys('{ENTER}')
        }
        else {
            $wshell = New-Object -ComObject wscript.shell
            $wshell.AppActivate('Rainmeter Skin Installer')
            Start-Sleep -s 1.5
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys('{ENTER}')
            $wshell.SendKeys('{DOWN}')
            $wshell.SendKeys('{ENTER}')
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys('{ENTER}')
        }
    }
}

function FinishInstall {
    New-Cache
    $RmAPI.Bang('[!DeactivateConfig]')
}
