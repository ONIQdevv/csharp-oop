using System;

namespace MyProg {

    class Program {
        
        public class Student : IComparable<Student> {

            // Student Info
            private string fName;
            private string lName;
            private string pName;
            private  string bDate;
            private  int length;
            
            //lab 3
            public string BDate
            {
                get => bDate;
                set => bDate = value;
            }

            public int Length { 
                get => length;
                set => length = value;
            }
            
            public string Nationality { get; set; }
            public string MotherCountry { get; set; }

            public int LengthOfName { get; }
            public Student()
            {
                fName = "Antonio";
                lName = "Muchachos";
                pName = "Andreas";
                BDate = "15.03.2003";
                Length = 190;
                LengthOfName = fName.Length;
                Nationality = "Ukrainian";
                MotherCountry = "Ukraine";
            }
            public Student (string fName,string lName, string pName)
            {
                this.fName = fName;
                this.lName = lName;
                this.pName = pName;
                LengthOfName = fName.Length;
            }
            public Student (string fName,string lName, string pName,string bDate,int length)
            {
                this.fName = fName;
                this.lName = lName;
                this.pName = pName;
                BDate = bDate;
                Length = length;
                LengthOfName = fName.Length;
            }
            public string GetBirthValue() {
                return bDate;
            }

            public int GetLengthValue() {
                return length;
            }

            public void SetBirthValue(string bValue)
            {
                bDate = bValue;
            }
            public void SetLengthValue(int lValue)
            {
                length = lValue;
            }
            
            // 'Format' output way
            public override string ToString() {
                return string.Format("Student's name: {0} {1} {2} Birthday date: {3} Length: {4}", lName, fName, pName,GetBirthValue(),GetLengthValue());
            }
            
            //lab 4
            public int CompareTo(Student? obj)
            {
                if (obj == null) return 2;
                
                if (Length < obj.length)
                    return 1;
                if (Length > obj.length)
                    return -1;
                
                return 0;  
            }
        }

        static void Main(string[] args)
        {
            var student1 = new Student();
            var student2 = new Student("Andrey", "Klymchuk", "Oleksandrovych");
            student2.BDate = "23.11.2004";
            student2.Length = 169;
            var student3 = new Student("Kate", "Afanasiev", "Ivanovych","18.05.2002",183);

            Console.WriteLine(student1);
            Console.WriteLine(student2);
            Console.WriteLine(student3);

            //lab 5
            List<Student> list = new List<Student>();
            list.Add(student1);
            list.Add(student2);
            list.Add(student3);
            for (int i = 0; i < 8; i++)
            {
                list.Add(new Student());
            }

            Console.WriteLine("Start Sort");
            Console.WriteLine(" ");
            Console.WriteLine(" ");
            Console.WriteLine(" ");
            for (int i = 0; i < list.Count - 1; i++)
            {
                for (int j = i + 1; j < list.Count; j++)
                {
                    if (list[i].CompareTo(list[j]) > 0)
                    {
                        var tmp = list[i];
                        list[i] = list[j];
                        list[j] = tmp;
                    }
                }
            }
            
            foreach (var student in list)
            {
                Console.WriteLine(student);
            }

        }
    }
}