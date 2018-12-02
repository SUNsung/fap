
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
              def tag_id(index = nil)
            # a little duplication to construct less strings
            case
            when @object_name.empty?
              sanitized_method_name.dup
            when index
              '#{sanitized_object_name}_#{index}_#{sanitized_method_name}'
            else
              '#{sanitized_object_name}_#{sanitized_method_name}'
            end
          end
    
        def find_file(path, prefixes = [], *args)
      _find_all(path, prefixes, args, true).first || raise(MissingTemplate.new(self, path, prefixes, *args))
    end
    
        initializer 'action_view.finalize_compiled_template_methods' do |app|
      ActiveSupport.on_load(:action_view) do
        ActionView::Template.finalize_compiled_template_methods =
          app.config.action_view.delete(:finalize_compiled_template_methods)
      end
    end
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
        if superenv?
      ENV.keg_only_deps = keg_only_deps
      ENV.deps = formula_deps
      ENV.x11 = reqs.any? { |rq| rq.is_a?(X11Requirement) }
      ENV.setup_build_environment(formula)
      post_superenv_hacks
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    else
      ENV.setup_build_environment(formula)
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    
      def plist_caveats
    s = []
    if f.plist || (keg && keg.plist_installed?)
      destination = if f.plist_startup
        '/Library/LaunchDaemons'
      else
        '~/Library/LaunchAgents'
      end
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
      module Test
    autoload :ControllerHelpers,  'devise/test/controller_helpers'
    autoload :IntegrationHelpers, 'devise/test/integration_helpers'
  end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
        alias :name :singular
    
    require 'devise/models/authenticatable'

    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
      # Configure an appender that will write log events to STDOUT. A colorized
  # pattern layout is used to format the log events into strings before
  # writing.
  Logging.appenders.stdout('stdout',
                           auto_flushing: true,
                           layout:        Logging.layouts.pattern(
                             pattern:      pattern,
                             color_scheme: 'bright'
                           )
                          ) if config.log_to.include? 'stdout'
    
    When /^I (?:like|unlike) the post '([^']*)' in the stream$/ do |post_text|
  like_stream_post(post_text)
end
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
          it_behaves_like 'on a visible post'
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
          def fake!(&block)
        __set_test_mode(:fake, &block)
      end
    
            options = { secret: secret }
        options = options.merge(s.to_hash) if s.respond_to? :to_hash