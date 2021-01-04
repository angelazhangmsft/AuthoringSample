using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.Foundation;

namespace AuthoringSample
{
    public class Shapes
    {
        private Rect _rectObject = new Rect(0,0,10,10);
        public Rect RectObject 
        {
            get { return _rectObject; } 
            set { _rectObject = value; }
        } 

        public Rect MoveRight(Rect r, double d)
        {
            _rectObject.X += d;
            return RectObject;
        }
    }
}
