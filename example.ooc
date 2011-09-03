use tcc
import tcc

tcc := Tcc new()
tcc setOutputType(OutputType exe)
tcc compileString("int main(int argc, char *argv[]) { printf(\"%d\",argc); return 0; }" toCString())
tcc outputFile("example.out")
