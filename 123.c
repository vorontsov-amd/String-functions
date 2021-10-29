struct Rect transform (struct Rect r)
{
    struct Rect temp;
    temp.lt.x = r.lt.x - (r.lt.y - r.rb.y);
    temp.lt.y = r.lt.y;
    temp.rb.x = r.lt.x;
    temp.rb.y = r.lt.y - (r.rb.x - r.lt.x);
    return temp;
}

// Задача 2

int in_region(struct Point p)
{
    if (p.y >= p.x * p.x - 5 && p.y <= 2 && p.x >= -2)
       return 1;
    else return 0;
}
