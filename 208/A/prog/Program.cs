var s = Console.ReadLine();

const string dup = "WUB";

while(s.StartsWith(dup)) {
  s = s.Substring(dup.Length);
}

s = string.Join(' ', s.Split(dup, StringSplitOptions.RemoveEmptyEntries));

while(s.EndsWith(dup)) {
  s = s.Substring(0, s.Length - dup.Length);
}

Console.WriteLine(s);
