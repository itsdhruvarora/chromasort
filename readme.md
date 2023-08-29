# Sorting Algorithms Visualization

This project provides a visualization tool for various sorting algorithms. Users can see how different sorting algorithms work step by step using interactive graphics.

## Table of Contents

- [Demo](#demo)
- [Features](#specifications)
- [Getting Started](#getting-started)
- [Pre-Requisites](#pre-requisite)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Demo

<img src = "https://github.com/itsdhruvarora/chromasort/blob/main/images/Screenshot_2023-08-28-13-16-50_1920x1080.png">
<img src = "https://github.com/itsdhruvarora/chromasort/blob/main/images/ezgif-2-59c8117805.gif">

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


## Pre-Requisite

-SDL2 should be installed on your system

**ARCH**

```bash
   sudo pacman -Syu sdl2
```

**UBUNTU**

```bash
   sudo apt-get update
   sudo apt-get install libsdl2-dev
```

**CENTOS**

```bash
   sudo yum install SDL2-devel
```


## Getting Started

1. **Clone the repository:**

   ```bash
   git clone https://github.com/itsdhruvarora/chromasort.git
   cd sorting-algorithms-visualization
   ```

2. **Compile the Project**

Compile the necessary files to create the visualization tool.

```bash
   gcc -o visualizer main.c -lSDL2 -L. -lvis
```

3. **Run the Program**
   Run the compiled program to interact with the visualization.

```bash
./visualizer
```

## Usage

- Upon running the program, you'll be presented with an introductory screen and a list of available sorting algorithms.
- Choose a sorting algorithm by entering its corresponding number.
- The visualization will start, showing each step of the sorting process graphically.
- Follow the on-screen instructions to navigate through the visualization.



## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these guidelines:

1. Fork the repository.
2. Create a new branch: `git checkout -b feature/your-feature-name`.
3. Make your changes and commit them: `git commit -m 'Add some feature'`.
4. Push to the branch: `git push origin feature/your-feature-name`.
5. Open a pull request to the `main` branch of this repository.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.