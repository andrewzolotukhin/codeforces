double result = 0;

int n, l;

var line1 = Console.ReadLine().Split(" ", StringSplitOptions.RemoveEmptyEntries);

n = int.Parse(line1[0]);
l = int.Parse(line1[1]);

List<int> items = new();

var line2 = Console.ReadLine().Split(" ", StringSplitOptions.RemoveEmptyEntries);

for (int i = 0; i < n; i++)
{
    items.Add(int.Parse(line2[i]));
}

items.Sort();

int maxDiff = int.MinValue;

for(int i = 1; i < items.Count; i++)
{
    int diff = items[i] - items[i - 1];
    if (diff > maxDiff)
    {
        maxDiff = diff;
    }
}

result = Math.Max(maxDiff / 2.0, Math.Max(items[0], l - items[n - 1]));

Console.WriteLine("{0:F10}", result);


