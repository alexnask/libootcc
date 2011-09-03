include libtcc

Tcc: cover from TCCState* {
    new: extern(tcc_new) static func -> This
    delete: extern(tcc_delete) func
    enableDebug: extern(tcc_enable_debug) func
    setErrorFunc: extern(tcc_set_error_func) func(Pointer,Func(Pointer,CString))
    setWarning: extern(tcc_set_warning) func(CString,Int)->Int
    addIncludePath: extern(tcc_add_include_path) func(CString)->Int
    addSysIncludePath: extern(tcc_add_sys_include_path) func(CString)->Int
    defineSymbol: extern(tcc_define_symbol) func(CString,CString)
    undefineSymbol: extern(tcc_undefine_symbol) func(CString)
    addFile: extern(tcc_add_file) func(CString)->Int
    compileString: extern(tcc_compile_string) func(CString)->Int
    setOutputType: extern(tcc_set_output_type) func(OutputType)->Int
    addLibraryPath: extern(tcc_add_library_pat) func(CString)->Int
    addLibrary: extern(tcc_add_library) func(CString)->Int
    addSymbol: extern(tcc_add_symbol) func(CString,Pointer)->Int
    outputFile: extern(tcc_output_file) func(CString)->Int
    run: extern(tcc_run) func(Int,CString*)->Int // Do this with ArrayList<String>
    relocate: extern(tcc_relocate) func(Pointer)->Int
    getSymbol: extern(tcc_get_symbol) func(CString)->Pointer
    setLibPath: extern(tcc_set_lib_path) func(CString)
}

OutputType: enum {
    memory: extern(TCC_OUTPUT_MEMORY),
    exe: extern(TCC_OUTPUT_EXE),
    dll: extern(TCC_OUTPUT_DLL),
    obj: extern(TCC_OUTPUT_OBJ),
    preprocess: extern(TCC_OUTPUT_PREPROCESS)
}
