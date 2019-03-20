
        
                  add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
        attr_reader :paths
    
          def test_declare_missing_helper
        e = assert_raise AbstractController::Helpers::MissingHelperError do
          AbstractHelpers.helper :missing
        end
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    
          test 'when specify to inherit and an :only option which match current action name and is opposite from parent controller' do
        controller = WithOnlyConditionalFlippedAndInheriting.new
        controller.process(:show)
        assert_equal 'With Implied Hello show!', controller.response_body
      end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
            css('td h3', '.l-sub-section > h3', '.alert h3', '.row-margin > h3').each do |node|
          node.name = 'h4'
        end
    
      def pinned?
    path.symlink?
  end
    
      if config.log_to.include? 'file'
    # Configure an appender that will write log events to a file.
    if AppConfig.environment.logging.logrotate.enable?
      # The file will be rolled on a daily basis, and the rolled files will be kept
      # the configured number of days. Older files will be deleted. The default pattern
      # layout is used when formatting log events into strings.
      Logging.appenders.rolling_file('file',
                                     filename:      config.paths['log'].first,
                                     keep:          AppConfig.environment.logging.logrotate.days.to_i,
                                     age:           'daily',
                                     truncate:      false,
                                     auto_flushing: true,
                                     layout:        layout
                                    )
    else
      # No file rolling, use logrotate to roll the logfile.
      Logging.appenders.file('file',
                             filename:      config.paths['log'].first,
                             truncate:      false,
                             auto_flushing: true,
                             layout:        layout
                            )
    end
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end
    
        it 'does not redirect when the registration is open' do
      AppConfig.settings.enable_registrations = true
    
    module LogStash
  module PluginManager
  end
end
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
        end
  end
end

    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin && loc.begin.is?('do')
      end
    
    module RuboCop
  # Handles caching of configurations and association of inspected
  # ruby files to configurations.
  class ConfigStore
    def initialize
      # @options_config stores a config that is specified in the command line.
      # This takes precedence over configs located in any directories
      @options_config = nil