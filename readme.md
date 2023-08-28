# Sorting Algorithms Visualization

This project provides a visualization tool for various sorting algorithms. Users can see how different sorting algorithms work step by step using interactive graphics.

## Table of Contents

- [Demo](#demo)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Demo

![Demo Screenshot](https://github.com/itsdhruvarora/chromasort/blob/main/images/Screenshot_2023-08-28-13-16-50_1920x1080.png)
![Demo GIF](https://github.com/itsdhruvarora/chromasort/blob/main/images/ezgif-2-59c8117805.gif)

## Specifications

- **Interactive Visualization:** The project will provide step-by-step visualizations of sorting algorithms.
- **Supported Algorithms:** The tool will include Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort.
- **User-Friendly Interface:** Users can easily select sorting algorithms and navigate through visualization steps.
- **Clear Animations:** Visual animations will clearly demonstrate how data is manipulated during sorting.
- **Platform:** The project will be implemented in C using the SDL library for graphics.

## Design

The project is organized into several key components:

- **Source Code:** The C source code files are organized for each sorting algorithm, making it easy to understand and maintain.
- **Headers:** The `headers` directory contains header files corresponding to the source code files, ensuring modularity and separation of concerns.
- **Graphics:** SDL graphics are used to create interactive animations that display each sorting algorithm's progress.
- **User Input:** The tool will prompt users to select a sorting algorithm and provide guidance on using the visualization.

## Getting Started

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/sorting-algorithms-visualization.git
   cd sorting-algorithms-visualization
   ```

2. **Compile the Project**

Compile the necessary files to create the visualization tool.

```bash
gcc source/main.c source/intro.c -Iheaders -o sorting-visualization
```

3. **Run the Program**
   Run the compiled program to interact with the visualization.

```bash
./sorting-visualization
```

## Usage

- Upon running the program, you'll be presented with an introductory screen and a list of available sorting algorithms.
- Choose a sorting algorithm by entering its corresponding number.
- The visualization will start, showing each step of the sorting process graphically.
- Follow the on-screen instructions to navigate through the visualization.
