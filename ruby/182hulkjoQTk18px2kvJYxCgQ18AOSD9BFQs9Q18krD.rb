
        
        def build_configs(overrides, base_hash = Jekyll::Configuration::DEFAULTS)
  Jekyll::Utils.deep_merge_hashes(base_hash, overrides)
end
    
    Jekyll::PluginManager.require_from_bundler
    
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
            Jekyll.logger.error 'Dependency Error:', <<-MSG
Yikes! It looks like you don't have #{name} or one of its dependencies installed.
In order to use Jekyll as currently configured, you'll need to install this gem.
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
      MAIN_KEYS = %w[title message text main value]
    
          if options[:roles].is_a?(Symbol)
        options[:roles] = [options[:roles]]
      end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
      def retry_queued
    @jobs = Delayed::Job.awaiting_retry.update_all(run_at: Time.zone.now)
    
    respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'Queued jobs getting retried.' }
      format.json { head :no_content }
    end
  end
    
        def log_status(status)
      puts bold status
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
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

    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
            def operator
          assignment_node = meta_assignment_node || @node
          assignment_node.loc.operator.source
        end
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
              [optarg_positions, arg_positions]
        end
      end
    end
  end
end
