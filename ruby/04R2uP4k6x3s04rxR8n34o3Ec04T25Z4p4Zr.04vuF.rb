
        
          it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
      ruby_version_is '2.6' do
    it 'raises RuntimeError when `exception: true` is given and the command exits with a non-zero exit status' do
      lambda { @object.system(ruby_cmd('exit 1'), exception: true) }.should raise_error(RuntimeError)
    end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      test 'edit pages within sub-directories' do
    post '/create', :content => 'big smelly creatures', :page => 'Orc',
         :path               => 'Mordor', :format => 'markdown', :message => 'oooh, scary'
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'