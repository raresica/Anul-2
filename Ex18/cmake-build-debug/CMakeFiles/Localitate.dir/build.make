# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programe\Programe Facultate\C++\CLion\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programe\Programe Facultate\C++\CLion\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Localitate.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Localitate.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Localitate.dir\flags.make

CMakeFiles\Localitate.dir\main.cpp.obj: CMakeFiles\Localitate.dir\flags.make
CMakeFiles\Localitate.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Localitate.dir/main.cpp.obj"
	"D:\Programe\Programe Facultate\C++\VS\VS Community 2019\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Localitate.dir\main.cpp.obj /FdCMakeFiles\Localitate.dir\ /FS -c "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\main.cpp"
<<

CMakeFiles\Localitate.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Localitate.dir/main.cpp.i"
	"D:\Programe\Programe Facultate\C++\VS\VS Community 2019\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" > CMakeFiles\Localitate.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\main.cpp"
<<

CMakeFiles\Localitate.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Localitate.dir/main.cpp.s"
	"D:\Programe\Programe Facultate\C++\VS\VS Community 2019\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Localitate.dir\main.cpp.s /c "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\main.cpp"
<<

# Object files for target Localitate
Localitate_OBJECTS = \
"CMakeFiles\Localitate.dir\main.cpp.obj"

# External object files for target Localitate
Localitate_EXTERNAL_OBJECTS =

Localitate.exe: CMakeFiles\Localitate.dir\main.cpp.obj
Localitate.exe: CMakeFiles\Localitate.dir\build.make
Localitate.exe: CMakeFiles\Localitate.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Localitate.exe"
	"D:\Programe\Programe Facultate\C++\CLion\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Localitate.dir --rc="D:\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- "D:\Programe\Programe Facultate\C++\VS\VS Community 2019\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\Localitate.dir\objects1.rsp @<<
 /out:Localitate.exe /implib:Localitate.lib /pdb:"D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug\Localitate.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Localitate.dir\build: Localitate.exe

.PHONY : CMakeFiles\Localitate.dir\build

CMakeFiles\Localitate.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Localitate.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Localitate.dir\clean

CMakeFiles\Localitate.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate" "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate" "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug" "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug" "D:\Programe\Programe Facultate\C++\Workspace CLion\Programare C++ - An II - Monescu\Localitate\cmake-build-debug\CMakeFiles\Localitate.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Localitate.dir\depend

