var s = Console.ReadLine();

s = s.Replace("{", "").Replace("}", "").Replace(" ", "");

var arr = s.Split(",", StringSplitOptions.RemoveEmptyEntries);
var d = new Dictionary<char, int>();

foreach (var ch in arr)
{
  if(!d.ContainsKey(ch[0])) {
    d.Add(ch[0], 1);
  }
}

Console.WriteLine(d.Keys.Count);
