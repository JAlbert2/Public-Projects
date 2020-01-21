import java.util.*;
import java.io.*;

public class StoryPrep 
{
	static File file = new File("");
	
	public static void main(String[] args)throws IOException
	{	
		String story;
		//for(int fr=0;fr<100;fr++)
		{
			story=readStory();
			format(story);
		}
		
		//story="testing testing 1 2 3eeeee I need more text. \"I need more to make this even longer\".";
		
		//System.out.println(story2);
		
	}

	
	public static String format(String story) throws IOException 
	{
		String story2="";
		ArrayList<String> words=new ArrayList<String>();
		String holder="";
		char search;
		
		double pageL=2.6, letter=.125, totalL=0;
		
		for(int i=0;i<story.length();i++)
		{
			search=story.charAt(i);
			//System.out.println(search+":search");
			if(search==' '||search=='.'||search=='-'||search=='?'||search=='!')
			{
				holder+=Character.toString(search);
				words.add(holder);
				holder="";
				//System.out.println("Hit end:"+words);
			}
			else
			{
				holder+=Character.toString(search);
				//System.out.println("Hit else");
			}
		}
		
		ArrayList<Double> length=new ArrayList<Double>();

		for(int x=0;x<words.size();x++)
		{
			totalL=words.get(x).length()*letter;
			//System.out.println(totalL+":total Length");
			length.add(totalL);
		}
		int name=2;
		for(int g=0;g<words.size();g++)
		{
		    //||words.get(g).equalsIgnoreCase("Last word of last name")
		    //Anytime a person has a name longer than 2 words, add the above code in at the end
		    //The end is the second to last ). 
		    //Replace the text in the quotes with their name as stated above
		    if(words.get(g).equalsIgnoreCase("Beek"))
		    {
		        name=g+1;//Sets the length of the name
		        g=words.size();//Terminates the loop
		    }
		}
		ArrayList<Integer> newLine=new ArrayList<Integer>();
		newLine.add(name);
		totalL=0;
		//System.out.println(length+":length array");
		for(int k=name;k<words.size();k++)
		{
			//System.out.println(totalL+":"+length.get(k)+":"+k+"total length:word length:k");
			totalL+=length.get(k);
			//System.out.println(totalL+":"+length.get(k)+":"+k+"total length:word length:k");
			if(totalL>pageL)//New line commands are being read as text. Fix?
			{
				newLine.add(k);
				totalL=0;
				//System.out.println("Hit new line");
			}
			//System.out.println(newLine+"newLine");
		}
		boolean quote=false;

		for(int j=0;j<words.size();j++)
		{
			//System.out.println(j+":"+words.get(j)+"j:word at j");
			if(words.get(j).charAt(0)=='\"'&&quote==false)
			{
				quote=true;
				story2+="\n";
				//System.out.println("Hit quote");
			}
			else if(quote&&words.get(j)!=" "&&words.get(j).charAt(words.get(j).length()-1)=='\"')
			{
				quote=false;
				//System.out.println("Hit unquote");
			}
			story2+=words.get(j);
			for(int y=0;y<newLine.size();y++)
			{
				if(newLine.get(y)==j)
					story2+="\n";
				//System.out.println("Hit new add");
			}
		}
		writeStory(story2);
		story2+="\n\nHave a story?\nSend it to \nalbertjonah@pbsd.net";
		//System.out.println(story+"\n"+words+"\n"+story2+"\nstory:words:story2");
		return story2;
	}

	public static String readStory() throws IOException
	{
		Random rnd=new Random();
		file = new File("");
		
		boolean exists=true;
		int x=0;
		do
		{
			file=new File(Integer.toString(x)+".txt");
			if(!file.exists())
			{
				exists=false;
				x--;
			}
				
			//System.out.println(file+":"+exists);
			x++;
		}while(exists);

		int fName=rnd.nextInt(x);
		//System.out.println(x+":"+fName);
		file=new File(Integer.toString(fName)+".txt");
		String story="";
		//System.out.println(file);
		Scanner inputFile=new Scanner(file);

		while(inputFile.hasNextLine()) 
			story+=inputFile.nextLine();
		inputFile.close();
		//System.out.println(story);
		return story;
	}
	
	public static void writeStory(String story2) throws IOException
	{
		//PrintWriter outputFile=new PrintWriter(file);
		//System.out.println(story2);
		//outputFile.println(story2);
		//outputFile.close();
		
		ArrayList<String> data=new ArrayList<String>();
		File uses=new File("Uses.txt");
		Scanner inputFile=new Scanner(uses);

		while(inputFile.hasNextLine()) 
			data.add(inputFile.nextLine());
		inputFile.close();
		
		//System.out.println(data);
		PrintWriter outputFile2=new PrintWriter(uses);
		for(int i=0;i<data.size();i++)
			outputFile2.println(data.get(i));
		outputFile2.println(file);
		outputFile2.close();
		System.out.println("Done");
	}
}