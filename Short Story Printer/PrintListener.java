 

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;

import javax.print.PrintException;

public class PrintListener implements ActionListener 
{

	public void actionPerformed(ActionEvent e) 
	{
		try 
		{
			StoryPrint.main();
		} catch (PrintException e1) 
		{
			e1.printStackTrace();
		} 
		catch (IOException e1) 
		{
			e1.printStackTrace();
		}
	}

	public static void main(String[] args)throws IOException 
	{

	}

}
