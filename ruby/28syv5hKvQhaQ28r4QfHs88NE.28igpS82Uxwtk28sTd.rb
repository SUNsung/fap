
        
          def print_remaining_files(files, root, other = '')
    case files.length
    when 0
      # noop
    when 1
      puts files
    else
      puts '#{root}/ (#{files.length} #{other}files)'
    end
  end
end

    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
      # Equivalent to Set#flatten, but replaces the receiver with the
  # result in place.  Returns nil if no modifications were made.
  def flatten!
    replace(flatten()) if any? { |e| e.is_a?(Set) }
  end
    
      def test_eq
    set1 = Set[2,3,1]
    set2 = Set[1,2,3]
    
        t = Time.utc(2015, 12, 30, 20, 0, 0).getlocal('+05:00')
    assert_equal('365', t.strftime('%j'))
    t = Time.utc(2016, 12, 30, 20, 0, 0).getlocal('+05:00')
    assert_equal('366', t.strftime('%j'))
    
          configure_sass
    end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          spec['version'] = Bootstrap::VERSION
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication