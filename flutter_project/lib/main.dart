import 'package:flutter/material.dart';
import 'package:sizer/sizer.dart';

void main() {
  runApp(appScreen());
}

class appScreen extends StatefulWidget {
  @override
  State<appScreen> createState() => _appScreenState();
}

class _appScreenState extends State<appScreen> {
  int selectedIndex = 1;

  @override
  Widget build(BuildContext context) {
    
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      
      home: Scaffold(
        
        body: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
<<<<<<< Updated upstream

            
=======
>>>>>>> Stashed changes
            Padding(
              padding: const EdgeInsets.all(3.0),
              child: Container(
                height: 300,
                width: 400,
                color: Colors.amberAccent,
              ),
            ),
            Padding(
              padding: const EdgeInsets.all(3.0),
              child: Container(
                height: 280,
                width: 400,
                color: Colors.green,
              ),
            ),
            Padding(
              padding: const EdgeInsets.all(3.0),
              child: Container(
                height: 200,
                width: 400,
                color: Colors.blue,
              ),
            ),
          ],
        ),
      ),
    );
  }
}
