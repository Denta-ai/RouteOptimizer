#include <iostream>
#include <fstream>
#include <cstdlib>

bool generateImg(){
    FILE* gnuplotPipe = _popen("gnuplot -persist", "w");
    if (!gnuplotPipe) {
        std::cerr << "Error opening Gnuplot pipe." << std::endl;
        return 1;
    }

    fprintf(gnuplotPipe, "set terminal png\n");
    fprintf(gnuplotPipe, "set output 'graph.png'\n");
    fprintf(gnuplotPipe, "set key off\n");
    fprintf(gnuplotPipe, "plot 'coordinate.txt' using 1:2:($0+1) with labels offset 1,1 point pt 7 ps 2 notitle,'' using 1:2 with linespoint pt 7 ps 2 notitle\n");
    
    _pclose(gnuplotPipe);

    return 0;
}

bool generateVisualizeTerminal(){
    FILE* gnuplotPipe = popen("gnuplot", "w");
    if (!gnuplotPipe) {
        std::cerr << "Error opening Gnuplot pipe." << std::endl;
        return 1;
    }

    fprintf(gnuplotPipe, "set terminal dumb size 0,0\n");
    fprintf(gnuplotPipe, "plot 'coordinate.txt' with lines\n");

    pclose(gnuplotPipe);

    return 0;
}

int main() {
    std::ofstream dataFile("coordinate.txt");
    if (!dataFile) {
        std::cerr << "Error opening data file." << std::endl;
        return 1;
    }

    dataFile << "5 1\n";
    dataFile << "4 4\n";
    dataFile << "3 6\n";
    dataFile << "1 8\n";
    dataFile << "5 9\n";
    dataFile.close();

    generateVisualizeTerminal();
    generateImg();

    return 0;
}
