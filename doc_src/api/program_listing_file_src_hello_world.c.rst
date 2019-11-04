
.. _program_listing_file_src_hello_world.c:

Program Listing for File hello_world.c
======================================

|exhale_lsh| :ref:`Return to documentation for file <file_src_hello_world.c>` (``src\hello_world.c``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #import <stdio.h>
   
   int num_samples;
   char rx_config;
   
   void awesome_func (char foobar) {
       printf("Hello World %c", foobar);
   }
   
   
   void main(void) {
       awesome_func('!');
   }
