
        
        def piece(n, a, nb)
  nb.each{|x|
    a[n] = x
    if n == NP-1
      $p << [a.sort]
    else
      nbc=nb.dup
      [-ROW, -1, 1, ROW].each{|d|
        if x+d > 0 and not a.include?(x+d) and not nbc.include?(x+d)
          nbc << x+d
        end
      }
      nbc.delete x
      piece(n+1,a[0..n],nbc)
    end
  }
end
    
    Given(/^a linked file '(.*?)'$/) do |file|
  # ignoring other linked files
  TestApp.append_to_deploy_file('set :linked_files, ['#{file}']')
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
          def ask_question
        $stdout.print question
        $stdout.flush
      end
    
            def keys
          @properties.keys
        end
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
        it 'rejects XSS attempts' do
      xss_links.each do |link|
        expect { generate_new_liquid(link) }.to raise_error(StandardError)
      end
    end
  end
end
