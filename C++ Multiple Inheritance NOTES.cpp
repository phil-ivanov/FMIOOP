// Multiple Inheritence in C++

// Virtual inheritence:
 class Vehicle
 {
	private:
		char* name;
		float height, weight;
	public:
		Vehicle(const char*, float, float);
		Vehicle& operator(const Vehicle);
		~Vehicle();
		
		bool canPassUnderBridge(float h) const;
		bool canPassOverBridge(float w) const;
		float getHeight() const;
		float getWeight() const; 
}

class LandVehicle: virtual public Vehicle
 {
	private:
		float speed;
	public:
		LandVehicle(const char*, float, float, float);
		`LandVehicle() {}
		float getSpeed() const;
 }

 class WaterVehicle: virtual public Vehicle
 {
 	private:
		float speed;
	public:
		WaterVehicle(const char*, float,float,float,float);
		~WaterVehicle() {}
		float getSpeed() const;
 }