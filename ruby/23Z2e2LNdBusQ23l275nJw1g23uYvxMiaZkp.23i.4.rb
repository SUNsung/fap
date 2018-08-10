
        
            # The entry filter for this collection.
    # Creates an instance of Jekyll::EntryFilter.
    #
    # Returns the instance of Jekyll::EntryFilter for this collection.
    def entry_filter
      @entry_filter ||= Jekyll::EntryFilter.new(site, relative_directory)
    end
    
          class Servlet < WEBrick::HTTPServlet::FileHandler
        DEFAULTS = {
          'Cache-Control' => 'private, max-age=0, proxy-revalidate, ' \
            'no-store, no-cache, must-revalidate',
        }.freeze
    
          def jekyll
        JekyllDrop.global
      end
    
                  If you run into trouble, you can find helpful resources at https://jekyllrb.com/help/!
            MSG
            raise Jekyll::Errors::MissingDependencyException, name
          end
        end
      end
    end
  end
end

    
          it 'fills the gap with \\0 if buffer content is shorter than offset' do
        n = [ 65, 66, 67 ]
        buffer = '123'
        n.pack('@6ccc', buffer: buffer).should == '123\0\0\0ABC'
      end
    
        it 'does not expand ~ENV['USER'] when it's not at the start' do
      File.expand_path('/~#{ENV['USER']}/a').should == '/~#{ENV['USER']}/a'
    end
    
        ruby_version_is '2.4' do
      it 'case folds' do
        'ß'.casecmp?('ss').should be_true
      end
    end
    
      it 'returns a subclass instance for subclasses' do
    StringSpecs::MyString.new('FOObar').downcase.should be_an_instance_of(StringSpecs::MyString)
  end
end
    
          it 'allows Turkic as an extra option (and applies Turkic semantics)' do
        'iS'.swapcase(:lithuanian, :turkic).should == 'İs'
      end
    
    if Encoding.default_external != Encoding::UTF_8
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
        r0
  end
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end
    
        outpath = file.gsub('.gz', '')
    tgz = Zlib::GzipReader.new(File.open(file))
    begin
      File.open(outpath, 'w') do |out|
        IO::copy_stream(tgz, out)
      end
      File.unlink(file)
    rescue
      File.unlink(outpath) if File.file?(outpath)
     raise
    end
    tgz.close
  end