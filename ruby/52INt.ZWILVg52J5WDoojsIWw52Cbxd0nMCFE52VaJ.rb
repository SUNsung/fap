
        
            def_delegators :@s, :scan_until, :skip_until, :string
    
        while readable_io = IO.select([self_read])
      signal = readable_io.first[0].gets.strip
      handle_signal(launcher, signal)
    end
  #end
rescue SystemExit => e
  #Sidekiq.logger.error('Profiling...')
  #result = RubyProf.stop
  #printer = RubyProf::GraphHtmlPrinter.new(result)
  #printer.print(File.new('output.html', 'w'), :min_percent => 1)
  # normal
rescue => e
  raise e if $DEBUG
  STDERR.puts e.message
  STDERR.puts e.backtrace.join('\n')
  exit 1
end

    
        execute 'ensure-sidekiq-is-setup-with-monit' do 
      command %Q{ 
        monit reload 
      } 
    end
    
    get '/' do
  stats = Sidekiq::Stats.new
  @failed = stats.failed
  @processed = stats.processed
  @messages = $redis.lrange('sinkiq-example-messages', 0, -1)
  erb :index
end
    
          arr = Sidekiq.options[:lifecycle_events][event]
      arr.reverse! if reverse
      arr.each do |block|
        begin
          block.call
        rescue => ex
          handle_exception(ex, { context: 'Exception during Sidekiq lifecycle event.', event: event })
          raise ex if reraise
        end
      end
      arr.clear
    end
  end
end

    
        def erb(content, options = {})
      if content.kind_of? Symbol
        unless respond_to?(:'_erb_#{content}')
          src = ERB.new(File.read('#{Web.settings.views}/#{content}.erb')).src
          WebAction.class_eval('def _erb_#{content}\n#{src}\n end')
        end
      end
    
        args += ['--bindir', bin_path]
    ::FileUtils.mkdir_p(bin_path)
    args << gem_path
    safesystem(*args)
    
      def unpack_data_to
    'files'
  end
    
          if !attributes[:python_setup_py_arguments].nil? and !attributes[:python_setup_py_arguments].empty?
        # Add optional setup.py arguments
        attributes[:python_setup_py_arguments].each do |a|
          flags += [ a ]
        end
      end