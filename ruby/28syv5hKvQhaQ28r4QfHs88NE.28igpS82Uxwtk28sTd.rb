
        
          describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
            context 'when the schema_version is less than 1' do
          before do
            valid_parsed_weather_agent_data[:keep_events_for] = 2
            valid_parsed_data.delete(:schema_version)
          end
    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        attr_accessor :name, :type, :path
    
          def process_url?(url)
        base_urls.any? { |base_url| base_url.contains?(url) }
      end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
          def print_deprecation_warnings_if_applicable
        if using_default_scm?
          warn_add_git_to_capfile unless scm_plugin_installed?
        elsif built_in_scm_name?
          warn_set_scm_is_deprecated
        elsif third_party_scm_name?
          warn_third_party_scm_must_be_upgraded
        end
      end
    
    set_if_empty :pty, false