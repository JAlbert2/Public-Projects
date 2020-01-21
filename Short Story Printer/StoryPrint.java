//Code by JAlbert and the internet
//jonah.albert2@gmail.com
//Comments are notes/placeholders/debugging commands

 

import java.awt.*;
import java.awt.print.PageFormat;
import java.awt.print.Printable;
import java.awt.print.PrinterException;
import java.util.*;
import java.util.List;
import javax.print.*;
import javax.print.attribute.*;
import javax.swing.*;

import java.io.*;

public class StoryPrint implements Printable
{
	
	//public static final byte[] TXT_NORMAL = {0x1b, 0x21, 0x00}; // Normal text
	
	public static void main(String[] args) throws UnsupportedEncodingException, PrintException, IOException, InterruptedException
	{		
		getPrinters();
		JFrame frame = new JFrame("Short Story Printer");
        int l=1200,w=1000;
        frame.setSize(l,w);
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Panel to hold our buttons
        JPanel panel = new JPanel();
        frame.add(panel);

        // Button to initialize everything
        JButton print=new JButton("Print");
        print.setPreferredSize(new Dimension(800,500));
        frame.setVisible(true);
        print.addActionListener(new PrintListener());
        
		frame.setLayout( new GridBagLayout() );
		frame.add(print, new GridBagConstraints());
	}
	

	public static void main() throws PrintException, IOException 
	{
		//print some stuff
		//testing testing 1 2 3eeeee
		//Test length string
		//1234567890 \n\n| |\n\nqwerty\n\nasdfgh\n\njkl;\'\n\nzxcvbnm\n\n,./\n\n|	|\n\nQWERTYUIOP\n\nASDFGH\n\nJKL:\"\n\nZXCVBNM\n\n!$%&*()_-
		//Each char is 1/16", space is 3/16", tab is 12/16"
		
		String story=StoryPrep.readStory();
		story=StoryPrep.format(story);
		//System.out.println(story);
		printString("EPSON-TM-T20II", "\n"+story+" \n\n\n");
 
		// cut that paper!
		byte[] cutP=new byte[] { 0x1d, 'V', 2 };
 
		printBytes("EPSON-TM-T20II", cutP);		
	}


	public static void getPrinters()
	{
		//System.out.println("Hit 1");
		DocFlavor flavor=DocFlavor.BYTE_ARRAY.AUTOSENSE;
		PrintRequestAttributeSet pras=new HashPrintRequestAttributeSet();
		
		PrintService printServices[]=PrintServiceLookup.lookupPrintServices(flavor, pras);
		
		List<String> printerList=new ArrayList<String>();
		for(PrintService printerService: printServices)
		{
			//System.out.println("Hit 2");
			printerList.add(printerService.getName());
		}
		
		//System.out.println(printerList);
	}
 
	@Override
	public int print(Graphics g, PageFormat pf, int page) throws PrinterException 
	{
		//System.out.println("Hit 3");
		if (page > 0) 
		{ 
			System.out.println("Hit 4");
			/* We have only one page, and 'page' is zero-based */
			return NO_SUCH_PAGE;
		}
		//System.out.println("Hit 5");
		/*
		 * User (0,0) is typically outside the imageable area, so we must
		 * translate by the X and Y values in the PageFormat to avoid clipping
		 */
		Graphics2D g2d=(Graphics2D) g;
		g2d.translate(pf.getImageableX(), pf.getImageableY());
		/* Now we perform our rendering */
 
		g.setFont(new Font("Comic Sans", 0, 8));
		g.drawString("Hello world !", 0, 10);
		
		return PAGE_EXISTS;
	}
 
	public static void printString(String printerName, String text) throws UnsupportedEncodingException, PrintException 
	{
		//System.out.println("Hit 6");
		// find the printService of name printerName
		DocFlavor flavor=DocFlavor.BYTE_ARRAY.AUTOSENSE;
		PrintRequestAttributeSet pras=new HashPrintRequestAttributeSet();
		//pras.add(TXT_NORMAL);

		PrintService printService[]=PrintServiceLookup.lookupPrintServices(flavor, pras);
		PrintService service=findPrintService(printerName, printService);
		//System.out.println("printService:"+printService);
		//System.out.println("service:"+service);
		//System.out.println("printerName:"+printerName);

		DocPrintJob job=service.createPrintJob();//service is null, (compare name:EPSON TM-T20II:EPSON-TM-T20II:Name9)
		//System.out.println(job);

		byte[] bytes;
		// important for umlaut chars
		bytes=text.getBytes("CP437");

		Doc doc=new SimpleDoc(bytes, flavor, null);

		job.print(doc, null);
 
	}
 
	public static void printBytes(String printerName, byte[] bytes) throws PrintException 
	{
		//System.out.println("Hit 7");
		DocFlavor flavor=DocFlavor.BYTE_ARRAY.AUTOSENSE;
		PrintRequestAttributeSet pras=new HashPrintRequestAttributeSet();

		PrintService printService[]=PrintServiceLookup.lookupPrintServices(flavor, pras);
		PrintService service=findPrintService(printerName, printService);
 
		DocPrintJob job=service.createPrintJob();

		Doc doc=new SimpleDoc(bytes, flavor, null); 
		job.print(doc, null);
 

	}
	
	private static PrintService findPrintService(String printerName, PrintService[] services) 
	{
		//System.out.println("Hit 8");
		//String testName, testTo;
		//char testChar, testToChar;
		for (PrintService service : services) 
		{
			//System.out.println("Hit 9");
			//System.out.println("compare name:"+service.getName()+":"+printerName+":Name9");
			
			/*testName=service.getName();
			testTo=printerName;
			testChar=testName.charAt(10);
			testToChar=testTo.charAt(10);
			System.out.println(testName+":"+testTo+":"+testChar+":"+testToChar);*/
			//System.out.println(activate);

			if (service.getName().equalsIgnoreCase(printerName)); 
			{
				return service;
			}
			
			
		}
		//System.out.println("Hit 11");
		return null;
	}
}
