#ifndef CLOCK_H_
#define CLOCK_H_

class Clock {
private:
    int time;
    int alarm = 0;
    bool alarmHasBeenSet = false;

    void checkAndUpdateAlarm();

public:
    int getTime() const;
    Clock();
    Clock(int t);

    void tick();
    void tick(int dt);

    void setAlarm(int t);
};

#endif