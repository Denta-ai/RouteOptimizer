<h1>Route Optimizer</h1>
<p>This repository contains code for a Route Optimizer that implements Dijkstra's algorithm to find the shortest path 
  between nodes in a graph and generates visualizations of the graph.</p>

<h2>Introduction</h2>
<p>The Route Optimizer project aims to optimize routes and find the shortest path between nodes in a graph. 
  It provides functionality to load input data, generate graphs, calculate weights, and visualize the resulting graph.</p>

<h2>Installation</h2>
<p>To use the Route Optimizer, follow these steps:</p>
<ol>
  <li>Install the gnuplot based on your operation system here: http://www.gnuplot.info/download.html and follow the instruction</li>
  <li>Clone the repository:</li>
  <pre>
    <code>$ git clone &lt;repository_url&gt;
    $ cd &lt;repository_directory&gt;</code></pre>
  <li>Build the project (if required) using your preferred build system.</li>
  <li>Run the program:</li>
  <pre>    <code>$ ./main</code></pre>
</ol>

<h2>Features</h2>
<ul>
  <li>
    <strong>Shortest Path Calculation:</strong> 
    The <code>algorithm.cpp</code> file contains an implementation of Dijkstra's algorithm, which can find the shortest path between nodes in a graph.
  </li>
  <li>
    <strong>Graph Generation:</strong> 
    The <code>graph.cpp</code> file provides functionality to generate a graph based on input data and save it as an image file.
  </li>
</ul>

<h2>Usage</h2>
<p>To find the shortest path between nodes:</p>
<ol>
  <li>Modify the input data in the appropriate files (<code>pnts.txt</code> and <code>edges.txt</code>) to represent your graph.</li>
  <li>Compile and run the program.</li>
  <li>The program will calculate and display the shortest path between nodes using Dijkstra's algorithm.</li>
</ol>

<p>To generate a graph:</p>
<ol>
  <li>Modify the input data in the appropriate files (<code>pnts.txt</code> and <code>edges.txt</code>) to represent your graph.</li>
  <li>Compile and run the program.</li>
  <li>The program will generate a visualization of the graph and save it as an image file (<code>graph.png</code>).</li>
</ol>

<h2>File Structure</h2>
<ul>
  <li><strong>algorithm.cpp:</strong> Contains the implementation of Dijkstra's algorithm to find the shortest path.</li>
  <li><strong>graph.cpp:</strong> Provides functionality to generate a graph and visualize it.</li>
  <li><strong>pnts.txt:</strong> Input file containing the coordinates and labels of the graph's nodes.</li>
  <li><strong>edges.txt:</strong> Input file containing the edges of the graph.</li>
</ul>

<h2>Contributing</h2>
<p>Contributions to this project are welcome! If you'd like to contribute, please follow these steps:</p>
<ol>
  <li>Fork the repository.</li>
  <li>Create a new branch for your feature or bug fix.</li>
  <li>Make your changes and test them thoroughly.</li>
  <li>Commit your changes and push them to your forked repository.</li>
  <li>Submit a pull request, describing the changes you've made.</li>
</ol>

<h2>License</h2>
<p>This project is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for more information.</p>

<h2>Contact</h2>
<p>If you have any questions or suggestions regarding this project, feel free to contact me:</p>
<ul>
  <li>Email: <a href="mailto:your_email@example.com">dentacoy@example.com</a></li>
</ul>
