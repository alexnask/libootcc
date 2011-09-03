use tcc
import tcc
import structs/ArrayList

tcc := Tcc new()
tcc setOutputType(OutputType exe)
tcc compileString("int main(int argc, char *argv[]) { printf(\"%d\" \n,argc); return 0; }")
tcc outputFile("example.out")
//tcc run(["haha","lola"] as ArrayList<String>)
