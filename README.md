<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">


<!-- PROJECT LOGO -->
<br />
<p align="center">
    <a href="https://droptopfour.com">
        <img src="https://user-images.githubusercontent.com/66331265/143691398-b730e847-00dc-4e43-8b87-d066cbd6407d.png"
            alt="Logo"  style='height: 100%; width: 100%; object-fit: contain'>
    </a>
</p>

<!-- TITLE -->
<h1 align="center">DROPTOP FOUR COMMUNITY APPS</h1>

<!-- DROPTOP SITE -->
<p align="center">
    <a href="https://blacksquare88.wixsite.com/droptop4/creations"><img
            src="https://img.shields.io/static/v1?label=See+On&message=Droptop+Four+Website&color=50AE5C&style=for-the-badge" alt="See On Droptop Four Website"></a>
</p>



<!-- INTRO -->
<p align="center">
    <b>This is a Repository that contains all the Commuinty Apps available to download on the <a href="https://blacksquare88.wixsite.com/droptop4/creations">DroptopFour website</a> and the full tutorial to create your personal Droptop Custom App<br><br></b>
</p>



<!-- APP CREATION -->
<h2 align="center">HOW TO MAKE AN APP</h2>
 
<p>
  <strong>Before you begin</strong>: You should have a basic understanding of how to create skins with Rainmeter. Get help on the <a href="https://forum.rainmeter.net/index.php">Rainmeter.net forums</a> or on the <a href="https://discord.gg/rainmeter">Rainmeter Discord</a>.
</p>

<p>
    <b>Step 1</b><br>
    Navigate to <code>Documents\Rainmeter\Skins\Droptop Community Apps\Apps\</code>.<br><br>
    <b>Step 2</b><br>
    Copy and paste one of these apps you'd like to use as a template for creating your app. Rename the folder to the name of your app, followed by your name. For example, rename <code>SampleApp1-Cariboudjan - Copy</code> to <code>SystemMonitor-JohnSmith</code>.<br>
    <i style="color:red"><strong>IMPORTANT</strong></i> - Your folder's name must be one word with no spaces, like in the example above. It's recommended that you use the format shown above. Example: AppName-YourName<br><br>
    <b>Step 3</b><br>
    Refresh Rainmeter.<br><br>
    <b>Step 4</b><br>
    Go to the Droptop home button >> Select "Droptop settings" >> "Community Apps" >> Select a slot >> Select your new app. If it isn't already enabled, right-click on the Droptop app tray (top-right corner) and make sure that app slot is enabled.<br><br>
    <b>Step 5</b><br>
    In your app's folder, edit the CustomApp.ini file. Edit the <code>NumberOfItems</code> variable to reflect the number of items in your dropdown menu (Maximum 10). Change <code>NumberOfBoxes</code> to reflect how many boxes you'll be using (Maximum 5).<br><br>
    <b>Step 6</b><br>
    Below that, you'll see <code>ItemTextX</code>, <code>ItemIsFolderX</code>, and <code>ItemActionX</code>. These represent each item in the Dropdown menu, in order from the topmost item to the bottommost item in the list. If <code>ItemIsFolderX</code> is a folder that opens more options, set that value to <code>1</code>. Otherwise, set it to <code>0</code>.<br><br>
    <b>Step 7</b><br>
    Set each item's action. To set an action, you must have an understanding of <a href="https://docs.rainmeter.net/manual/bangs/">Rainmeter bangs</a>. Bangs are instructions of what action to perform when that item is selected.<br><br>
    <b>Step 8</b><br>
    After you've made a few items for your dropdown menu, now you can make icons for your dropdown menu. First, create a fun button for your app in the top bar. Go to the <code>Button</code> folder in your app folder. Inside you'll see two folders called <code>Medium</code> and <code>Small</code>. Edit the <code>.png</code> files in Photoshop, GIMP, or another advanced image editor. Create a 32x32 sized icon for your app in the <code>Medium</code> folder, and a 16x16 sized icon for your app in the <code>Small</code> folder. The canvas size of each icon should remain the same. Edit the file - Do not replace the image with another image. The icon you create should always be a pure white color.<br><br>
    <b>Step 9</b><br>
    You can now also make icons for all of your individual items in the dropdown menu. Under the <code>Icons</code> folder, you can replace these icons with any 32x32 icon. The icon you create should always be a pure white color.<br><br>
    <b>Step 10</b><br>
    Repeat this step for any submenus you've created for your app. Go to <code>Folder\Icons\</code> and set the icons in the same way as you did in Step 9 for the folder number that corresponds to the position of that submenu in the dropdown menu.<br><br>
    <b>Step 11</b><br>
    Continue editing the <code>CustomApp.ini</code> until it meets the design you had in mind. When you're finished, proceed to compile and share your app with the world.<br><br>
