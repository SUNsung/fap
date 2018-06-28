
        
            # Whether the collection's documents ought to be written as individual
    #   files in the output.
    #
    # Returns true if the 'write' metadata is true, false otherwise.
    def write?
      !!metadata.fetch('output', false)
    end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            # Build your jekyll site
        # Continuously watch if `watch` is set to true in the config.
        def process(options)
          # Adjust verbosity quickly
          Jekyll.logger.adjust_verbosity(options)
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
              enable_ssl(opts)
          enable_logging(opts)
          opts
        end
    
          if ARGV.git?
        system 'git', 'init'
        system 'git', 'add', '-A'
      end
      if ARGV.interactive?
        ohai 'Entering interactive mode'
        puts 'Type `exit' to return and finalize the installation'
        puts 'Install to this prefix: #{formula.prefix}'
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      def option_defined?(name)
    @options.include? name
  end
end

    
        def self.cleanup
      cleanup_cellar
      cleanup_cache
      cleanup_logs
      unless ARGV.dry_run?
        cleanup_lockfiles
        rm_DS_Store
      end
    end
    
            tests.each do |test|
          target_module << '\n  target '#{test.name.gsub(/'/, '\\\\\'')}' do\n'
          target_module << '    inherit! :search_paths\n'
          target_module << template_contents(config.default_test_podfile_path, '    ', 'Pods for testing')
          target_module << '\n  end\n'
        end
    
      desc 'Install all spree gems'
  task install: :build do
    for_each_gem do |gem_path|
      Bundler.with_clean_env do
        sh 'gem install #{gem_path}'
      end
    end
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end