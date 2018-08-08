
        
                  External.require_with_graceful_fail 'jekyll-watch'
          watch_method = Jekyll::Watcher.method(:watch)
          if watch_method.parameters.size == 1
            watch_method.call(
              options
            )
          else
            watch_method.call(
              options, site
            )
          end
        end
      end
    end
  end
end

    
            def deprecated_relative_permalinks(site)
          if site.config['relative_permalinks']
            Jekyll::Deprecator.deprecation_message 'Your site still uses relative permalinks,' \
                                                   ' which was removed in Jekyll v3.0.0.'
            true
          end
        end
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
      def regular?
    !staff?
  end
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
        it 'sets $? to a Process::Status' do
      pid = Process.spawn(ruby_cmd('exit'))
      Process.wait
      $?.should be_kind_of(Process::Status)
      $?.pid.should == pid
    end
    
        assert_equal %w[rdoc ri], @cmd.options[:document]
  end
    
          def reload
        mtime = File::mtime(@path)
        if mtime > @mtime
          @passwd.clear
          File.open(@path){|io|
            while line = io.gets
              line.chomp!
              case line
              when %r!\A[^:]+:[a-zA-Z0-9./]{13}\z!
                if @password_hash == :bcrypt
                  raise StandardError, '.htpasswd file contains crypt password, only bcrypt passwords supported'
                end
                user, pass = line.split(':')
              when %r!\A[^:]+:\$2[aby]\$\d{2}\$.{53}\z!
                if @password_hash == :crypt
                  raise StandardError, '.htpasswd file contains bcrypt password, only crypt passwords supported'
                end
                user, pass = line.split(':')
              when /:\$/, /:{SHA}/
                raise NotImplementedError,
                      'MD5, SHA1 .htpasswd file not supported'
              else
                raise StandardError, 'bad .htpasswd file'
              end
              @passwd[user] = pass
            end
          }
          @mtime = mtime
        end
      end
    
    
    # Set of reserved words used by Ruby, you should not use these for
    # constants or variables
    ReservedWords = %w[
      BEGIN END
      alias and
      begin break
      case class
      def defined do
      else elsif end ensure
      false for
      if in
      module
      next nil not
      or
      redo rescue retry return
      self super
      then true
      undef unless until
      when while
      yield
    ]
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
          def initialize(argv)
        super
        config.silent = false
      end