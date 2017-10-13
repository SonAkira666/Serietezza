#include <string>

class ProvaClasse {
	public:

	ProvaClasse();
	ProvaClasse(int initX , int initY , int initZ);

	private:

	int x , y , z;

	public:

	int getX();
	int getY();
	int getZ();
	void setNumerini(int newX , int newY , int newZ);
	void setX(int newX);
  void setY(int newY);
  void setZ(int newZ);

	std::string toString();
};
