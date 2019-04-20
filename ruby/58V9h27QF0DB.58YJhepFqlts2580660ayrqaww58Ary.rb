
        
                  def label(label_html_options = {}, &block)
            html_options = @input_html_options.slice(:index, :namespace).merge(label_html_options)
            html_options[:for] ||= @input_html_options[:id] if @input_html_options[:id]
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
            class << self
          def select_type
            @select_type ||= name.split('::').last.sub('Select', '').downcase
          end
        end
    
        it 'does not send previously configured receivers when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      sleep 0.5
      select2('ZKCD', from: 'Receivers')
      select_agent_type('Email Agent')
      fill_in(:agent_name, with: 'No receivers')
      click_on 'Save'
      expect(page).to have_content('No receivers')
      agent = Agent.find_by(name: 'No receivers')
      expect(agent.receivers).to eq([])
    end
  end
end

    
    describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
        it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
            it 'adds errors when updated agents are invalid' do
          scenario_import.merges = {
            '0' => {
              'name' => '',
              'schedule' => 'foo',
              'keep_events_for' => 2.days.to_i.to_s,
              'options' => weather_agent_options.merge('api_key' => '').to_json
            }
          }
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        def initialize
      @pages = {}
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
            def store_pages(store)
          instrument 'info.doc', msg: 'Fetching redirections...'
          with_redirections do
            instrument 'info.doc', msg: 'Continuing...'
            super
          end
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

    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false