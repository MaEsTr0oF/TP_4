#pragma once
public ref class Settings {
private:
	int education;
public:
	property int MyProperty {
		int get() { return education; }
		void set(int value) {
			education = value;
		}
	}
};
public ref class Settings1 {
private:
	int comunicability;
public:
	property int MyProperty {
		int get() { return comunicability; }
		void set(int value) {
			comunicability = value;
		}
	}
};
public ref class Settings2 {
private:
	int anxiety;
public:
	property int MyProperty {
		int get() { return anxiety; }
		void set(int value) {
			anxiety = value;
		}
	}
};
