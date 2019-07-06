
        
        class Tag
  extend ActiveModel::Naming
  include ActiveModel::Conversion
    
        it 'creates an agent with a source and a receiver' do
      visit '/'
      page.find('a', text: 'Agents').trigger(:mouseover)
      click_on('New Agent')
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy')).to be_a Nokogiri::XML::Element
    end
    
        it 'should generate the correct events url' do
      expect(@checker.send(:events_url)).to eq('https://basecamp.com/12345/api/v1/projects/6789/events.json')
    end
    
      #
  # Adds Server headers and stuff.
  #
  def add_response_headers(resp)
    resp['Server'] = self.server_name if not resp['Server']
  end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
      def self.checksum(data)
    sum = 0
    data.unpack('C*').each {|c| sum += c }
    sum = ~sum + 1
    sum & 0xff
  end
    
              private
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
                seq_values.each do |val|
              case val.tag
              when 0
                self.options = decode_options(val)
              when 1
                self.cname = decode_cname(val)
              when 2
                self.realm = decode_realm(val)
              when 3
                self.sname = decode_sname(val)
              when 4
                self.from = decode_from(val)
              when 5
                self.till = decode_till(val)
              when 6
                self.rtime = decode_rtime(val)
              when 7
                self.nonce = decode_nonce(val)
              when 8
                self.etype = decode_etype(val)
              when 10
                self.enc_auth_data = decode_enc_auth_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KdcRequestBody SEQUENCE'
              end
            end
          end
    
              private
    
          spec['version'] = Bootstrap::VERSION
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end