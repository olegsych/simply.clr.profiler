# simply::clr::profiler

A small C++ library for implementing CLR profilers.

## clone

This repository contains [submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules).

```
git clone --recursive https://github.com/olegsych/simply.clr.profiler.git
```

## build

[![Build status](https://ci.appveyor.com/api/projects/status/github/olegsych/simply.clr.profiler?branch=master&retina=true)](https://ci.appveyor.com/project/olegsych/simply-clr-profiler/branch/master)

From [Visual Studio 2017](https://www.visualstudio.com/downloads):
- Open `simply.clr.profiler.sln`
- Select _Build Solution_ from the _Build_ menu
- To switch build between `x86` and `x64` platforms, select _Configuration Manager_ from the _Build_ menu and change the _Active Solution Configuration_

From [Developer Command Prompt for VS2017](https://docs.microsoft.com/en-us/dotnet/framework/tools/developer-command-prompt-for-vs):
```
msbuild simply.clr.profiler.sln /p:Platform=x86
msbuild simply.clr.profiler.sln /p:Platform=x64
```

## test

From Visual Studio 2017:
- Select _Run_ / _All Tests_ from the _Test_ menu
- To switch test execution between `x86` and `x64` platform, select _Test Settings_ from the _Test_ menu and change the _Default Processor Architecture_.

From Developer Command Prompt for VS2017:
```
vstest.console bin\debug\Win32\test.dll /Platform:x86
vstest.console bin\debug\x64\test.dll /Platform:x64 /inIsolation
```
