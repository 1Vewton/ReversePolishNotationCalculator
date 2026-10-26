# Get the build directory
$CurrentFolder=Get-Location
Write-Output "current location $CurrentFolder"
$BuildDir="$CurrentFolder\build"
# Create the direcotry
if(Test-Path -Path $BuildDir -PathType Container){
    Write-Output "Build directory $BuildDir already exists"
}else{
    Write-Output "Create build directory..."
    New-Item -Path $BuildDir -ItemType Directory
}
Set-Location -Path $BuildDir
# Start building
cmd.exe /c "cmake .."
cmd.exe /c "cmake --build ."
# Back to the current directory
Set-Location -Path $CurrentFolder
