## Development process with the simulator

Follow these steps to develop your Robolab solution and test them with the simulation server and its tests:

1. Git-clone this repository.

2. Change directory into your clone and the ```package/``` directory.

        $ cd RobolabSim/package

3. Edit ```solution/c/h/Configuration.h``` with your group ID.

4. You can now write your solution in ```solution/c/src/```.

5. Compile your solution. **See the README in** ```solution/```**!**

6. Start the simulation server:
    
   6.1. 

        $ java -jar RobolabSim.jar
        
   6.2. Or to specify some IP to start your server at:
        
        $ java -Dspray.can.server.ip="your.ip.here" -jar RobolabSim.jar
        

7. Run your compiled solution (see 5).

8. Visit http://localhost:8080
