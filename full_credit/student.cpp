class Student{
  private:
    string student_name;
    double exam_sum, exam_num_grades;
  public:
    Student(string name): student_name{name}, exam_sum{0}, exam_num_grades{0} { }
    string name(){
      //cout<<student_name;
      return student_name;
    }
    void exam (double grade){
      exam_sum += grade;
      //grade += exam_sum;
      exam_num_grades ++;
     
    }
    double average(){
      double avg;
     // if (exam_num_grades==0)
     // {  avg = 100; }
     // else
      avg = (exam_sum)/(exam_num_grades);
     // cout<<avg<<endl;
      return avg;
    }

};
