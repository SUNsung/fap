
        
          it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
      it 'writes each array element on a line when passes an array' do
    lambda {
      $VERBOSE = true
      warn(['line 1', 'line 2'])
    }.should output(nil, 'line 1\nline 2\n')
  end
    
    # Ensures that the VERSION file has been updated for a new release.
task :check_release do
  version = File.read(scope('VERSION')).strip
  raise 'There have been changes since current version (#{version})' if changed_since?(version)
  raise 'VERSION_NAME must not be 'Bleeding Edge'' if File.read(scope('VERSION_NAME')) == 'Bleeding Edge'
end
    
        def handle_load_error(err)
      dep = err.message[/^no such file to load -- (.*)/, 1]
      raise err if @options[:trace] || dep.nil? || dep.empty?
      $stderr.puts <<MESSAGE
Required dependency #{dep} not found!
    Run 'gem install #{dep}' to get it.
  Use --trace for backtrace.
MESSAGE
      exit 1
    end
  end
end
