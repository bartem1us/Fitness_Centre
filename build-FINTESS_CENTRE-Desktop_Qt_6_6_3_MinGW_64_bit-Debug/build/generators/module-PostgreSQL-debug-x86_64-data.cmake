########### AGGREGATED COMPONENTS AND DEPENDENCIES FOR THE MULTI CONFIG #####################
#############################################################################################

list(APPEND libpq_COMPONENT_NAMES libpq::pgport libpq::pgcommon libpq::pq)
list(REMOVE_DUPLICATES libpq_COMPONENT_NAMES)
set(libpq_FIND_DEPENDENCY_NAMES "")

########### VARIABLES #######################################################################
#############################################################################################
set(libpq_PACKAGE_FOLDER_DEBUG "C:/Users/Василий/.conan2/p/b/libpq15da42623affd/p")
set(libpq_BUILD_MODULES_PATHS_DEBUG )


set(libpq_INCLUDE_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/include")
set(libpq_RES_DIRS_DEBUG )
set(libpq_DEFINITIONS_DEBUG )
set(libpq_SHARED_LINK_FLAGS_DEBUG )
set(libpq_EXE_LINK_FLAGS_DEBUG )
set(libpq_OBJECTS_DEBUG )
set(libpq_COMPILE_DEFINITIONS_DEBUG )
set(libpq_COMPILE_OPTIONS_C_DEBUG )
set(libpq_COMPILE_OPTIONS_CXX_DEBUG )
set(libpq_LIB_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/lib")
set(libpq_BIN_DIRS_DEBUG )
set(libpq_LIBRARY_TYPE_DEBUG STATIC)
set(libpq_IS_HOST_WINDOWS_DEBUG 1)
set(libpq_LIBS_DEBUG libpq libpgcommon libpgport)
set(libpq_SYSTEM_LIBS_DEBUG ws2_32 secur32 advapi32 shell32 crypt32 wldap32)
set(libpq_FRAMEWORK_DIRS_DEBUG )
set(libpq_FRAMEWORKS_DEBUG )
set(libpq_BUILD_DIRS_DEBUG )
set(libpq_NO_SONAME_MODE_DEBUG FALSE)


# COMPOUND VARIABLES
set(libpq_COMPILE_OPTIONS_DEBUG
    "$<$<COMPILE_LANGUAGE:CXX>:${libpq_COMPILE_OPTIONS_CXX_DEBUG}>"
    "$<$<COMPILE_LANGUAGE:C>:${libpq_COMPILE_OPTIONS_C_DEBUG}>")
set(libpq_LINKER_FLAGS_DEBUG
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,SHARED_LIBRARY>:${libpq_SHARED_LINK_FLAGS_DEBUG}>"
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,MODULE_LIBRARY>:${libpq_SHARED_LINK_FLAGS_DEBUG}>"
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,EXECUTABLE>:${libpq_EXE_LINK_FLAGS_DEBUG}>")


set(libpq_COMPONENTS_DEBUG libpq::pgport libpq::pgcommon libpq::pq)
########### COMPONENT libpq::pq VARIABLES ############################################

set(libpq_libpq_pq_INCLUDE_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/include")
set(libpq_libpq_pq_LIB_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/lib")
set(libpq_libpq_pq_BIN_DIRS_DEBUG )
set(libpq_libpq_pq_LIBRARY_TYPE_DEBUG STATIC)
set(libpq_libpq_pq_IS_HOST_WINDOWS_DEBUG 1)
set(libpq_libpq_pq_RES_DIRS_DEBUG )
set(libpq_libpq_pq_DEFINITIONS_DEBUG )
set(libpq_libpq_pq_OBJECTS_DEBUG )
set(libpq_libpq_pq_COMPILE_DEFINITIONS_DEBUG )
set(libpq_libpq_pq_COMPILE_OPTIONS_C_DEBUG "")
set(libpq_libpq_pq_COMPILE_OPTIONS_CXX_DEBUG "")
set(libpq_libpq_pq_LIBS_DEBUG libpq)
set(libpq_libpq_pq_SYSTEM_LIBS_DEBUG ws2_32 secur32 advapi32 shell32 crypt32 wldap32)
set(libpq_libpq_pq_FRAMEWORK_DIRS_DEBUG )
set(libpq_libpq_pq_FRAMEWORKS_DEBUG )
set(libpq_libpq_pq_DEPENDENCIES_DEBUG libpq::pgport libpq::pgcommon)
set(libpq_libpq_pq_SHARED_LINK_FLAGS_DEBUG )
set(libpq_libpq_pq_EXE_LINK_FLAGS_DEBUG )
set(libpq_libpq_pq_NO_SONAME_MODE_DEBUG FALSE)

# COMPOUND VARIABLES
set(libpq_libpq_pq_LINKER_FLAGS_DEBUG
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,SHARED_LIBRARY>:${libpq_libpq_pq_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,MODULE_LIBRARY>:${libpq_libpq_pq_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,EXECUTABLE>:${libpq_libpq_pq_EXE_LINK_FLAGS_DEBUG}>
)
set(libpq_libpq_pq_COMPILE_OPTIONS_DEBUG
    "$<$<COMPILE_LANGUAGE:CXX>:${libpq_libpq_pq_COMPILE_OPTIONS_CXX_DEBUG}>"
    "$<$<COMPILE_LANGUAGE:C>:${libpq_libpq_pq_COMPILE_OPTIONS_C_DEBUG}>")
########### COMPONENT libpq::pgcommon VARIABLES ############################################

set(libpq_libpq_pgcommon_INCLUDE_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/include")
set(libpq_libpq_pgcommon_LIB_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/lib")
set(libpq_libpq_pgcommon_BIN_DIRS_DEBUG )
set(libpq_libpq_pgcommon_LIBRARY_TYPE_DEBUG STATIC)
set(libpq_libpq_pgcommon_IS_HOST_WINDOWS_DEBUG 1)
set(libpq_libpq_pgcommon_RES_DIRS_DEBUG )
set(libpq_libpq_pgcommon_DEFINITIONS_DEBUG )
set(libpq_libpq_pgcommon_OBJECTS_DEBUG )
set(libpq_libpq_pgcommon_COMPILE_DEFINITIONS_DEBUG )
set(libpq_libpq_pgcommon_COMPILE_OPTIONS_C_DEBUG "")
set(libpq_libpq_pgcommon_COMPILE_OPTIONS_CXX_DEBUG "")
set(libpq_libpq_pgcommon_LIBS_DEBUG libpgcommon)
set(libpq_libpq_pgcommon_SYSTEM_LIBS_DEBUG )
set(libpq_libpq_pgcommon_FRAMEWORK_DIRS_DEBUG )
set(libpq_libpq_pgcommon_FRAMEWORKS_DEBUG )
set(libpq_libpq_pgcommon_DEPENDENCIES_DEBUG )
set(libpq_libpq_pgcommon_SHARED_LINK_FLAGS_DEBUG )
set(libpq_libpq_pgcommon_EXE_LINK_FLAGS_DEBUG )
set(libpq_libpq_pgcommon_NO_SONAME_MODE_DEBUG FALSE)

# COMPOUND VARIABLES
set(libpq_libpq_pgcommon_LINKER_FLAGS_DEBUG
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,SHARED_LIBRARY>:${libpq_libpq_pgcommon_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,MODULE_LIBRARY>:${libpq_libpq_pgcommon_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,EXECUTABLE>:${libpq_libpq_pgcommon_EXE_LINK_FLAGS_DEBUG}>
)
set(libpq_libpq_pgcommon_COMPILE_OPTIONS_DEBUG
    "$<$<COMPILE_LANGUAGE:CXX>:${libpq_libpq_pgcommon_COMPILE_OPTIONS_CXX_DEBUG}>"
    "$<$<COMPILE_LANGUAGE:C>:${libpq_libpq_pgcommon_COMPILE_OPTIONS_C_DEBUG}>")
########### COMPONENT libpq::pgport VARIABLES ############################################

set(libpq_libpq_pgport_INCLUDE_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/include")
set(libpq_libpq_pgport_LIB_DIRS_DEBUG "${libpq_PACKAGE_FOLDER_DEBUG}/lib")
set(libpq_libpq_pgport_BIN_DIRS_DEBUG )
set(libpq_libpq_pgport_LIBRARY_TYPE_DEBUG STATIC)
set(libpq_libpq_pgport_IS_HOST_WINDOWS_DEBUG 1)
set(libpq_libpq_pgport_RES_DIRS_DEBUG )
set(libpq_libpq_pgport_DEFINITIONS_DEBUG )
set(libpq_libpq_pgport_OBJECTS_DEBUG )
set(libpq_libpq_pgport_COMPILE_DEFINITIONS_DEBUG )
set(libpq_libpq_pgport_COMPILE_OPTIONS_C_DEBUG "")
set(libpq_libpq_pgport_COMPILE_OPTIONS_CXX_DEBUG "")
set(libpq_libpq_pgport_LIBS_DEBUG libpgport)
set(libpq_libpq_pgport_SYSTEM_LIBS_DEBUG )
set(libpq_libpq_pgport_FRAMEWORK_DIRS_DEBUG )
set(libpq_libpq_pgport_FRAMEWORKS_DEBUG )
set(libpq_libpq_pgport_DEPENDENCIES_DEBUG )
set(libpq_libpq_pgport_SHARED_LINK_FLAGS_DEBUG )
set(libpq_libpq_pgport_EXE_LINK_FLAGS_DEBUG )
set(libpq_libpq_pgport_NO_SONAME_MODE_DEBUG FALSE)

# COMPOUND VARIABLES
set(libpq_libpq_pgport_LINKER_FLAGS_DEBUG
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,SHARED_LIBRARY>:${libpq_libpq_pgport_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,MODULE_LIBRARY>:${libpq_libpq_pgport_SHARED_LINK_FLAGS_DEBUG}>
        $<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,EXECUTABLE>:${libpq_libpq_pgport_EXE_LINK_FLAGS_DEBUG}>
)
set(libpq_libpq_pgport_COMPILE_OPTIONS_DEBUG
    "$<$<COMPILE_LANGUAGE:CXX>:${libpq_libpq_pgport_COMPILE_OPTIONS_CXX_DEBUG}>"
    "$<$<COMPILE_LANGUAGE:C>:${libpq_libpq_pgport_COMPILE_OPTIONS_C_DEBUG}>")