import 'package:flutter/material.dart';

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
          
      )
      ),
    );
  }
}
