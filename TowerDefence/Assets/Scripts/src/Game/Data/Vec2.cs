using System;
using UnityEngine;
class Vec2
{
    public float x;
    public float y;
    public static Vec2 Zero()
    {
        return new Vec2(0, 0);
    }
    public static Vec2 Up()
    {
        return new Vec2(0, 1);
    }
    public static float GetDistance(Vec2 v1, Vec2 v2){
        return Mathf.Sqrt(Mathf.Pow(v1.x - v2.x, 2) + Mathf.Pow(v1.y - v2.y, 2));
    }
    public Vec2(float a, float b)
    {
        x = a;
        y = b;
    }

    public Vec2 GetNormal()
    {
         

        float n = x * x + y * y;
        if ((int)n == 1)
        {
            return this;
        }
        else
        {
            float w = Mathf.Sqrt(n);
            float h = 1 / w;
            return new Vec2(x * h, y * h);
        }

    }

    public bool IsZero()
    {
        //如果这个数小于最小的数，说明等于0
        if (x < float.MinValue && y < float.MinValue)
        {
            return true;
        }
        return false;
    }


    //Vector.rotate = function(vector, angle)
    //{
    //    var cos = Math.cos(angle), sin = Math.sin(angle);
    //    return {
    //    x: vector.x* cos -vector.y * sin,
    //  y: vector.x* sin +vector.y * cos
    //    };
    //};

    public static Vec2 Rotate(Vec2 v, float radians)
    {


        float cos = Mathf.Cos(radians);
        float sin = Mathf.Sin(radians);
        return new Vec2(v.x * cos - v.y * sin, v.x * sin + v.y * cos);

        //float sin = Mathf.Sin(radians);
        //float cos = Mathf.Cos(radians);

        //float ex, ey;
        //if (v.IsZero())
        //{
        //    ex = x * cos - y * sin;
        //    ey = y * cos + x * sin;
        //}
        //else
        //{
        //    float tempX = x - v.x;
        //    float tempY = y - v.y;
        //    ex = tempX * cos - tempY * sin + x;
        //    ey = tempY * cos + tempX * sin + y;
        //}
        //return new Vec2(ex, ey);
    }
    public static Vec2 operator +(Vec2 a, Vec2 b)
    {
        return new Vec2(a.x + b.x, a.y + b.y);
    }
    public static Vec2 operator -(Vec2 a, Vec2 b)
    {
        return new Vec2(a.x - b.x, a.y - b.y);
    }

    public static Vec2 operator *(Vec2 v, float value)
    {
        return new Vec2(v.x * value, v.y * value);
    }
    public static  Vec2 MultiValue(Vec2 v, float value)
    {
        return new Vec2(v.x * value, v.y * value);
    }
}