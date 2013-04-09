f280x_driverlib
===============

New style API Driverlib for TMS320F280x.

Just checkout this project and import it as an Existing CCS Eclipse Project.

Use variable **INSTALLROOT_F280x_V170** to point to installation root for checkout (e.g. **${PROJECT_LOC}/../f280x_driverlib** if the current project's root in the same directory as f280x_driverlib).

Don't forget to setup:
 1. CCS Build -> Variables -> add **INSTALLROOT_F280x_V170** to **${PROJECT_ROOT}/../f280x_driverlib**
 2. CCS Build -> Dependencies -> "driverlib" checkbox
 3. CCS Build -> C2000 Compiler -> Include Options -> add include for **"${INSTALLROOT_F280x_V170}"** (with quotes).
 4. CCS Build -> C2000 Linker -> File Search Path -> add path **"${INSTALLROOT_F280x_V170}/f280x_common/lib"** (with quotes) and library "driverlib.lib" (with quotes).
 5. C/C++ Build -> Build Variables -> add **INSTALLROOT_F280x_V170** to **${PROJECT_ROOT}/../f280x_driverlib**

Also you may want to symlink "driverlib.lib" to your project with the following location: **INSTALLROOT_F280x_V170/f280x_common/lib/driverlib.lib**

In order to use driverlib in your project you'll need to add following required include:

\#include "DSP28x_Project.h"

Then any of wanted peripherals or system includes:

\#include "f280x_common/include/adc.h"

\#include "f280x_common/include/clk.h"
