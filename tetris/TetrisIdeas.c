//Will tetris look like this 10x20 area for tetris
//tetris_line_0 = "0000000000"
//tetris_line_1 = "0000000001"
//tetris_line_2 = "0000000001"
//tetris_line_3 = "0000000001"
//tetris_line_4 = "0000000001"
//tetris_line_5 = "0000000000"
//tetris_line_6 = "0000000000"
//tetris_line_7 = "0000000000"
//tetris_line_8 = "0000000000"
//tetris_line_9 = "0000000000"
//tetris_line_10= "0000000000"
//tetris_line_11= "0000000000"
//tetris_line_12= "0000000000"
//tetris_line_13= "0000000000"
//tetris_line_14= "0000000000"
//tetris_line_15= "0000000000"
//tetris_line_16= "1111111100"
//tetris_line_17= "1111111110"
//tetris_line_18= "1111111110"
//tetris_line_19= "1111111110"

//a line moving down, it should complete the bottom 3
//ON land - check complete lines.




//HORIZONTAL TETRIS ON A 10X17 GRID
 //---------------------
 //Tetris concepts
 //---------------------

 //Shapes (Point of rotation = X) ( 1 2 3 4 5 6 7 left to right)
 //O--- -O-- -O-- XO-- OX-- -O-- -XO-
 //X--- -X-- -X-- OO-- -OO- OXO- OO--
 //O--- OO-- -OO- ---- ---- ---- ----
 //O--- ---- ---- ---- ---- ---- ----

 //Each shape has a number of possible rotations listed below (possible positions)
 //1 = 2 - it is either horizonzal or vertical
 //2 = 4
 //3 = 4
 //4 = 0 
 //5 = 2
 //6 = 4
 //7 = 2

 //each shape is selected at random
 // the shape moves towards the side at a constant rate. which increases the more points you get.
 //We store a shapes 'Type'. the 'Point of rotation' and 'Position'
 //example-
 //Shape number 1 has 2 possible positions.
 //When a user does '.rotate' we will cycle through the number of possible rotations.
 //If the position of shape 1 is '1' then we know what to do to change it to position '2'
 //using the 'rotation point' + 'position' we know where the parts of the shape are drawn. what what is needed for the next position

 //Rotation is only allowed if-
 //Rotation area is not blocked by the Border or other blocks.

 //Any and all lines that are fully complete with shape parts, will dissapear. and everything above will fall down to replace them. (remember this will be moving from left to rght, not up or down)

 //user can control '.rotate' '.up' '.down' '.right' (right will move the shape faster towards the blocks)

 //Movement is seperate from gravity
 //You can move left to right between the frames that the shape is automatically moved by the game
 //this will enable people to move the shape up and down 'above' a block before the gravity moves the shape.  
 
 
