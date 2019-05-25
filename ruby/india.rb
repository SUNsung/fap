
        
                  # Generate default options for collection helpers, such as :checked and
          # :disabled.
          def default_html_options_for_collection(item, value)
            html_options = @html_options.dup
    
              if name_and_id['for']
            name_and_id['id'] = name_and_id['for']
          else
            name_and_id.delete('id')
          end
    
            def ref
          @symbol
        end
        alias to_sym ref
    
          test 'when layout is specified as a string, but the layout is missing, raise an exception' do
        assert_raises(ActionView::MissingTemplate) { WithMissingLayout.new.process(:index) }
      end
    
            SiteSetting.enable_markdown_linkify = false
        cooked = PrettyText.markdown(md, sanitize: false)
        cooked.strip!
        cooked.gsub!(' class=\'lang-auto\'', '')
        cooked.gsub!(/<span class='hashtag'>(.*)<\/span>/, '\\1')
        # we don't care about this
        cooked.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('language-ruby', 'lang-ruby')
        # strip out unsupported languages
        html.gsub!(/ class='language-[;f].*'/, '')
    
          RailsMultisite::ConnectionManagement.with_connection(db) do
        begin
          warning_job = @reactor.queue(@timeout) do
            Rails.logger.error ''#{desc}' is still running after #{@timeout} seconds on db #{db}, this process may need to be restarted!'
          end if !non_block
          job.call
        rescue => ex
          Discourse.handle_job_exception(ex, message: 'Running deferred code '#{desc}'')
        ensure
          warning_job&.cancel
        end
      end
    rescue => ex
      Discourse.handle_job_exception(ex, message: 'Processing deferred code queue')
    ensure
      ActiveRecord::Base.connection_handler.clear_active_connections!
    end
  end
    
      def report_collection_enabled?
    SiteSetting.content_security_policy_collect_reports
  end
end

    
        def normalize(directive)
      directive.to_s.gsub('-', '_').to_sym
    end
    
        builder.build
  end
end
    
      def set_cache_control_headers
    if Rails.env.development?
      response.headers['Last-Modified'] = Time.zone.now.httpdate
      immutable_for(1.second)
    else
      response.headers['Last-Modified'] = last_modified.httpdate if last_modified
      immutable_for(1.year)
    end
  end
end

    
              raise Discourse::InvalidParameters.new('option_id is invalid') unless poll_option
    
        # bypass if we have the shared session header
    if shared_key = @env['HTTP_X_SHARED_SESSION_KEY']
      uid = $redis.get('shared_session_key_#{shared_key}')
      user = nil
      if uid
        user = User.find_by(id: uid.to_i)
      end
      @env[CURRENT_USER_KEY] = user
      return user
    end
    
        def test_last_value
      assert_nil(@context.last_value)
      assert_nil(@context.evaluate('_', 1))
      obj = Object.new
      @context.set_last_value(obj)
      assert_same(obj, @context.last_value)
      assert_same(obj, @context.evaluate('_', 1))
    end
    
            when 3	# binding in function on TOPLEVEL_BINDING(default)
          @binding = eval('self.class.send(:remove_method, :irb_binding) if defined?(irb_binding); def irb_binding; private; binding; end; irb_binding',
                          TOPLEVEL_BINDING,
                          __FILE__,
                          __LINE__ - 3)
        end
      end
      if main.empty?
        @main = eval('self', @binding)
      else
        @main = main[0]
        IRB.conf[:__MAIN__] = @main
        case @main
        when Module
          @binding = eval('IRB.conf[:__MAIN__].module_eval('binding', __FILE__, __LINE__)', @binding, __FILE__, __LINE__)
        else
          begin
            @binding = eval('IRB.conf[:__MAIN__].instance_eval('binding', __FILE__, __LINE__)', @binding, __FILE__, __LINE__)
          rescue TypeError
            IRB.fail CantChangeBinding, @main.inspect
          end
        end
      end
      @binding.local_variable_set(:_, nil)
    end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
      # Precompile additional assets.
  # application.js, application.css, and all non-JS/CSS in app/assets folder are already added.
  # config.assets.precompile += %w( search.js )
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    module Capistrano
  class Configuration
    # Decorates a Variables object to additionally perform an optional set of
    # user-supplied validation rules. Each rule for a given key is invoked
    # immediately whenever `set` is called with a value for that key.
    #
    # If `set` is called with a callable value or a block, validation is not
    # performed immediately. Instead, the validation rules are invoked the first
    # time `fetch` is used to access the value.
    #
    # A rule is simply a block that accepts two arguments: key and value. It is
    # up to the rule to raise an exception when it deems the value is invalid
    # (or just print a warning).
    #
    # Rules can be registered using the DSL like this:
    #
    #   validate(:my_key) do |key, value|
    #     # rule goes here
    #   end
    #
    class ValidatedVariables < SimpleDelegator
      include Capistrano::ProcHelpers
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
      # Suppress logger output for asset requests.
  config.assets.quiet = true
    
      # `config.assets.precompile` and `config.assets.version` have moved to config/initializers/assets.rb