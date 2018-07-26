
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
        if !Language::Python.in_sys_path?('python', homebrew_site_packages)
      s = <<-EOS.undent
        Python modules have been installed and Homebrew's site-packages is not
        in your Python sys.path, so you will not be able to import the modules
        this formula installed. If you plan to develop with these modules,
        please run:
      EOS
      s += instructions
    elsif keg.python_pth_files_installed?
      s = <<-EOS.undent
        This formula installed .pth files to Homebrew's site-packages and your
        Python isn't configured to process them, so you will not be able to
        import the modules this formula installed. If you plan to develop
        with these modules, please run:
      EOS
      s += instructions
    end
    s
  end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
                o.on('-f', '--force', 'Remove without confirmation.') do |f|
              options[:force] = f
            end
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant cap [options] TYPE NAME [args]'
          o.separator ''
          o.separator 'This is an advanced command. If you don't know what this'
          o.separator 'does and you aren't explicitly trying to use it, you probably'
          o.separator 'don't want to use this.'
          o.separator ''
          o.separator 'This command checks or executes arbitrary capabilities that'
          o.separator 'Vagrant has for hosts, guests, and providers.'
          o.separator ''
          o.separator 'Options:'
          o.separator ''
    
        def teardown
      if @worker_pid && @worker_in
        begin
          begin
            @worker_in.puts 'quit'
          rescue IOError, Errno::EPIPE
          end
          Timeout.timeout(2) do
            Process.waitpid(@worker_pid)
          end
        rescue Timeout::Error
          begin
            Process.kill(:KILL, @worker_pid)
          rescue Errno::ESRCH
          end
        end
      end
    ensure
      begin
        @worker_in.close
        @worker_out.close
      rescue Errno::EPIPE
        # may already broken and rescue'ed in above code
      end
    end
    
      def self.block_device
    raise 'Could not find a block device' unless @block
    yield @block
  end
    
          it 'allows Turkic as an extra option (and applies Turkic semantics)' do
        'iS'.swapcase(:lithuanian, :turkic).should == 'İs'
      end
    
      def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end
    
              # Check for http:// GitHub repo urls, https:// is preferred.
          gh_pattern = %r{^http://github\.com/.*\.git$}
          audit_urls(urls, gh_pattern) do |_, url|
            problem 'Please use https:// for #{url}'
          end
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
      desc 'Update server(s) by setting up a new release.'
  task :updating do
  end