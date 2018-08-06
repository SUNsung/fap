
        
                def properly_gathered_posts?(site)
          return true if site.config['collections_dir'].empty?
          posts_at_root = site.in_source_dir('_posts')
          return true unless File.directory?(posts_at_root)
          Jekyll.logger.warn 'Warning:',
                             'Detected '_posts' directory outside custom `collections_dir`!'
          Jekyll.logger.warn '',
                             'Please move '#{posts_at_root}' into the custom directory at ' \
            ''#{site.in_source_dir(site.config['collections_dir'])}''
          false
        end
    
          mutable false
    
          #
      # Require a gem or gems. If it's not present, show a very nice error
      # message that explains everything and is much more helpful than the
      # normal LoadError.
      #
      # names - a string gem name or array of gem names
      #
      def require_with_graceful_fail(names)
        Array(names).each do |name|
          begin
            Jekyll.logger.debug 'Requiring:', name.to_s
            require name
          rescue LoadError => e
            Jekyll.logger.error 'Dependency Error:', <<~MSG
              Yikes! It looks like you don't have #{name} or one of its dependencies installed.
              In order to use Jekyll as currently configured, you'll need to install this gem.
    
    # puts '\nDone.'

    
      class Worker < LongRunnable::Worker
    # Optional
    #   Called after initialization of the Worker class, use this method as an initializer.
    def setup; end
    
      def tumblr_oauth_token
    service.token
  end
    
        direction = direction.to_s == 'desc' ? 'desc' : 'asc'
    
      it 'uses '-e' as file' do
    ruby_exe('puts __FILE__', escape: false).chomp.should == '-e'
  end
    
        # This spec is probably system-dependent.
    it 'doesn't block if no child is available when WNOHANG is used' do
      read, write = IO.pipe
      pid = Process.fork do
        read.close
        Signal.trap('TERM') { Process.exit! }
        write << 1
        write.close
        sleep
      end
    
      ##
  # Closes the TarWriter
    
          ##
      # Flush the password database.  If +output+ is given the database will
      # be written there instead of to the original path.
    
            candidates = Regexp.instance_methods.collect{|m| m.to_s}
        select_message(receiver, message, candidates)
    
    def assert_finish(timeout_seconds, testsrc, message = '')
  newtest
  show_progress(message) {
    faildesc = nil
    filename = make_srcfile(testsrc)
    io = IO.popen('#{@ruby} -W0 #{filename}')
    pid = io.pid
    waited = false
    tlimit = Time.now + timeout_seconds
    diff = timeout_seconds
    while diff > 0
      if Process.waitpid pid, Process::WNOHANG
        waited = true
        break
      end
      if io.respond_to?(:read_nonblock)
        if IO.select([io], nil, nil, diff)
          begin
            io.read_nonblock(1024)
          rescue Errno::EAGAIN, EOFError
            break
          end while true
        end
      else
        sleep 0.1
      end
      diff = tlimit - Time.now
    end
    if !waited
      Process.kill(:KILL, pid)
      Process.waitpid pid
      faildesc = pretty(testsrc, 'not finished in #{timeout_seconds} seconds', nil)
    end
    io.close
    faildesc
  }
end
    
        t = Thread.new { tester.sync_lock(:EX) }
    
    module Paperclip
  class AttachmentRegistry
    include Singleton
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
        rake_tasks { load 'tasks/paperclip.rake' }
  end