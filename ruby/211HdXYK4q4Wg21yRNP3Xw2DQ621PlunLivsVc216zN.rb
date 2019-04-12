
        
                a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def as_json
      @pages
    end
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
            css('.toc-close', '.naked-list').remove
      end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        # Unsupported codec, return empty
    else
      dprint('UNKNOWN CODEC: #{self.codec.inspect}')
      ''
    end
  end
    
            # Creates a TCP connection using Rex::Socket::Tcp
        #
        # @return [Rex::Socket::Tcp]
        def create_tcp_connection
          self.connection = Rex::Socket::Tcp.create(
            'PeerHost'   => host,
            'PeerPort'   => port.to_i,
            'Context'    => context,
            'Timeout'    => timeout
          )
        end
    
                encoded
          end
    
              def self.decode(input)
            elem = self.new
            elem.decode(input)
          end
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
    def to_char(c)
  '0123456789BFiuz'.slice(to_integer(c))
end
    
    $pnum=[]
def setpiece(a,pos)
  if a.length == $p.length then
    $no += 1
    pboard
    return
  end
  while $b[pos] != -1
    pos += 1
  end
  ($pnum - a).each do |i|
    $p[i].each do |x|
      f = 0
      x.each{|s|
        if $b[pos+s] != -1
          f=1
          break
        end
      }
      if f == 0 then
        x.each{|s|
          $b[pos+s] = i
        }
        a << i
        setpiece(a.dup, pos)
        a.pop
        x.each{|s|
          $b[pos+s] = -1
        }
      end
    end
  end
end
    
      if config.log_to.include? 'file'
    # Configure an appender that will write log events to a file.
    if AppConfig.environment.logging.logrotate.enable?
      # The file will be rolled on a daily basis, and the rolled files will be kept
      # the configured number of days. Older files will be deleted. The default pattern
      # layout is used when formatting log events into strings.
      Logging.appenders.rolling_file('file',
                                     filename:      config.paths['log'].first,
                                     keep:          AppConfig.environment.logging.logrotate.days.to_i,
                                     age:           'daily',
                                     truncate:      false,
                                     auto_flushing: true,
                                     layout:        layout
                                    )
    else
      # No file rolling, use logrotate to roll the logfile.
      Logging.appenders.file('file',
                             filename:      config.paths['log'].first,
                             truncate:      false,
                             auto_flushing: true,
                             layout:        layout
                            )
    end
  end
    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          def mask_authenticity_token(session)
        token = set_token(session)
        mask_token(token)
      end
    
          def csp_policy
        directives = []
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
            options[:class] = 'sidebar-menu-item d-block w-100'
        options[:class] << ' selected' if is_selected
        content_tag(:li, options) do
          link_to(link_text, url, class: '#{'text-success' if is_selected} py-1 px-3 d-block sidebar-submenu-item')
        end
      end
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end
    
                log_state_changes if params[:state]
    
              if Cart::Update.call(order: @order, params: order_params).success?
            user_id = params[:order][:user_id]
            if current_api_user.has_spree_role?('admin') && user_id
              @order.associate_user!(Spree.user_class.find(user_id))
            end
            respond_with(@order, default_template: :show)
          else
            invalid_resource!(@order)
          end
        end
    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
          def each(&block)
        entries.each(&block)
      end