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
    <a href="https://droptop-four.github.io/community-apps/"><img
            src="https://img.shields.io/static/v1?label=See+On&message=Droptop+Four+Website&color=50AE5C&style=for-the-badge" alt="See On Droptop Four Website"></a>
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
    Make a copy of one of these apps you’d like to use as a template for creating your app. Rename the folder to the name of your app, followed by your name. For example, rename <code>Sample_App-Cariboudjan - Copy</code> to <code>SystemMonitor-JohnSmith</code>.<br>
    <strong>IMPORTANT</strong> - Your folder’s name must be one word with no spaces, like in the example above. Use an underscore in the place of a space, and a dash to separate the app name from the author’s name. It is recommended that you use the format shown: App_Name-Your_Name<br><br>
    <b>Step 3</b><br>
    Refresh Rainmeter.<br><br>
    <b>Step 4</b><br>
    Go to Droptop settings >> Community Apps >> Select a slot >> Select your new app. Your app should now be enabled in Droptop, ready for editing.<br><br>
    <b>Step 5</b><br>
    In your app's folder, edit the <code>CustomApp.ini</code> file. Edit the <code>NumberOfItems</code> variable to reflect the number of items in your dropdown menu (Maximum 10). Change <code>NumberOfBoxes</code> to reflect how many boxes you'll be using (Maximum 5).<br><br>
    <b>Step 6</b><br>
    Below that, you'll see <code>ItemTextX</code>, <code>ItemIsFolderX</code>, and <code>ItemActionX</code>. These represent each item in the Dropdown menu, in order from the topmost item to the bottommost item in the list. If <code>ItemIsFolderX</code> is a folder that opens more options, set that value to <code>1</code>. Otherwise, set it to <code>0</code>.<br><br>
    <b>Step 7</b><br>
    Set each item's action. To set an action, you must have an understanding of <a href="https://docs.rainmeter.net/manual/bangs/">Rainmeter bangs</a>. Bangs are instructions of what action to perform when that item is selected. When ItemIsFolderX is equal to <code>1</code>, the actions will not be triggered, instead a submenu will be opened.<br><br>
    <b>Step 8</b><br>
    After you've made a few items for your dropdown menu, now you can make icons for your dropdown menu. First, create a fun button for your app in the top bar. Go to the <code>Button</code> folder in your app folder. You will find 2 <code>.png</code> files. <code>Button.png</code> will be your icon, and <code>ButtonS.png</code> will be your icon with a drop shadow effect applied to it. Edit the <code>.png</code> files in Photoshop, GIMP, or another advanced image editor.<br>
    <strong>IMPORTANT</strong> - The canvas size of the button should be 78x52, and the button names must remain as <code>Button.png</code> and <code>ButtonS.png</code> and should be a pure white color. For an automatic way of generating the appropriate icons, first find or make an icon with a 32x32 canvas size and save it to your desktop. Drag the icon to the Home Button at the top-right corner of Droptop. <code>Button.png</code> and <code>ButtonS.png</code> will automatically be generated in <code>Documents\Rainmeter\Skins\Droptop Folders\Other files\Home\</code>.<br><br>
    <b>Step 9</b><br>
    You can now also make icons for all of your individual items in the dropdown menu. Under the <code>Icons</code> folder, you can replace these icons with any 32x32 icon. The icon you create should always be a pure white color. The canvas size of each icon should remain the same.<br><br>
    <b>Step 10</b><br>
    Repeat this step for any submenus you've created for your app. Go to <code>Folder\Icons\</code> and set the icons in the same way as you did in Step 9 for the folder number that corresponds to the position of that submenu in the dropdown menu.<br><br>
    <b>Step 11</b><br>
    Continue editing the <code>CustomApp.ini</code> until it meets the design you had in mind. When you're finished, proceed to compile and share your app with the world.<br><br>
    <b>Tips</b><br>
    <ul>
        <li>Store & write any variables for your app in the <code>Variables\Variables.inc</code> file. <code>VariablesDefault.inc</code> should be a duplicate of <code>Variables.inc</code>, with all keys set to their default values.</li>
        <li>Use the <code>Startup\Startup.ini</code> file to create a setup screen for your app, or execute any special commands when the app is loaded for the first time.</li>
        <li>Use <code>Scripts\AutoCompile.ps1</code> to add PowerShell commands to automatically run when the <code>.rmskin</code> is generated in Droptop Settings >> Support >> Developer tools >> Generate .rmskin</li>
        <li>Use <code>BarModifier\BarModifierX.inc</code> to modify the behavior of your app’s button in the top bar. 1-5 represent the slot number your app is in. Generally speaking, each <code>BarModifierX.inc</code> file should be identical, except for its section name <code>[CustomAppX]</code> should represent the correct slot of each file.</li>
        <li><code>BackgroundProcesses\BackgroundProcesses.inc</code> will allow your app to run measures in the background, even when your app is not open.</li>
    </ul><br><br>
    <b>Built-in variables</b><br>
    <ul>
        <li><code>[#App_Name-Your_Name]</code><br>Equals the slot number your app is in (equals 1, 2, or 3)</li>
        <li><code>[#CustomAppID[#App_Name-Your_Name]]</code><br>Equals the name of your app</li>
        <li><code>[#CustomAppActiveID[#App_Name-Your_Name[#HideAppCustomApp[#App_Name-Your_Name]]]]</code><br>Equals the the name of your app only if your app is active - If not active, equals nothing.</li>
        <li><code>[#HideAppCustomApp[#App_Name-Your_Name]]</code><br>Equals 0 if your app is active - 1 if inactive.</li>
    </ul>
</p>