</p>

<!-- APP CREATION -->
<h2 align="center">HOW TO SHARE AN APP</h2>

<p>
    <b>Step 1</b><br>
    Go to <code>Documents\Rainmeter\Skins\Droptop Community Apps\Apps\</code>.<br><br>
    <b>Step 2</b><br>
    Delete all of the apps except the app you're sharing.<br><br>
    <b>Step 3</b><br>
    Right-click on the Rainmeter icon in the system tray. Select Manage >> Create <code>.rmskin</code> package.<br><br>
    <b>Step 4</b><br>
    Enter the name of your app, the author (your name), and a version number of your choice.<br><br>
    <b>Step 5</b><br>
    Select "Add skin..." and select "Droptop Community Apps" from the dropdown menu. Press "Add". If there are any plugins necessary for your app, select them with the "Add plugin..." button. Otherwise, select "Next". Under "After installation", keep the "Do nothing" button selected.<br><br>
    <b>Step 6</b><br>
    <i style="color:red"><strong>IMPORTANT</strong></i> - Go to the "Advanced" tab and check the "Merge skins" box. Make sure this box is selected.<br><br>
    <b>Step 7</b><br>
    Select "Create package". After a few seconds, a <code>.rmskin</code> file will be located on your desktop. This is the installer for your skin. When others install this package, your app will appear in their list of available custom apps.<br><br>
    <b>Step 8</b><br>
    Go back to the <code>Droptop Community Apps\Apps</code> folder. Press Ctrl+Z to get your other community apps back from the recycle bin.<br><br>
    <b>Step 9</b><br>
    Share your creation on the Droptop Discord <a href="https://discord.gg/xGdEzpdzXk">#💻╏app-releases</a> channel.<br><br>
</p>


<!-- DROPTOPFOUR DISCORD -->
<p><h2 align="center">Join the Community Now!!</h2></p>

<!-- DISCORD BANNER -->
<p align="center">
  <a href="https://discord.gg/aGQ6uE4Fgp" target="_blank">
    <img src="https://discordapp.com/api/guilds/800124057923485728/widget.png?style=banner3" alt="Discord Community Invite"/>
  </a>
</p>


<!-- DROPTOPFOUR CONTACTS -->
<p><h2 align="center">Contacts</h2></p>

<!-- CONTACTS -->
<p align="center">
    <a href="https://www.deviantart.com/cariboudjan/art/droptop-four-762812007">
      <img src="https://img.shields.io/badge/DeviantArt-05CC47?style=for-the-badge&logo=deviantart&logoColor=white" alt="deviantArt"></a>
    <a href="https://github.com/Droptop-Four">
      <img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white" alt="Github"></a>
    <a href="https://cariboudjan.gumroad.com/l/droptop">
      <img src="https://img.shields.io/badge/Gumroad-36A9AE?style=for-the-badge&logo=gumroad&logoColor=white" alt="Gumroad"></a>
    <a href="https://discord.gg/aGQ6uE4Fgp">
      <img src="https://img.shields.io/badge/Discord-5865F2?style=for-the-badge&logo=discord&logoColor=white" alt="Discord"></a>
</p>  
