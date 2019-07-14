
        
              def cell_prefix(status)
        @prefixes[status]
      end
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
          private
    
          if existing == nil or value > existing then
        redis.call('set', key, value)
        redis.call('expire', key, ttl)
        return true
      else
        return false
      end
      EOF
    
    module Gitlab
  module GithubImport
    # HTTP client for interacting with the GitHub API.
    #
    # This class is basically a fancy wrapped around Octokit while adding some
    # functionality to deal with rate limiting and parallel imports. Usage is
    # mostly the same as Octokit, for example:
    #
    #     client = GithubImport::Client.new('hunter2')
    #
    #     client.labels.each do |label|
    #       puts label.name
    #     end
    class Client
      include ::Gitlab::Utils::StrongMemoize
    
            def representation_class
          Representation::Issue
        end
    
          # The class to use for importing objects when importing them sequentially.
      def importer_class
        raise NotImplementedError
      end
    
            expose_attribute :id, :login
    
      it 'allows to click on on the agent name in select2 tags' do
    visit new_agent_path
    select_agent_type('Website Agent scrapes')
    select2('SF Weather', from: 'Sources')
    click_on 'SF Weather'
    expect(page).to have_content 'Editing your WeatherAgent'
  end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
          describe '#generate_diff' do
        it 'returns AgentDiff objects that include 'current' values from any agents that already exist' do
          agent_diffs = scenario_import.agent_diffs
          weather_agent_diff = agent_diffs[0]
          trigger_agent_diff = agent_diffs[1]
    
        it 'strips leading and trailing dashes' do
      expect(AgentsExporter.new(:name => ',foo,').filename).to eq('foo.json')
    end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
        it 'requires a valid log level' do
      @log.level = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => @opts)
    @checker.user = users(:bob)
    @checker.save!
  end
    
        def version
      context[:version]
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
          def initialize(limit)
        @limit = limit
        @minute = nil
        @counter = 0
      end
    
          INDEX = Set.new
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
            doc
      end
    end
  end
end

    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
            self.description = <<-DESC
          Lints the spec-repo `NAME`. If a directory is provided it is assumed
          to be the root of a repo. Finally, if `NAME` is not provided this
          will lint all the spec-repos known to CocoaPods.
        DESC