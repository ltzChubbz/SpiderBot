// This class declare the very basic element I use in this program, to store the 3D coordinate of the inputs, outputs, joints and legs.


class coor {

public:
	float X;
	float Z;
	float Y;
    int RotY;

public:
	coor(){
		X = 0.0;
		Z = 0.0;
		Y = 0.0;
        RotY = 0;
	}
	
	void Reset(){
		X = 0.0;
		Z = 0.0;
		Y = 0.0;
		RotY = 0;
	}
/*
	coor(float x1, float z1, float y1){
		x = x1;
		z = z1;
		y = y1;
	}

	void PassValues(coor from){
		x = from.x;
		z = from.z;
		y = from.y;
	}

	void PassValues(float x1, float z1, float y1){
		x = x1;
		z = z1;
		y = y1;
	}

	void AddValues(coor c1, coor c2){
		x = c1.x + c2.x;
		z = c1.z + c2.z;
		y = c1.y + c2.y;
	}

	void AddValues(coor c1, coor c2, coor c3){
		x = c1.x + c2.x + c3.x;
		z = c1.z + c2.z + c3.z;
		y = c1.y + c2.y + c3.y;
	}

*/

};


class coor2 {
public:
	float X;
	float Z;

public:
	coor2(){
		X = 0.0;
		Z = 0.0;
	}
	
	void Reset(){
		X = 0.0;
		Z = 0.0;
	}
};
