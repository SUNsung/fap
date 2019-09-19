
        
                def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
            at_css('> h2:first-child').name = 'h1'
    
            Docs::Sphinx::CleanHtmlFilter.new(doc, context, result).call
      end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          protected
    
      #
  # By default, we don't want to send the UUID, but we'll send
  # for certain payloads if requested.
  #
  def include_send_uuid
    false
  end
    
      CachedSize = 616
    
            # PBKDF2 stored in <iterations, salt, entropy> format
        decoded_hash = '$ml$#{iterations}$#{salt}$#{entropy}'
        report_hash('SHA-512 PBKDF2', decoded_hash, user)
      elsif lion? # 10.7
        # pull the shadow from dscl
        shadow_bytes = grab_shadow_blob(user)
        next if shadow_bytes.blank?
    
    puts 'final size: #{output_data.length}'
File.binwrite('exploit.bin', output_data)
    
        when /osx|bsd/
      [
        '/Applications/Google Chrome.app',
        '/Applications/Firefox.app'
      ].each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    when /linux|unix/
      # Need to add support for Linux in the future.
      # But you see, the Linux meterpreter is so broken there is no point
      # to do it now. You can't test anyway.
    end
    
        service_create(datastore['SVC_NAME'], datastore['SVC_DNAME'], file_path.gsub('\\','\\\\'), startup=2, server=nil)
    if service_start(datastore['SVC_NAME']).to_i == 0
      vprint_good('Service Binary #{file_path} Started')
    end
  end
end

    
      #
  # Execute the agent
  #
  if(not remove)
    print_status('Starting the service...')
    client.fs.dir.chdir(tempdir)
    data = m_exec(client, 'metsvc.exe install-service')
    print_line('\t#{data}')
  else
    print_status('Stopping the service...')
    client.fs.dir.chdir(tempdir)
    data = m_exec(client, 'metsvc.exe remove-service')
    print_line('\t#{data}')
  end
    
      # Create a directory for the logs
  if log_path
    logs = ::File.join(log_path, 'logs', 'persistence',
                       Rex::FileUtils.clean_path(host + filenameinfo) )
  else
    logs = ::File.join(Msf::Config.log_directory, 'persistence',
                       Rex::FileUtils.clean_path(host + filenameinfo) )
  end
    
                  <% if frame.post_context %>
              <ol start='<%=h frame.lineno + 1 %>' class='post-context'
                  id='post-<%= id %>' onclick='toggle(<%= id %>);'>
                <% frame.post_context.each do |line| %>
                <li class='post-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
              <div class='clear'></div>
            </li>
    
          def self.random_token
        SecureRandom.base64(TOKEN_LENGTH)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'