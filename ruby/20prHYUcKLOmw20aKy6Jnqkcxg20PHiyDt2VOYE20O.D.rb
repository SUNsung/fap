
        
        def fixture_site(overrides = {})
  Jekyll::Site.new(site_configuration(overrides))
end
    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
            c.action do |args, opts|
          Jekyll::Commands::NewTheme.process(args, opts)
        end
      end
    end
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
        # @abstract
    #
    # Create a (new) clone of the remote-repository on the deployment target
    #
    # @return void
    #
    def clone
      raise NotImplementedError, 'Your SCM strategy module should provide a #clone method'
    end
    
      desc 'Finished'
  task :finished do
  end
    
              add_offense(node)
        end
    
      def default_metadata
    @factory.build(:default_metadata).all
  end
    
      def self.plugin_type
    'codec'
  end