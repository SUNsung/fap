
        
            it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy')).to be_a Nokogiri::XML::Element
    end
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
    class Profile
  def pod_bin
    File.expand_path('../pod', __FILE__)
  end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
          def call
        ask_question
        value_or_default
      end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
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
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
    namespace :qa do
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end