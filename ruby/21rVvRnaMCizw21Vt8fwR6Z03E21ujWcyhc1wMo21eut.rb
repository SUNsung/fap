
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
        # Extract options for this collection from the site configuration.
    #
    # Returns the metadata for this collection
    def extract_metadata
      if site.config['collections'].is_a?(Hash)
        site.config['collections'][label] || {}
      else
        {}
      end
    end
    
            # Internal: Gets the filename of the sample post to be created
        #
        # Returns the filename of the sample post, as a String
        def initialized_post_name
          '_posts/#{Time.now.strftime('%Y-%m-%d')}-welcome-to-jekyll.markdown'
        end
    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
          def key?(key)
        (@obj.collections.key?(key) && key != 'posts') || super
      end
    
          def short_year
        @obj.date.strftime('%y')
      end
    
      if tap.nil? || tap.core_tap?
    full_name = name
  else
    full_name = '#{tap}/#{name}'
  end
    
      formula = ARGV.formulae.first
  options = Options.create(ARGV.flags_only)
  build   = Build.new(formula, options)
  build.install
rescue Exception => e
  Marshal.dump(e, error_pipe)
  error_pipe.close
  exit! 1
end

    
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

    
        s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        def self.cleanup_cache
      return unless HOMEBREW_CACHE.directory?
      HOMEBREW_CACHE.children.each do |path|
        if path.to_s.end_with? '.incomplete'
          cleanup_path(path) { path.unlink }
          next
        end
        if path.basename.to_s == 'java_cache' && path.directory?
          cleanup_path(path) { FileUtils.rm_rf path }
          next
        end
        if prune?(path)
          if path.file?
            cleanup_path(path) { path.unlink }
          elsif path.directory? && path.to_s.include?('--')
            cleanup_path(path) { FileUtils.rm_rf path }
          end
          next
        end
    
        if ARGV.include? '--list-checks'
      puts checks.all.sort
      exit
    end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
      def use_sandbox?
    ENV['USE_EVERNOTE_SANDBOX'] == 'true'
  end
    
        respond_to do |format|
      format.html
      format.json { render json: @events }
    end
  end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
          next if path.symlink? || path.directory?