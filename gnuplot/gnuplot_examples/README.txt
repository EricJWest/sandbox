1. SYNOPSIS

This folder contains four examples of using Gnuplot, each located in their own folder:

1) sine - plots a simple sine function
2) sinusoids - plots several sinusoidal functions on the same graph
3) shm - creates an array of plots related to simple harmonic motion
4) plotdata - plots data from a file


2. HOW TO EDIT GNUPLOT SCRIPTS

Each folder contains a Gnuplot script with the settings for the plot(s) to be created. Gnuplot scripts have the file extension .gp (for example: sine.gp). These script files can be opened and edited using any text editor (e.g., Notepad or Vim). Open the script files and study/edit their contents.


3. HOW TO RUN GNUPLOT SCRIPTS

To run a script, open a terminal and navigate to the directory where the script is located. Launch an instance of Gnuplot by typing 'gnuplot' at the shell (command) prompt. Once Gnuplot has opened, you should see a Gnuplot prompt, gnuplot>. Run a script using the 'load "myfile.gp"' command. For example to run sine.gp, navigate to the folder sine, then launch Gnuplot, and then type 

gnuplot> load 'sine.gp' 

at the gnuplot command prompt. 


4. PRINTING TO SCREEN VERSUS WRITING TO FILE

The Gnuplot scripts in these examples do two things. First, they print the output to the screen in a new window. Second, they write the output to an .eps file. To prevent writing to file, simply comment out the corresponding block of code in the script (the comment symbol in Gnuplot is #).

One thing to notice is that output is terminal dependent. In other words, the appearance of the screen output and file output are sometimes different. That is because different 'terminals' are used for each. For more information about the possible terminals available, and the options used with each terminal, type 'help terminal' at the gnuplot prompt.


5. COMPLICATIONS WITH MULTIGRID

The shm example is slightly more complicated than the others. This example uses the multigrid option, which plots an array of graphs instead of just one graph. The array is initiated with 'set multigrid layout ...' and terminates with 'unset multigrid'. The complication is that one cannot use the 'replot' option to replot the entire multigrid plot. Instead 'replot' only replots the last graph in the array. To replot all of the graphs together, the entire multigrid block needs to be re-entered. This means that one cannot simply write to a file using 'replot', as is done in the other examples. To avoid duplicating the plot settings (which is prone to transcription errors, and hence, bad practice), the shm example contains THREE Gnuplot scripts. The plot settings are stored in shm.gp, which are called from the two other scripts. To print to screen, run the script printToX11.gp, which sets the terminal to x11 (the screen), and then loads the settings from shm.gp. Alternatively, to write to a file, one has to run the separate script writeToFile.gp, which changes the terminal and output needed to write to a file, and then loads the settings from shm.gp (and finishes by resetting the terminal to x11). To make changes to the plot settings, edit shm.gp. The print/write scripts, printToX11.gp and writeToFile.gp, should not need editing.


6. EXITING/QUITTING GNUPLOT

To exit Gnuplot, type any of the following at the gnuplot prompt: CTRL-D, or q, or quit, or exit.
