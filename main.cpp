/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Anandhika
//Vivekananda college of engineering for women 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Weather data structure
struct WeatherData {
    string location;
    string date;
    string weatherCondition;
    double temperature;
    double humidity;
    double rainPossibility;
};

// WeatherApp class
class WeatherApp {
private:
    string appName;
    string collegeName;
    vector<WeatherData> weatherData;

public:
    // Constructor
    WeatherApp(string name, string college) {
        appName = name;
        collegeName = college;
    }

    // Add weather data
    void addWeatherData(string location, string date, string condition, double temperature, double humidity, double rainPossibility) {
        WeatherData data;
        data.location = location;
        data.date = date;
        data.weatherCondition = condition;
        data.temperature = temperature;
        data.humidity = humidity;
        data.rainPossibility = rainPossibility;

        weatherData.push_back(data);
    }

    // Display weather report for today
    void displayTodayWeather() {
        if (!weatherData.empty()) {
            cout << "Today's Weather Report:" << endl;
            WeatherData data = weatherData.back();
            cout << "Location: " << data.location << endl;
            cout << "Date: " << data.date << endl;
            cout << "Weather Condition: " << data.weatherCondition << endl;
            cout << "Temperature: " << data.temperature << " degrees" << endl;
            cout << "Humidity: " << data.humidity << "%" << endl;
            cout << "Rain Possibility: " << data.rainPossibility << "%" << endl;
        } else {
            cout << "No weather data available." << endl;
        }
    }

    // Other member functions and methods...

};

int main() {
    // Create WeatherApp object
    WeatherApp app("WeatherApp", "My College");

    // Add weather data
    app.addWeatherData("New York", "2023-07-07", "Cloudy", 25.5, 70.0, 40.0);
    app.addWeatherData("New York", "2023-07-06", "Sunny", 28.0, 65.0, 10.0);
    app.addWeatherData("New York", "2023-07-05", "Rainy", 22.0, 75.0, 80.0);

    // Display today's weather report
    app.displayTodayWeather();

    return 0;
}
