
        
          smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
              expect(weather_agent_diff.name.current).to eq(agents(:bob_weather_agent).name)
          expect(weather_agent_diff.name.incoming).to eq(valid_parsed_weather_agent_data[:name])
          expect(weather_agent_diff.name.updated).to eq('a new name')
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        it 'warns and returns nil when not parseable' do
      mock(STDERR).puts('WARNING: Invalid duration format: 'bogus'')
      expect(Utils.parse_duration('bogus')).to be_nil
    end
  end
    
        @opts = {
      'api_key' => '800deeaf-e285-9d62-bc90-j999c1973cc9',
      'path' => 'trackings'
    }
    
        stub(services(:generic)).refresh_token!
  end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
      context 'moving variants between shipments', js: true do
    before do
      create(:stock_location, name: 'LA')
      visit spree.admin_orders_path
      within_row(1) do
        click_link 'R100'
      end
    end
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        def initialize
      clear
    end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end
    
        # Returns the style, or the default style if nil is supplied.
    def style attachment, style_name
      style_name || attachment.default_style
    end
  end
end
