var str = "kjvkjvkjh87t786tkjhvljhknb8in8ito788yp9yo87yo9myo9gni7fv876t89n";
            var numStr = Regex.Replace(str, @"\d", "");
            var chStr = Regex.Replace(str, @"[^\d]", "");
            Console.WriteLine(numStr);
            Console.WriteLine(chStr);
