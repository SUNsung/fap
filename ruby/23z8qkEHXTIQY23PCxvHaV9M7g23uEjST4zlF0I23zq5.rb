
        
            headers
  end
end
    
      def self.headings
    @headings ||= [:likes_received,
                   :likes_given,
                   :topics_entered,
                   :topic_count,
                   :post_count,
                   :posts_read,
                   :days_visited]
  end
    
    class Draft < ActiveRecord::Base
  NEW_TOPIC ||= 'new_topic'
  NEW_PRIVATE_MESSAGE ||= 'new_private_message'
  EXISTING_TOPIC ||= 'topic_'
    
      def build(theme_ids)
    builder = Builder.new
    
        def site_setting_extension
      { script_src: SiteSetting.content_security_policy_script_src.split('|') }
    end
    
          response
    end
    
        plugin.enabled = false
    expect(parse(policy)['script-src']).to_not include('https://from-plugin.com')
    
              [serialized_poll, options]
        end
      end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
              expect(weather_agent.name).to eq('a weather agent')
          expect(weather_agent.schedule).to eq('5pm')
          expect(weather_agent.keep_events_for).to eq(14.days)
          expect(weather_agent.propagate_immediately).to be_falsey
          expect(weather_agent).to be_disabled
          expect(weather_agent.memory).to be_empty
          expect(weather_agent.options).to eq(weather_agent_options)
    
          @log.level = -1
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
            # This returns all the registered configuration classes that were
        # marked as 'upgrade safe.'
        #
        # @return [Hash]
        def config_upgrade_safe
          result = {}
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
              # Add the help option, which must be on every command.
          opts.on_tail('-h', '--help', 'Print this help') do
            safe_puts(opts.help)
            return nil
          end
    
            # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
            # This returns the manager for all V2 plugins.
        #
        # @return [V2::Manager]
        def self.manager
          @manager ||= Manager.new
        end
    
    answer = to_array(solution).map do |p|
  to_string(p)
end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
        desc 'Commits the version to github repository'
    task :commit_version do
      sh <<-SH
        sed -i 's/.*VERSION.*/  VERSION = '#{source_version}'/' lib/sinatra/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' sinatra-contrib/lib/sinatra/contrib/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' rack-protection/lib/rack/protection/version.rb
      SH
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end