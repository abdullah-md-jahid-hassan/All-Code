package com.mycompany.l9_06_1001_time.cless;
class Time {
    private 
            long hour;
            long minute;
            long second;
    public 
        Time() {this(0);}
        Time(long elapseTime) {setTime(elapseTime);}
        Time(long hour, long minute, long second) {
		this.hour = hour;
		this.minute = minute;
		this.second = second;
        }
        long getHour() {return hour;}
        long getMinute() {return minute;}
        long getSecond() {return second;}
        void setTime(long elapseTime) {
            long totalMilliseconds = System.currentTimeMillis();
            long totalSeconds = totalMilliseconds / 1000;
            second = totalSeconds % 60;
            long totalMinutes = totalSeconds / 60;
            minute = totalMinutes % 60;
            long totalHours = totalMinutes / 60;
            hour = totalHours % 24;
            if (elapseTime > 0) {
                totalSeconds = elapseTime / 1000;
                second = totalSeconds % 60;
                totalMinutes = totalSeconds / 60;
                minute = totalMinutes % 60;
                totalHours = totalMinutes / 60;
                hour = totalHours % 24;
            }
        }
}
public class L9_06_1001_timeCless {

    public static void main(String[] args) {
        Time time1 = new Time();
        Time time2 = new Time(555550000);
        System.out.println(time1.getHour() + ":" + time1.getMinute() +":" + time1. getSecond());
        System.out.println(time2.getHour() + ":" + time2.getMinute() +":" + time2. getSecond());
    }
}
