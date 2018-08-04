
        
          # @private
  def unused_options
    @options - @args
  end
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
      private
    
        # Unbrewed uses the PREFIX, which will exist
    # Things below use the CELLAR, which doesn't until the first formula is installed.
    unless HOMEBREW_CELLAR.exist?
      raise NoSuchKegError.new(ARGV.named.first) if ARGV.named.any?
      return
    end
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
      private
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
        o = Object.new
    assert_warn(/circular argument reference - var/) do
      o.instance_eval('def foo(var: bar {var}) var end')
    end
    
      it 'wraps and unwraps data' do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct(a).should == 1024
  end
    
        use_ui @ui do
      @cmd.execute
    end
    
      def test_debug
    assert_in_out_err(['--disable-gems', '-de', 'p $DEBUG'], '', %w(true), [])
    
            unless password_matches
          error('%s: password unmatch.', userid)
          challenge(req, res)
        end
        info('%s: authentication succeeded.', userid)
        req.user = userid
      end
    
    $packages &&= $packages.split(/[, ]+/).tap {|pkg|
  if all = pkg.index('all')
    pkg[all, 1] = PACKAGES.keys - pkg
  end
  pkg -= PACKAGES.keys
  pkg.empty? or abort '#{File.basename $0}: unknown packages - #{pkg.join(', ')}'
}
$packages ||= PACKAGES.keys
    
          result << 0
      condvar.wait(mutex)
      result << 2
      t.join
    end
    assert_equal([0, 1, 2], result)
  end
    
          next if path.symlink? || path.directory?
    
      def cleanup
    if ARGV.named.empty?
      Cleanup.cleanup
    else
      Cleanup.cleanup_cellar(ARGV.resolved_formulae)
    end
    
      File.unlink(out) if (File.size(out) == 0)
    
          when :login_pass
        if(s[:user] and s[:pass])
          report_auth_info(s)
          print_status('Successful FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
          # Remove it form the session objects so freeup memory
          sessions.delete(s[:session])
          return
        end
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    require 'openssl'
require 'rex'
    
      when '6.1.3'
    __NR_execve      = 7
    __NR_getpeername = 205
    __NR_accept      = 232
    __NR_listen      = 235
    __NR_bind        = 237
    __NR_socket      = 238
    __NR_connect     = 239
    __NR_close       = 272
    __NR_kfcntl      = 644
    
    		# End the last block
		unless block_size == 0
			block_end
		end
	end
    
      def ruby_prefix
    RbConfig::CONFIG['prefix']
  end
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
        mkdir_p page_dir
    file = '#{page_dir}/#{filename}.#{extension}'
    if File.exist?(file)
      abort('rake aborted!') if ask('#{file} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
    end
    puts 'Creating new page: #{file}'
    open(file, 'w') do |page|
      page.puts '---'
      page.puts 'layout: page'
      page.puts 'title: \'#{title}\''
      page.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M')}'
      page.puts 'comments: true'
      page.puts 'sharing: true'
      page.puts 'footer: true'
      page.puts '---'
    end
  else
    puts 'Syntax error: #{args.filename} contains unsupported characters'
  end
end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    end
