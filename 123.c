struct Rect transform (struct Rect r)
{
    struct Rect temp;
    temp.lt.x = r.lt.x - (r.lt.y - r.rb.y);
    temp.lt.y = r.lt.y;
    temp.rb.x = r.lt.x;
    temp.rb.y = r.lt.y - (r.rb.x - r.lt.x);
    return temp;
}
