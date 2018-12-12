import java.applet.*;
import java.awt.*;
/*<applet code="q3b.java" width=300 height=300> </applet>*/
public class q3b extends Applet
{
  Image p;
  public void init()
  {
    p=getImage(getDocumentBase(),"yo.jpg");
  }
  public void paint(Graphics g) {
      g.drawImage(p, 30,30, this);
      g.drawString("Kiit University",310,400);
    }

}
